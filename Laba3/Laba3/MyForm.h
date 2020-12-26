#pragma once

#include <iostream>
#include <stdlib.h>

#include <vector>


namespace Laba3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;



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
	private: System::Windows::Forms::DataGridView^ dataGridViewArray;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridViewSortMM;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridView^ dataGridSortBurble;
	private: System::Windows::Forms::DataGridView^ dataGridSortFast;
	private: System::Windows::Forms::Button^ buttonSortFast;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataGridView^ dataGridEvenOdd;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::DataGridView^ dataGridViewRange;






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
			this->dataGridViewArray = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridViewSortMM = (gcnew System::Windows::Forms::DataGridView());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridSortBurble = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridSortFast = (gcnew System::Windows::Forms::DataGridView());
			this->buttonSortFast = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dataGridEvenOdd = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->dataGridViewRange = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewArray))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewSortMM))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridSortBurble))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridSortFast))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridEvenOdd))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewRange))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridViewArray
			// 
			this->dataGridViewArray->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewArray->Location = System::Drawing::Point(36, 29);
			this->dataGridViewArray->Name = L"dataGridViewArray";
			this->dataGridViewArray->Size = System::Drawing::Size(1111, 43);
			this->dataGridViewArray->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(36, 78);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(447, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Показать исходной массив и отсортировать МиниМаксом";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridViewSortMM
			// 
			this->dataGridViewSortMM->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewSortMM->Location = System::Drawing::Point(36, 107);
			this->dataGridViewSortMM->Name = L"dataGridViewSortMM";
			this->dataGridViewSortMM->Size = System::Drawing::Size(1111, 42);
			this->dataGridViewSortMM->TabIndex = 2;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(36, 149);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(309, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Отсортировать пузырьком";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// dataGridSortBurble
			// 
			this->dataGridSortBurble->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridSortBurble->Location = System::Drawing::Point(36, 178);
			this->dataGridSortBurble->Name = L"dataGridSortBurble";
			this->dataGridSortBurble->Size = System::Drawing::Size(1111, 39);
			this->dataGridSortBurble->TabIndex = 4;
			// 
			// dataGridSortFast
			// 
			this->dataGridSortFast->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridSortFast->Location = System::Drawing::Point(36, 252);
			this->dataGridSortFast->Name = L"dataGridSortFast";
			this->dataGridSortFast->Size = System::Drawing::Size(1111, 42);
			this->dataGridSortFast->TabIndex = 5;
			// 
			// buttonSortFast
			// 
			this->buttonSortFast->Location = System::Drawing::Point(36, 223);
			this->buttonSortFast->Name = L"buttonSortFast";
			this->buttonSortFast->Size = System::Drawing::Size(309, 23);
			this->buttonSortFast->TabIndex = 6;
			this->buttonSortFast->Text = L"Быстрая Сортировка";
			this->buttonSortFast->UseVisualStyleBackColor = true;
			this->buttonSortFast->Click += gcnew System::EventHandler(this, &MyForm::buttonSortFast_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(36, 300);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(685, 23);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Возрастание четных и убывание нечетных";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// dataGridEvenOdd
			// 
			this->dataGridEvenOdd->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridEvenOdd->Location = System::Drawing::Point(36, 329);
			this->dataGridEvenOdd->Name = L"dataGridEvenOdd";
			this->dataGridEvenOdd->Size = System::Drawing::Size(1111, 42);
			this->dataGridEvenOdd->TabIndex = 8;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(33, 385);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(281, 13);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Исходный масссив:  { 7, 4, -9, 8, -1, 10, 50 , -24, -8, 11 }";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(506, 385);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 13);
			this->label2->TabIndex = 10;
			this->label2->Text = L"С элемента:";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(320, 377);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(180, 23);
			this->button4->TabIndex = 11;
			this->button4->Text = L"Отсортировать по возрастанию";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(581, 380);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(37, 20);
			this->numericUpDown1->TabIndex = 12;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(624, 385);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(77, 13);
			this->label3->TabIndex = 13;
			this->label3->Text = L"До элемента:";
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(707, 380);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(31, 20);
			this->numericUpDown2->TabIndex = 14;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(320, 406);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(180, 23);
			this->button5->TabIndex = 15;
			this->button5->Text = L"Отсортировать по убыванию";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// dataGridViewRange
			// 
			this->dataGridViewRange->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewRange->Location = System::Drawing::Point(36, 435);
			this->dataGridViewRange->Name = L"dataGridViewRange";
			this->dataGridViewRange->Size = System::Drawing::Size(1111, 66);
			this->dataGridViewRange->TabIndex = 16;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1200, 513);
			this->Controls->Add(this->dataGridViewRange);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridEvenOdd);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->buttonSortFast);
			this->Controls->Add(this->dataGridSortFast);
			this->Controls->Add(this->dataGridSortBurble);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridViewSortMM);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridViewArray);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewArray))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewSortMM))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridSortBurble))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridSortFast))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridEvenOdd))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewRange))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int arr[10] = { 7, 4, -9, 8, -1, 10, 50 , -20, -8, 11 };

		for (size_t i = 0; i < 10; i++)
		{
			this->dataGridViewArray->Columns->Add("", "col " + i);
		}


		for (int i = 0; i < 10; i++)
		{
			dataGridViewArray[i, 0]->Value = arr[i];
		}

		int imin, imax;
		int k = sizeof(arr);
		int p = sizeof(int);
		int n = sizeof(arr) / sizeof(int);
		int i;
		imin = i = arr[0];
		imax = i = 0;
		for (i = 0; i<n ; i++)
		{
			imin = i;
			for (int j = i + 1; j < n; j++)
			{
				if (arr[j] < arr[imin])
					imin = j;
			}
			int t = arr[i];
			arr[i] = arr[imin];
			arr[imin] = t;
		}
		for (size_t i = 0; i < 10; i++)
		{
			this->dataGridViewSortMM->Columns->Add("", "col " + i);
		}


		for (int i = 0; i < 10; i++)
		{
			dataGridViewSortMM[i, 0]->Value = arr[i];
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		int arr[10] = { 7, 4, -9, 8, -1, 10, 50 , -21, -8, 11 };

		for (size_t i = 0; i < 10; i++)
		{
			this->dataGridSortBurble->Columns->Add("", "col " + i);
		}

		int n = sizeof(arr) / sizeof(int);

		for (int j = 0; j < n - 1; j++)
		{
			for (int i = n - 1; i > j; i--)
			{
				if (arr[i] < arr[i - 1])
				{
					int t = arr[i - 1];
					arr[i - 1] = arr[i];
					arr[i] = t;
				}
			}
		}
		for (int i = 0; i < 10; i++)
		{
			dataGridSortBurble[i, 0]->Value = arr[i];
		}
	}
