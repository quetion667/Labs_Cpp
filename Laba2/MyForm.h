#pragma once
#include <stdlib.h>
#include <windows.h>
#include <cmath>



namespace Laba2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	const int N = 5;
	float m[5][5];
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

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridViewMatrix;

	private: System::Windows::Forms::Button^ buttonCount;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ textBox18;
	private: System::Windows::Forms::TextBox^ textBox19;
	private: System::Windows::Forms::TextBox^ textBox20;
	private: System::Windows::Forms::TextBox^ textBox21;
	private: System::Windows::Forms::TextBox^ textBox22;
	private: System::Windows::Forms::TextBox^ textBox23;

	private: System::Windows::Forms::TextBox^ textBox24;
	private: System::Windows::Forms::TextBox^ textBox25;
	private: System::Windows::Forms::TextBox^ textBox26;
	private: System::Windows::Forms::TextBox^ textBox27;
	private: System::Windows::Forms::TextBox^ textBox28;
	private: System::Windows::Forms::TextBox^ textBox29;
	private: System::Windows::Forms::TextBox^ textBox30;
	private: System::Windows::Forms::TextBox^ textBox31;

	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ textBox32;
	private: System::Windows::Forms::TextBox^ textBox33;
	private: System::Windows::Forms::TextBox^ textBox34;



	protected:

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridViewMatrix = (gcnew System::Windows::Forms::DataGridView());
			this->buttonCount = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->textBox31 = (gcnew System::Windows::Forms::TextBox());
			
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox32 = (gcnew System::Windows::Forms::TextBox());
			this->textBox33 = (gcnew System::Windows::Forms::TextBox());
			this->textBox34 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewMatrix))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(62, 200);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(191, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Вывести матрицу";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridViewMatrix
			// 
			this->dataGridViewMatrix->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			
			this->dataGridViewMatrix->Location = System::Drawing::Point(37, 25);
			this->dataGridViewMatrix->Name = L"dataGridViewMatrix";
			this->dataGridViewMatrix->Size = System::Drawing::Size(520, 150);
			this->dataGridViewMatrix->TabIndex = 2;
			// 
			// buttonCount
			// 
			this->buttonCount->Location = System::Drawing::Point(62, 243);
			this->buttonCount->Name = L"buttonCount";
			this->buttonCount->Size = System::Drawing::Size(191, 23);
			this->buttonCount->TabIndex = 3;
			this->buttonCount->Text = L"Анализ матрицы";
			this->buttonCount->UseVisualStyleBackColor = true;
			this->buttonCount->Click += gcnew System::EventHandler(this, &MyForm::buttonCount_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(287, 210);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(79, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Мин. матрицы";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(287, 243);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(85, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Макс. матрицы";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(287, 275);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(136, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Макс. верхнетреуг. части";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(287, 305);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(127, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Мин. верхнетреуг части";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(455, 202);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 8;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(455, 235);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 9;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(455, 267);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 10;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(455, 298);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 11;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(287, 332);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(98, 13);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Мин гл диагонали";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(287, 357);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(107, 13);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Макс гл. диагонали";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(287, 381);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(133, 13);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Мин. второст. диагонали";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(287, 407);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(139, 13);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Макс. второст. диагонали";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(287, 430);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(119, 13);
			this->label9->TabIndex = 16;
			this->label9->Text = L"Ср. арифм. всех эл-ов";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(455, 325);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 17;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(455, 350);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 18;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(455, 376);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 19;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(455, 400);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 20);
			this->textBox8->TabIndex = 20;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(455, 423);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 20);
			this->textBox9->TabIndex = 21;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(287, 454);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(116, 13);
			this->label10->TabIndex = 22;
			this->label10->Text = L"Ср. арифм. ниж треуг";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(287, 478);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(119, 13);
			this->label11->TabIndex = 23;
			this->label11->Text = L"Ср. арифм. верх треуг";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(24, 287);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(78, 13);
			this->label12->TabIndex = 24;
			this->label12->Text = L"Суммы строк:";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(455, 447);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 20);
			this->textBox10->TabIndex = 25;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(455, 471);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(100, 20);
			this->textBox11->TabIndex = 26;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(27, 314);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(75, 20);
			this->textBox12->TabIndex = 27;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(27, 340);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(75, 20);
			this->textBox13->TabIndex = 28;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(27, 366);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(75, 20);
			this->textBox14->TabIndex = 29;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(151, 287);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(96, 13);
			this->label13->TabIndex = 30;
			this->label13->Text = L"Суммы столбцов:";
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(153, 314);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(80, 20);
			this->textBox15->TabIndex = 31;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(153, 340);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(80, 20);
			this->textBox16->TabIndex = 32;
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(153, 366);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(80, 20);
			this->textBox17->TabIndex = 33;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(1, 454);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(150, 13);
			this->label14->TabIndex = 34;
			this->label14->Text = L"Мин/макс/ср ар. зн-я строк";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(141, 454);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(144, 13);
			this->label15->TabIndex = 35;
			this->label15->Text = L"Мин/макс/ср ар. столбцов";
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(27, 392);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(75, 20);
			this->textBox18->TabIndex = 36;
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(27, 423);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(75, 20);
			this->textBox19->TabIndex = 37;
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(10, 475);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(130, 20);
			this->textBox20->TabIndex = 38;
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(153, 392);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(80, 20);
			this->textBox21->TabIndex = 39;
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(153, 423);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(80, 20);
			this->textBox22->TabIndex = 40;
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(154, 475);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(130, 20);
			this->textBox23->TabIndex = 41;
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(10, 501);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(130, 20);
			this->textBox24->TabIndex = 42;
			// 
			// textBox25
			// 
			this->textBox25->Location = System::Drawing::Point(10, 527);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(130, 20);
			this->textBox25->TabIndex = 43;
			// 
			// textBox26
			// 
			this->textBox26->Location = System::Drawing::Point(10, 553);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(130, 20);
			this->textBox26->TabIndex = 44;
			// 
			// textBox27
			// 
			this->textBox27->Location = System::Drawing::Point(10, 579);
			this->textBox27->Name = L"textBox27";
			this->textBox27->Size = System::Drawing::Size(130, 20);
			this->textBox27->TabIndex = 45;
			// 
			// textBox28
			// 
			this->textBox28->Location = System::Drawing::Point(153, 501);
			this->textBox28->Name = L"textBox28";
			this->textBox28->Size = System::Drawing::Size(130, 20);
			this->textBox28->TabIndex = 46;
			// 
			// textBox29
			// 
			this->textBox29->Location = System::Drawing::Point(154, 527);
			this->textBox29->Name = L"textBox29";
			this->textBox29->Size = System::Drawing::Size(130, 20);
			this->textBox29->TabIndex = 47;
			// 
			// textBox30
			// 
			this->textBox30->Location = System::Drawing::Point(153, 553);
			this->textBox30->Name = L"textBox30";
			this->textBox30->Size = System::Drawing::Size(130, 20);
			this->textBox30->TabIndex = 48;
			// 
			// textBox31
			// 
			this->textBox31->Location = System::Drawing::Point(154, 579);
			this->textBox31->Name = L"textBox31";
			this->textBox31->Size = System::Drawing::Size(130, 20);
			this->textBox31->TabIndex = 49;
			// 
			this->dataGridViewMatrix->Columns->Add("#", "col");
			this->dataGridViewMatrix->Columns->Add("#", "col");
			this->dataGridViewMatrix->Columns->Add("#", "col");
			this->dataGridViewMatrix->Columns->Add("#", "col");
			this->dataGridViewMatrix->Columns->Add("#", "col");

			this->dataGridViewMatrix->Rows->Add(4);
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(289, 508);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(94, 13);
			this->label16->TabIndex = 50;
			this->label16->Text = L"Сумма ниж треуг";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(289, 534);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(97, 13);
			this->label17->TabIndex = 51;
			this->label17->Text = L"Сумма верх треуг";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(289, 564);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(203, 13);
			this->label18->TabIndex = 52;
			this->label18->Text = L"Элемент наиболеее близки к ср. ариф";
			// 
			// textBox32
			// 
			this->textBox32->Location = System::Drawing::Point(513, 501);
			this->textBox32->Name = L"textBox32";
			this->textBox32->Size = System::Drawing::Size(100, 20);
			this->textBox32->TabIndex = 53;
			// 
			// textBox33
			// 
			this->textBox33->Location = System::Drawing::Point(513, 527);
			this->textBox33->Name = L"textBox33";
			this->textBox33->Size = System::Drawing::Size(100, 20);
			this->textBox33->TabIndex = 54;
			// 
			// textBox34
			// 
			this->textBox34->Location = System::Drawing::Point(513, 557);
			this->textBox34->Name = L"textBox34";
			this->textBox34->Size = System::Drawing::Size(100, 20);
			this->textBox34->TabIndex = 55;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(800, 650);
			this->Controls->Add(this->textBox34);
			this->Controls->Add(this->textBox33);
			this->Controls->Add(this->textBox32);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->textBox31);
			this->Controls->Add(this->textBox30);
			this->Controls->Add(this->textBox29);
			this->Controls->Add(this->textBox28);
			this->Controls->Add(this->textBox27);
			this->Controls->Add(this->textBox26);
			this->Controls->Add(this->textBox25);
			this->Controls->Add(this->textBox24);
			this->Controls->Add(this->textBox23);
			this->Controls->Add(this->textBox22);
			this->Controls->Add(this->textBox21);
			this->Controls->Add(this->textBox20);
			this->Controls->Add(this->textBox19);
			this->Controls->Add(this->textBox18);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->textBox17);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonCount);
			this->Controls->Add(this->dataGridViewMatrix);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewMatrix))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
		{
			for (int i = 0; i < N; i++)
			{
				for (int j = 0; j < N; j++)
				{
					m[i][j] = rand() / 10.;
					dataGridViewMatrix[i, j]->Value = m[i][j];
					
				}
			}
		}
	private: System::Void buttonCount_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		// Минимум матрицы:
		float min_of_matrix = m[0][0];
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				if (m[i][j] < min_of_matrix)
					min_of_matrix = m[i][j];
			}
		}
		textBox1->Text = System::Convert::ToString(min_of_matrix);

		// Максимум матрицы:
		float max_of_matrix = m[0][0];
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				if (m[i][j] > max_of_matrix)
					max_of_matrix = m[i][j];
			}
		}
		textBox2->Text = System::Convert::ToString(max_of_matrix);

		// Максимум верхнего треугольника матрицы:
		float max_of_triangle_up = m[0][0];
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < i+1; j++)
			{
				if (m[i][j] > max_of_triangle_up)
					max_of_triangle_up = m[i][j];
			}
		}
		textBox3->Text = System::Convert::ToString(max_of_triangle_up);
		// Минимум верхнего треугольника матрицы:
		float min_of_triangle_up = m[0][0];
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < i + 1; j++)
			{
				if (m[i][j] < min_of_triangle_up)
					min_of_triangle_up = m[i][j];
			}
		}
		textBox4->Text = System::Convert::ToString(min_of_triangle_up);

		// Минимум главной диагонали матрицы:
		float min_of_hed_diag = m[0][0];
		for (int i = 0; i < N; i++)
		{
				if (m[i][i] < min_of_hed_diag)
					min_of_hed_diag = m[i][i];
		}
		textBox5->Text = System::Convert::ToString(min_of_hed_diag);

		// Максимум главной диагонали матрицы:
		float max_of_hed_diag = m[0][0];
		for (int i = 0; i < N; i++)
		{
			if (m[i][i] > max_of_hed_diag)
				max_of_hed_diag = m[i][i];
		}
		textBox6->Text = System::Convert::ToString(max_of_hed_diag);

		// Минимум второстепенной диагонали матрицы:
		float min_of_second_diag = m[4][0];
		for (int i = N-1; i >= 0; i--)
		{
			if (m[i][N - i - 1] < min_of_second_diag)
				min_of_second_diag = m[i][N-i-1];
		}
		textBox7->Text = System::Convert::ToString(min_of_second_diag);
		// Максимум второстепенной диагонали матрицы:
		float max_of_second_diag = m[4][0];
		for (int i = N - 1; i >= 0; i--)
		{
			if (m[i][N - i - 1] > max_of_second_diag)
				max_of_second_diag = m[i][N - i - 1];
		}
		textBox8->Text = System::Convert::ToString(max_of_second_diag);

		// Ср арифм элементов матрицы:
		float sum = 0;
		int k = 0;
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				sum = sum + m[i][j];
				k++;
			}
		}
		textBox9->Text = System::Convert::ToString(sum / k);

		// Ср арифм верхнего треугольника матрицы:
		float sum_up = 0;
		int k_up = 0;
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < i + 1; j++)
			{
				sum_up = sum_up + m[i][j];
				k_up++;
			}
		}
		textBox11->Text = System::Convert::ToString(sum_up / k_up);
		// Ср арифм нижнего треугольника матрицы:
		float sum_down = 0;
		int k_down = 0;
		for (int i = 0; i < N; i++)
		{
			for (int j = i; j < N; j++)
			{
				sum_down = sum_down + m[i][j];
				k_down++;
			}
		}
		textBox10->Text = System::Convert::ToString(sum_down/k_down);

		// Сумма строки 1:
		float sum_str1 = 0;
		for (int i = 0; i < N; i++)
		{
			sum_str1 += m[i][0];
		}
		textBox12->Text = System::Convert::ToString(sum_str1);

		// Сумма строки 2:
		float sum_str2 = 0;
		for (int i = 0; i < N; i++)
		{
			sum_str2 += m[i][1];
		}
		textBox13->Text = System::Convert::ToString(sum_str2);

		// Сумма строки 3:
		float sum_str3 = 0;
		for (int i = 0; i < N; i++)
		{
			sum_str3 += m[i][2];
		}
		textBox14->Text = System::Convert::ToString(sum_str3);

		// Сумма строки 4:
		float sum_str4 = 0;
		for (int i = 0; i < N; i++)
		{
			sum_str4 += m[i][3];
		}
		textBox18->Text = System::Convert::ToString(sum_str4);

		// Сумма строки 5:
		float sum_str5 = 0;
		for (int i = 0; i < N; i++)
		{
			sum_str5 += m[i][4];
		}
		textBox19->Text = System::Convert::ToString(sum_str5);

		// Сумма солбца  1:
		float sum_col1 = 0;
		for (int i = 0; i < N; i++)
		{
			sum_col1 += m[0][i];
		}
		textBox15->Text = System::Convert::ToString(sum_col1);

		// Сумма солбца  2:
		float sum_col2 = 0;
		for (int i = 0; i < N; i++)
		{
			sum_col2 += m[1][i];
		}
		textBox16->Text = System::Convert::ToString(sum_col2);

		// Сумма солбца  3:
		float sum_col3 = 0;
		for (int i = 0; i < N; i++)
		{
			sum_col3 += m[2][i];
		}
		textBox17->Text = System::Convert::ToString(sum_col3);

		// Сумма солбца  4:
		float sum_col4 = 0;
		for (int i = 0; i < N; i++)
		{
			sum_col4 += m[3][i];
		}
		textBox21->Text = System::Convert::ToString(sum_col4);

		// Сумма солбца  5:
		float sum_col5 = 0;
		for (int i = 0; i < N; i++)
		{
			sum_col5 += m[4][i];
		}
		textBox22->Text = System::Convert::ToString(sum_col5);

		// Минимум/max/среднее арифметическое строки 1:
		float min_str1 = m[0][0];
		float max_str1 = m[0][0];
		for (int i = 0; i < N; i++)
		{
			if (m[i][0] < min_str1)
				min_str1 = m[i][0];
			if (m[i][0] > max_str1)
				max_str1 = m[i][0];
		}
		textBox20->Text = System::Convert::ToString(min_str1+"/"+max_str1+"/"+sum_str1/N);

		// Минимум/max/среднее арифметическое строки 2:
		float min_str2 = m[0][1];
		float max_str2 = m[0][1];
		for (int i = 0; i < N; i++)
		{
			if (m[i][1] < min_str2)
				min_str2 = m[i][1];
			if (m[i][1] > max_str2)
				max_str2 = m[i][1];
		}
		textBox24->Text = System::Convert::ToString(min_str2 + "/" + max_str2 + "/" + sum_str2 / N);

		// Минимум/max/среднее арифметическое строки 3:
		float min_str3 = m[0][2];
		float max_str3 = m[0][2];
		for (int i = 0; i < N; i++)
		{
			if (m[i][2] < min_str3)
				min_str3 = m[i][2];
			if (m[i][2] > max_str3)
				max_str3 = m[i][2];
		}
		textBox25->Text = System::Convert::ToString(min_str3 + "/" + max_str3 + "/" + sum_str3 / N);

		// Минимум/max/среднее арифметическое строки 4:
		float min_str4 = m[0][3];
		float max_str4 = m[0][3];
		for (int i = 0; i < N; i++)
		{
			if (m[i][3] < min_str4)
				min_str4 = m[i][3];
			if (m[i][3] > max_str4)
				max_str4 = m[i][3];
		}
		textBox26->Text = System::Convert::ToString(min_str4 + "/" + max_str4 + "/" + sum_str4 / N);
		// Минимум/max/среднее арифметическое строки 5:
		float min_str5 = m[0][4];
		float max_str5 = m[0][4];
		for (int i = 0; i < N; i++)
		{
			if (m[i][4] < min_str5)
				min_str5 = m[i][4];
			if (m[i][4] > max_str5)
				max_str5 = m[i][4];
		}
		textBox27->Text = System::Convert::ToString(min_str5 + "/" + max_str5 + "/" + sum_str5 / N);

		// Минимум/max/среднее арифметическое столбца 1:
		float min_col1 = m[0][0];
		float max_col1 = m[0][0];
		for (int i = 0; i < N; i++)
		{
			if (m[0][i] < min_col1)
				min_col1 = m[0][i];
			if (m[0][i] > max_col1)
				max_col1 = m[0][i];
		}
		textBox23->Text = System::Convert::ToString(min_col1 + "/" + max_col1 + "/" + sum_col1 / N);

		// Минимум/max/среднее арифметическое столбца 2:
		float min_col2 = m[1][0];
		float max_col2 = m[1][0];
		for (int i = 0; i < N; i++)
		{
			if (m[1][i] < min_col2)
				min_col2 = m[1][i];
			if (m[1][i] > max_col2)
				max_col2 = m[1][i];
		}
		textBox28->Text = System::Convert::ToString(min_col2 + "/" + max_col2 + "/" + sum_col2 / N);

		// Минимум/max/среднее арифметическое столбца 3:
		float min_col3 = m[2][0];
		float max_col3 = m[2][0];
		for (int i = 0; i < N; i++)
		{
			if (m[2][i] < min_col3)
				min_col3 = m[2][i];
			if (m[2][i] > max_col3)
				max_col3 = m[2][i];
		}
		textBox29->Text = System::Convert::ToString(min_col3 + "/" + max_col3 + "/" + sum_col3 / N);

		// Минимум/max/среднее арифметическое столбца 4:
		float min_col4 = m[3][0];
		float max_col4 = m[3][0];
		for (int i = 0; i < N; i++)
		{
			if (m[3][i] < min_col4)
				min_col4 = m[3][i];
			if (m[3][i] > max_col4)
				max_col4 = m[3][i];
		}
		textBox30->Text = System::Convert::ToString(min_col4 + "/" + max_col4 + "/" + sum_col4 / N);

		// Минимум/max/среднее арифметическое столбца 5:
		float min_col5 = m[4][0];
		float max_col5 = m[4][0];
		for (int i = 0; i < N; i++)
		{
			if (m[4][i] < min_col5)
				min_col5 = m[4][i];
			if (m[4][i] > max_col5)
				max_col5 = m[4][i];
		}
		textBox31->Text = System::Convert::ToString(min_col5 + "/" 
			+ max_col5 + "/" + sum_col5 / N);

		textBox32->Text = System::Convert::ToString(sum_down);
		textBox33->Text = System::Convert::ToString(sum_up);

		// Элемент наиболее близкий с ср. арифм.:
		float delta = fabs(m[0][0] - sum/k);
		float elem = m[0][0];
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				if (fabs((m[i][j] - sum / k)) < delta)
				{
					delta = fabs(m[i][j] - sum / k);
					elem = m[i][j];
				}
			}
		}
		textBox34->Text = System::Convert::ToString(elem);
	}

};
}
