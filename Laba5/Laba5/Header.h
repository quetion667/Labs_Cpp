#pragma once
#include <msclr/marshal.h>

int findStr(System::String^ str_must_finded, System::String^ file_name)
{
	using namespace msclr::interop;

	// создание экземпляра файла
	FILE* in;

	wchar_t ch_must_finded;
	wchar_t ch_file;
	int i = 0;

	// маршаллим Стриг в КОнст чар*
	marshal_context^ marshal_must_finded = gcnew marshal_context();
	const char* must_finded = marshal_must_finded ->marshal_as<const char*>(str_must_finded);
	puts(must_finded);

	marshal_context^ marshal = gcnew marshal_context();
	const char* native = marshal->marshal_as<const char*>(file_name);
	puts(native);
	// открываем файл 
	in = fopen(native, "r");

	// провреяем, что файл открылся, и читаем его в переменную wchar_t 
	if (in == NULL)
	{
		return 0;
	}
	else
	{	
		int count = 0; // чтобы определить конец искомой строки		
		int index_of_find = 0; // для вывода индекса найденной строки
		while (!feof(in))
		{
			ch_must_finded = getc(in);
			index_of_find++;

			// сравниваем элемент строки с читаемым из файла индексом
			if (must_finded[count] == ch_must_finded)
			{
				count++;
			}

			else
			{
				count = 0;
				continue;
			}


			if (count >= (strlen(must_finded) - 1))
			{
				delete marshal;
				delete marshal_must_finded;
				return index_of_find;
			}
		}
	}
	delete marshal;
	delete marshal_must_finded;
	return 1;
}
