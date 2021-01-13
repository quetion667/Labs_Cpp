#include <stdio.h>
#include <iostream>
#include <cstdio>
#include <msclr/marshal.h>
#include "Header.h"
#include "Header_find_num.h"
#include "Header_encrypt.h"

#pragma once

namespace Laba5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;
	
	

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			setlocale(LC_ALL, "Russian");
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox3;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(252, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(238, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Работа с файлами посредством методов с++";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 28);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(107, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Введите имя файла";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(125, 25);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(164, 20);
			this->textBox1->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(315, 23);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(274, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Вывести содержимое файла на экран";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(255, 52);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(107, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Содержимое файла";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(15, 69);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(723, 89);
			this->richTextBox1->TabIndex = 6;
			this->richTextBox1->Text = L"";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(15, 165);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(313, 23);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Посчитать количество пустых сток в файле";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(346, 170);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(199, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Количество пустых символов равно =";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(15, 195);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(313, 23);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Поиск строки";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(346, 200);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(152, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Строку, которую надо найти:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(516, 197);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(166, 20);
			this->textBox2->TabIndex = 11;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(15, 224);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(313, 23);
			this->button4->TabIndex = 12;
			this->button4->Text = L"Поиск номеров страницы";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(237, 279);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(195, 13);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Содержимое файла после шифровки";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(15, 253);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(313, 23);
			this->button5->TabIndex = 14;
			this->button5->Text = L"Зашифровать файл и вывести его";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(15, 295);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(723, 89);
			this->richTextBox2->TabIndex = 15;
			this->richTextBox2->Text = L"";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(346, 258);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(124, 13);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Ключ для шифрования:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(516, 255);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(166, 20);
			this->textBox3->TabIndex = 17;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(750, 431);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"Организация ввода-вывода";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		// создание экземпляра файла
		FILE* in;
		wchar_t ch;
		System ::String ^name;
		// считываем из текстбокса имя файла
		name = this->textBox1->Text;
		// маршаллим Стриг в КОнст чар*
		marshal_context^ marshal = gcnew marshal_context();
		const char* native = marshal->marshal_as<const char*>(name);
		puts(native);
		// открываем файл 
		in = fopen(native, "r");
		// провреяем, что файл открылся, и читаем его в переменную wchar_t 
		if (in == NULL)
		{
			MessageBox::Show("Файл не открылся");
		}
		else
		{
			while (!feof(in))
			{
				ch = getc(in);
				//putchar(ch);
				this->richTextBox1->Text += Convert::ToString(ch);
			}
		}
		delete marshal;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		// создание экземпляра файла
		FILE* in;
		wchar_t ch;
		int sum_empty_symbols = 0;  // сумма пустых символов - которые не отображаются на экране
		System::String^ name;
		// считываем имя файла
		name = this->textBox1->Text;
		// маршаллим Стриг в КОнст чар*
		marshal_context^ marshal = gcnew marshal_context();
		const char* native = marshal->marshal_as<const char*>(name);
		puts(native);
		// открываем файл 
		in = fopen(native, "r");
		// провреяем, что файл открылся, и читаем его в переменную wchar_t 
		if (in == NULL)
		{
			MessageBox::Show("Файл не открылся");
		}
		else
		{
			while (!feof(in))
			{
				ch = getc(in);
				//putchar(ch);
				if (ch == '\n' || ch == '\a' || ch == '\b' || ch == '\f' || ch == '\r' ||
					ch == '\t' || ch == '\v')
				{
					sum_empty_symbols += 1;
				}
			}
			label4->Text = "Количество пустых символов равно =" +
				Convert::ToString(sum_empty_symbols);
		}
		delete marshal;
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	System::String^ str = this->textBox2->Text;
	System::String^ name_file = this->textBox1->Text;
	int i_find_str = findStr(str, name_file);
	if (i_find_str == 0)
	{
		MessageBox::Show("Файл не открылся");
	}
	else if (i_find_str == 1)
	{
		MessageBox::Show("Не найдено совпадений!");
	}
	else 
	{
		MessageBox::Show("строка найдена по индесу   " + Convert :: ToString(i_find_str));
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) 
{
	System::String^ name_file = this->textBox1->Text;
	int i_find_num = findNum(name_file);
	if (i_find_num == 0)
	{
		MessageBox::Show("Файл не открылся");
	}
	else
	{
		MessageBox::Show("номер страницы найден по индесу   " + Convert::ToString(i_find_num));
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) 
{
	System::String^ name_file = this->textBox1->Text;
	System::String^ encrypt_key = this->textBox3->Text;
	System::String^ s_encrypt_file = encrypt_file(name_file, encrypt_key);
	if (s_encrypt_file == "not open")
	{
		MessageBox::Show("Файл не открылся");
	}
	else
	{
		this->richTextBox2->Text = s_encrypt_file;
		MessageBox::Show("Файл зашифровался   " + "");
	}
}
};
}
