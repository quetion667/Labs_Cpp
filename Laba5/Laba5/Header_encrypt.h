#pragma once
#include <msclr/marshal.h>
#include <iostream>
#include <vector>
#include <fstream>

System :: String ^ encrypt_file(System :: String ^ name_file,System:: String ^ encrypt_key)
{
	using namespace msclr::interop;

	FILE* in;
	//wchar_t *ch_file = new wchar_t[];
	wchar_t ch_for_stream;
	System::String^ end_string = "";
	std::vector <wchar_t> vector_all_sym;
	const char* key = "abc";
	wchar_t key_t = 'a';

	// маршаллим Стриг в КОнст чар*
	marshal_context^ marshal = gcnew marshal_context();
	const char* file_name_char = marshal->marshal_as<const char*>(name_file);
	puts(file_name_char);
	// открываем файл 
	in = fopen(file_name_char, "r");

	// провреяем, что файл открылся, и читаем его в переменную wchar_t 
	int i = 0;

	if (in == NULL)
	{
		return "not open";
	}
	else
	{
		while (!feof(in))
		{
			vector_all_sym.push_back(getc(in));
		}
	}
	// Cоздаем поток и открываем файл
	std::ofstream fout;
	fout.open("test3.txt", std::ios_base::out);
	// проверим, открылся ли файл
	if (fout.fail())
	{
		return "not open";
	}

	for (int j = 0; j < vector_all_sym.size(); j++)
	{
		for (int k = 0; k < strlen(key); k++)
		{
			vector_all_sym[j] = vector_all_sym[j] ^ key[k];
		}
		fout << (char) vector_all_sym[j] ;
		end_string += (wchar_t) vector_all_sym[j];
	}
	fout.close();
	delete marshal;
	fclose(in);
	return end_string;
}