private: System::Void buttonSortFast_Click(System::Object^ sender, System::EventArgs^ e) 
{
	int arr[10] = { 7, 4, -9, 8, -1, 10, 50 , -22, -8, 11 };

	for (size_t i = 0; i < 10; i++)
	{
		this->dataGridSortFast->Columns->Add("", "col " + i);
	}


	int n = sizeof(arr) / sizeof(int);

	QuicqSortImpl(arr, 0, n-1);

	for (int i = 0; i < 10; i++)
	{
		dataGridSortFast[i, 0]->Value = arr[i];
	}

}

	   int Partition(int arr[], int l, int r)
	   {
		   int x = arr[r];
		   int less = l;

		   for (int i = l; i < r; ++i)
		   {
			   if (arr[i] <= x)
			   {
				   swap(arr[i], arr[less]);
				   ++less;
			   }
		   }
		   swap(arr[less], arr[r]);
		   return less;
	   }

	   void QuicqSortImpl(int arr[], int l, int r)
	   {
		   if (l < r)
		   {
			   int q = Partition(arr, l, r);
			   QuicqSortImpl(arr, l, q - 1);
			   QuicqSortImpl(arr, q+1, r);
		   }
	   }
	   void swap(int& a, int& b) {
		   int temp = a;
		   a = b;
		   b = temp;
	   }
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	// Кнопка для сортировки по возрастанию четных элементов массива и убыванию - нечетных
	int arr[10] = { 7, 4, -9, 8, -1, 10, 50 , -23, -8, 11 };

	for (size_t i = 0; i < 10; i++)
	{
		this->dataGridEvenOdd->Columns->Add("", "col " + i);
	}

	int n = sizeof(arr) / sizeof(int);
	
	// создаем два вектора и сортируем четные и нечетные элементы
	std::vector <int> v_odd;
	std::vector <int> v_even;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0)
		{
			v_odd.push_back(arr[i]);
		}
		else
		{
			v_even.push_back(arr[i]);
		}
	}
	// сортируем четные элементы
	for (int j = 0; j < v_odd.size() - 1; j++)
	{
		for (int i = v_odd.size() - 1; i > j; i--)
		{
			if (v_odd[i] < v_odd[i - 1])
			{
				int t = v_odd[i - 1];
				v_odd[i - 1] = v_odd[i];
				v_odd[i] = t;
			}
		}
	}
	// сортируем нечетные элементы
	for (int j = 0; j < v_even.size() - 1; j++)
	{
		for (int i = v_even.size() - 1; i > j; i--)
		{
			if (v_even[i] > v_even[i - 1])
			{
				int t = v_even[i - 1];
				v_even[i - 1] = v_even[i];
				v_even[i] = t;
			}
		}
	}
	// выводим элементы в форме
	for (int i = 0; i < v_odd.size(); i++)
	{
		dataGridEvenOdd[i, 0]->Value = v_odd[i];
	}
	for (int i = 5; i < 10; i++)
	{
		dataGridEvenOdd[i, 0]->Value = v_even[i-v_odd.size()];
	}
}
	   
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e)
{
	int arr[10] = { 7, 4, -9, 8, -1, 10, 50 , -24, -8, 11 };
	// считаем диапазон, от какого и до какого элемента сортировать
	int n1 = Convert::ToInt32(numericUpDown1->Text);
	int n2 = Convert::ToInt32(numericUpDown2->Text);
	

	for (size_t i = 0; i < 10; i++)
	{
		this->dataGridViewRange->Columns->Add("", "col " + i);
	}

	// создаем вектор и заполняем его элементами с необходимыми индексами
	std::vector <int> v;

	for (int i = n1; i <= n2; i++)
	{
		v.push_back(arr[i]);
	}
	// используем метод быстрой сортировки
	QuicqSortImpl_v(v, 0, v.size() - 1);

	for (int i = 0; i < v.size(); i++)
	{
		dataGridViewRange[i, 0]->Value = v[i];
	}
}
	   // для БЫСТРОЙ сортировки вектора
	   // разделим вектор на части
	   int Partition_v(std::vector <int> &v, int l, int r)
	   {
		   int x = v[r];
		   int less = l;

		   for (int i = l; i < r; ++i)
		   {
			   if (v[i] <= x)
			   {
				   std::swap(v[i], v[less]);
				   ++less;
			   }
		   }
		   std::swap(v[less], v[r]);
		   return less;
	   }

	   //запустим сортировку, используя рекурсии
	   void QuicqSortImpl_v(std::vector <int> &v, int l, int r)
	   {
		   if (l < r)
		   {
			   int q = Partition_v(v, l, r);
			   QuicqSortImpl_v(v, l, q - 1);
			   QuicqSortImpl_v(v, q + 1, r);
		   }
	   }

	   // отсортируем по-убыванию
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e)
{
	int arr[10] = { 7, 4, -9, 8, -1, 10, 50 , -24, -8, 11 };
	// считаем диапазон, от какого и до какого элемента сортировать
	int n1 = Convert::ToInt32(numericUpDown1->Text);
	int n2 = Convert::ToInt32(numericUpDown2->Text);

	for (size_t i = 0; i < 10; i++)
	{
		this->dataGridViewRange->Columns->Add("", "col " + i);
	}

	// создаем вектор и заполняем его элементами с необходимыми индексами
	std::vector <int> v;

	for (int i = n1; i <= n2; i++)
	{
		v.push_back(arr[i]);
	}
	// используем метод быстрой сортировки
	quicksort(v, 0, v.size() - 1);
	//выведем результат
	for (int i = 0; i < v.size(); i++)
	{
		dataGridViewRange[i, 0]->Value = v[i];
	}
}
	   // для БЫСТРОЙ сортировки вектора
	   void quicksort(std::vector <int>& v, int first, int last)
	   {
		   int mid, count;
		   int f = first, l = last;
		   mid = v[(f + l) / 2]; //вычисление опорного элемента
		   do
		   {
			   while (v[f] > mid) f++;
			   while (v[l] < mid) l--;
			   if (f <= l) //перестановка элементов
			   {
				   count = v[f];
				   v[f] = v[l];
				   v[l] = count;
				   f++;
				   l--;
			   }
		   } while (f < l);
		   if (first < l) quicksort(v, first, l);
		   if (f < last) quicksort(v, f, last);
	   }
};
}
