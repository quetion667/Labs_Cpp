#pragma once
#include <msclr/marshal.h>
#include <iostream>
#include <vector>
#include <fstream>

int findNum(System::String^ file_name)
{
	using namespace msclr::interop;

	FILE* in, *out;
	int index_of_page = 0;

	//wchar_t *ch_file = new wchar_t[];
	wchar_t ch_for_stream;
	std::vector <wchar_t> vector_all_sym;

	// маршаллим Стриг в КОнст чар*
	marshal_context^ marshal = gcnew marshal_context();
	const char* file_name_char = marshal->marshal_as<const char*>(file_name);
	puts(file_name_char);
	// открываем файл 
	in = fopen(file_name_char, "r");

	// провреяем, что файл открылся, и читаем его в переменную wchar_t 
	int i = 0;
	wchar_t num_of_page = '0';
	int counter_ofF = 0;

	if (in == NULL)
	{
		return 0;
	}
	else
	{
		while (!feof(in))
		{
			vector_all_sym.push_back(getc(in));
			char h = vector_all_sym[i];	
			i++;							
		}
	}
	// Cоздаем поток и открываем файл
	std::ofstream fout;
	fout.open(file_name_char, std::ios_base::out);
	// проверим, открылся ли файл
	if (fout.fail())
	{
		return 0;
	}
	for (int j = 0; j < vector_all_sym.size(); j++)
	{
		if (j > 4)
		{
			if (vector_all_sym[j-2] > 0 && vector_all_sym[j-2] < 1000 && vector_all_sym[j - 3] ==  ' '
									&& vector_all_sym[j -1] == ' ' &&
									vector_all_sym[j - 4] == '-' && vector_all_sym[j] == '-')
			{
				num_of_page = vector_all_sym[j - 2];
			}
		}
		if (vector_all_sym[j] == '\f')
		{
			fout << (char) num_of_page;
			index_of_page = j;
		}
		fout << (char) vector_all_sym[j];
	}
	fout.close();
	delete marshal;
	fclose(in);
	return index_of_page;
}

