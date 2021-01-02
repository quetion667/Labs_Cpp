#pragma once

#include <string>
#include <clocale>
#include <msclr/marshal.h>
#include <algorithm>
#include <string>
#include <msclr/marshal_cppstd.h>
#include <msclr\marshal_cppstd.h>

namespace Laba4 {

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
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox8;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(224, 3);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(110, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Работа со строками";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(234, 19);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(163, 20);
			this->textBox1->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(0, 22);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(228, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Введите строку, с которой будем работать:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(13, 39);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(154, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Посчитать длину строки";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 69);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(51, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Метод 1:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(13, 95);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(51, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Метод 2:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(13, 120);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(51, 13);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Метод 3:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(13, 146);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(255, 13);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Исходные массивы строк: {qwety}, {1234567890}";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(16, 163);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(142, 23);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Скопировать строки";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(186, 165);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(121, 20);
			this->textBox2->TabIndex = 9;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(335, 165);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(129, 20);
			this->textBox3->TabIndex = 10;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(16, 193);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(142, 23);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Сравнить строки";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(186, 195);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(121, 20);
			this->textBox4->TabIndex = 12;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(342, 198);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(225, 13);
			this->label7->TabIndex = 13;
			this->label7->Text = L"True - если строки равны, False - если нет  ";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(16, 223);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(142, 23);
			this->button4->TabIndex = 14;
			this->button4->Text = L"Конкатенация строк";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(186, 225);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(186, 20);
			this->textBox5->TabIndex = 15;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(16, 253);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(212, 49);
			this->button5->TabIndex = 16;
			this->button5->Text = L"задание массива с помощью Malloc()  Calloc()";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(234, 255);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(533, 20);
			this->textBox6->TabIndex = 17;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(234, 282);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(533, 20);
			this->textBox7->TabIndex = 18;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(16, 342);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(751, 66);
			this->dataGridView1->TabIndex = 19;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(16, 308);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(369, 23);
			this->button6->TabIndex = 20;
			this->button6->Text = L"Создание массива строк";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(391, 313);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(201, 13);
			this->label8->TabIndex = 21;
			this->label8->Text = L"Введите размерность массива строк:";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(598, 310);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(70, 20);
			this->textBox8->TabIndex = 22;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(779, 435);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		// создание объекта Стринг с помощью дескриптора -
		// если есть дескриптор, то объект автоматически удалится, коргда система поймет
		//, что он не нужен
		System::String ^str;
		// присваиваем значение  что пользователь ввел с текстбокса
		str = Convert::ToString(textBox1->Text);		
		// выводим длину  - 1 способ
		this->label3->Text = "Метод 1: " + str->Length;
		// создаем строку, и маршалим объект ^str
		std::string str1;
		str1 = marshal_as<std::string>(str);
		//выводим длину  - 2 способ
		this->label4->Text = "Метод 2: " + str1.length();

		// создаем массив символов и выводим - 3 способ
		marshal_context^ marshal = gcnew marshal_context();
		const char* native = marshal->marshal_as<const char*>(str);

		this->label5->Text = "Метод 3: " + sizeof(native);
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	// кнопка для копирования строк
	String^ str_1 = "qwerty";
	String^ str_2 = "1234567890";

	this->textBox2->Text = Convert::ToString(copyStr(str_1, str_2));
	this->textBox3->Text = Convert::ToString(copyStr(str_2, str_1));
}
	   String^ copyStr(String ^str1, String ^ str2)
	   {
		   str1 = str2;
		   return str1;
	   }
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
{
	//кнопка для сравнения строк
	String^ str_1 = "qwerty";
	String^ str_2 = "1234567890";
	this->textBox4->Text = Convert::ToString(strCompare(str_1, str_2));

}
	   bool strCompare(String^ str1, String^ str2)
	   {
		   if (str1 == str2)
		   {
			   return true;
		   }
		   else return false;
	   }
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) 
{
	//кнопка для конкатенации строк
	String^ str_1 = "qwerty";
	String^ str_2 = "1234567890";

	this->textBox5->Text = Convert::ToString(sumStr(str_1, str_2));
}
	   String^ sumStr(String^ str1, String^ str2)
	   {
		   return str1 + str2;
	   }
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e)
{
	// создаем строки различными способами с помощью функций
	wchar_t* str1, * str2;
	str1 = (wchar_t *)malloc(1000);
	str2 = (wchar_t *)calloc(1000, sizeof(char));

	//определяем рандомно длину строки (от 1 до 80 символов)
	int size_str1 = rand() % 80 + 1;
	int size_str2 = rand() % 80 + 1;
	
	System::String ^str_sum1;
	System::String^ str_sum2;
	// заполняем строку рандомными символами, используем String^ для отображения в Текстбоксе
	for (int i = 0; i < size_str1; i++)
	{
		str1[i] = char(rand() % 26 + 0x61);
		str_sum1 += str1[i];
		this->textBox6->Text =
			Convert::ToString(str_sum1);
	}
	for (int i = 0; i < size_str2; i++)
	{
		str2[i] = char(rand() % 26 + 0x61);
		str_sum2 += str2[i];
		this->textBox7->Text =
			Convert::ToString(str_sum2);
	}
	// освобождаем память
	free(str1);
	free(str2);
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e)
{
	//создадим динамический массив строк
	short int n;
	//проверяем на входные данные и обрабатываем исключение
	try {
		if (Convert::ToInt16(this->textBox8->Text) > 0 &&
			Convert::ToInt16(this->textBox8->Text) < 15)
		{
			n = Convert::ToInt16(this->textBox8->Text);
		}
		else
		{
			MessageBox::Show("Задайте число от 1 до 15");
		}
	}
	catch (const std::exception& e)
	{
		MessageBox::Show("неверный формат, exception " + Convert::ToString(e.what()));
	}
	// создаем массив строк отображаем в dataGridView
	array<String^>^ strs = gcnew array<String^>(n);

	for (int i = 0; i < n; i++)
	{
		this->dataGridView1->Columns->Add("col", "f");

		strs[i] = "afasf";
		dataGridView1[i, 0]->Value = strs[i];
	}		
}
};
}
