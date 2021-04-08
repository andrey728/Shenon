#pragma once
#include <iostream>
#include <math.h>
#include <vector>
#include <sstream>
#include <math.h> 
#include <algorithm>
#include <array>
#include <map>


namespace Shenon {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	struct CharAndP {
		float p;
		char symbol;
	};

	std::vector <double> arr;
	std::map<char, float> Dirictory;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		Generic::List<String^>^ Line;
		Generic::List<String^>^ mass;
		Generic::List<String^>^ Shenon;
		Generic::List<String^>^ ABC;
		Generic::List<double>^ chance;
		Generic::List<double>^ num_in_ABC;
		double some_bit;
		double summ_of_bit;
		double summ;
		double summ_chance;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::DataGridView^ dataGridView1;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Символ;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::Label^ label4;






	public:
		MyForm(void)
		{
			InitializeComponent();
			chance = gcnew Generic::List<double>();
			num_in_ABC = gcnew Generic::List<double>();
			
			Line = gcnew Generic::List<String^>();
			mass = gcnew Generic::List<String^>();
			Shenon = gcnew Generic::List<String^>();
			ABC = gcnew Generic::List<String^>();
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
	private: System::Windows::Forms::VScrollBar^ vScrollBar2;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;

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
			this->vScrollBar2 = (gcnew System::Windows::Forms::VScrollBar());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Символ = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// vScrollBar2
			// 
			this->vScrollBar2->Location = System::Drawing::Point(316, 26);
			this->vScrollBar2->Name = L"vScrollBar2";
			this->vScrollBar2->Size = System::Drawing::Size(24, 292);
			this->vScrollBar2->TabIndex = 12;
			this->vScrollBar2->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &MyForm::vScrollBar2_Scroll);
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(27, 26);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(277, 292);
			this->textBox1->TabIndex = 11;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(83, 430);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(156, 34);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Чтение файла";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(181, 326);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(123, 20);
			this->textBox3->TabIndex = 14;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(201, 352);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(103, 20);
			this->textBox4->TabIndex = 15;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Символ,
					this->Column2, this->Column3
			});
			this->dataGridView1->Location = System::Drawing::Point(350, 26);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(447, 438);
			this->dataGridView1->TabIndex = 16;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(26, 329);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(141, 13);
			this->label1->TabIndex = 17;
			this->label1->Text = L"Всего символов в текстте";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(24, 355);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(171, 13);
			this->label2->TabIndex = 18;
			this->label2->Text = L"Сумма вероятностей (проверка)";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(201, 378);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(103, 20);
			this->textBox2->TabIndex = 19;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(201, 404);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(103, 20);
			this->textBox5->TabIndex = 20;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(24, 381);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(164, 13);
			this->label3->TabIndex = 21;
			this->label3->Text = L"Информация на 1 символ (бит)";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(24, 407);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(157, 13);
			this->label4->TabIndex = 22;
			this->label4->Text = L"Общий обем сообщения (бит)";
			// 
			// Символ
			// 
			this->Символ->HeaderText = L"Символ";
			this->Символ->Name = L"Символ";
			this->Символ->ReadOnly = true;
			this->Символ->Width = 50;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Вероятность";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 150;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Код Шенона";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 200;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(801, 476);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->vScrollBar2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	//void SearchTree(Generic::List<String^>^ shenon, std::vector <double>& chanse, String^ branch, String^ fullBranch, int start, int end)
	//{
	//	double dS = 0;
	//	int i, m, S = 0;
	//	String^ cBranch = "";

	//	cBranch = fullBranch + branch;
	//	if (start == end)
	//	{
	//		shenon[start] += cBranch;
	//		return;
	//	}

	//	for (i = end; i >= start; i--) {
	//		dS += chanse[i];
	//	}
	//	
	//	
	//	//dS /= 2.0;
	//	i = end - 1;
	//	S += chanse[start];
	//	while (fabs(dS - (S + chanse[i])) < fabs(dS - S) && (i < end))
	//	{
	//		S += chanse[i];
	//		i--;
	//	}
	//	String^ zero = "0";
	//	String^ one = "1";
	//	SearchTree(shenon, chanse, one, cBranch, start, i + 1);
	//	SearchTree(shenon, chanse, zero, cBranch, i, end);
	//}


	//void quickSort(Generic::List<String^>^ sim, Generic::List<double>^ chance, Generic::List<double>^ num, int left, int right) {
	//	int Left = left, Right = right;
	//	double ch;
	//	double quantity;
	//	String^ abc;
	//	double pivot = chance[(left + right) / 2];
	//	if (right - left <= 1) return;
	//	while (Left <= Right) {
	//		while (chance[Left] < pivot) Left++;
	//		while (chance[Right] > pivot) Right--;
	//		if (Left <= Right) {
	//			ch = chance[Left];
	//			abc = sim[Left];
	//			quantity = num[Left];
	//			chance[Left] = chance[Right];
	//			chance[Right] = ch;
	//			sim[Left] = sim[Right];
	//			sim[Right] = abc;
	//			num[Left] = num[Right];
	//			num[Right] = quantity;
	//			Left++;
	//			Right--;
	//		}
	//	};
	//	if (left < Right)
	//		quickSort(sim, chance, num, left, Right);
	//	if (Left > right)
	//		quickSort(sim, chance, num, Left, right);
	//}


	void SearchTree(Generic::List<String^>^ shenon, std::vector <double>& chanse, int left, int right) {
		double Summ_up, Summ_down, Diff, Diff_old = 1;
		int point;
		if (right - left <= 1) return;
		for (int i = right - 1; i >= left + 1; i--) {
			Summ_up = 0;
			Summ_down = 0;
			for (int sp1 = left; sp1 < i; sp1++) {
				Summ_up += chanse[sp1];
			}
			for (int sp2 = i; sp2 < right; sp2++) {
				Summ_down += chanse[sp2];
			}
			Diff = Math::Abs(Summ_up - Summ_down);
			if (Diff_old > Diff) { 
				Diff_old = Diff; 
				point = i;
			}
		}
		for (int i = 0; i < point; i++) {
			shenon[i] += "1";
		}
		for (int i = point; i < right; i++) {
			shenon[i] += "0";
		}
		SearchTree(shenon, chanse, left, point);
		SearchTree(shenon, chanse, point, right);
	}





	void quickSort(Generic::List<String^>^ sim, std::vector <double>& arr, Generic::List<double>^ num, int left, int right) {
		int Left = left, Right = right;
		double tmp;
		double quantity;
		String^ abc;
		double pivot = arr[(left + right) / 2];
		if (right - left <= 1) return;
		while (Left <= Right) {
			while (arr[Left] < pivot) Left++;
			while (arr[Right] > pivot) Right--;
			if (Left <= Right) {
				tmp = arr[Left];
				abc = sim[Left];
				quantity = num[Left];
				arr[Left] = arr[Right];
				arr[Right] = tmp;
				sim[Left] = sim[Right];
				sim[Right] = abc;
				num[Left] = num[Right];
				num[Right] = quantity;
				Left++;
				Right--;
			}
		};
		if (left < Right)
			quickSort(sim, arr, num, left, Right);
		if (Left < right)
			quickSort(sim, arr, num, Left, right);
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		Stream^ s;
		//
		// Настройка открытия файла
		//
		openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
		openFileDialog1->FilterIndex = 2;
		openFileDialog1->RestoreDirectory = true;
		//
		textBox1->Text = "";
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			if ((s = openFileDialog1->OpenFile()) != nullptr)
			{
				// инициализация + очистка
				///////////////////////////////
				String^ path = openFileDialog1->FileName;
				StreamReader^ sr = gcnew StreamReader(path);
				String^ line;
				String^ sim;
				String^ branch;
				String^ fullBranch;
				mass->Clear();
				ABC->Clear();
				num_in_ABC->Clear();
				chance->Clear();
				some_bit = 0;
				summ_of_bit = 0;
				summ = 0;
				summ_chance = 0;

				// чтение
				//////////////////
				while ((line = sr->ReadLine()) != nullptr)
				{
					Line->Add(line);
					int len = line->Length;
					
					for (int i = 0; i < line->Length; i++) {
						summ++;
						mass->Add(Convert::ToString(line[i]));
						if (!(ABC->Contains(Convert::ToString(line[i])))) {
							ABC->Add(Convert::ToString(line[i]));
							num_in_ABC->Add(1);
						}
						else for (int j = 0; j < ABC->Count; j++) {
							if (ABC[j] == Convert::ToString(line[i])) { 
								num_in_ABC[j]++; 
							}
						}
					}
				}
				sr->Close();

				// вывод текста
				//////////////////////
				vScrollBar2->Value = 0;
				vScrollBar2->Maximum = Line->Count;
				for (int i = 0; i < 25 && i < Line->Count; i++) {
					textBox1->AppendText(Line[i] + "\r\n");
				}
				

				// работа с векторами + расчеты
				///////////////////////////////////
				for (int i = 0; i < ABC->Count; i++) {
					Shenon->Add("");
					chance->Add((num_in_ABC[i] / summ));
					arr.push_back(num_in_ABC[i] / summ);
					some_bit += chance[i] * log2(1 / chance[i]);
					summ_of_bit = some_bit * summ;
					summ_chance += chance[i];
				}

				int left = 0, right = chance->Count - 1, start = 0, end = arr.size();
				quickSort(ABC, arr, num_in_ABC, left, right);
				SearchTree(Shenon, arr, start, end);
				//||||||||| заполнение таблицы |||||||||
				for (int i = 0; i < ABC->Count; i++) {
					dataGridView1->Rows->Add();
					dataGridView1->Rows[i]->Cells[0]->Value = Convert::ToString(ABC[i]);
					//dataGridView1->Rows[i]->Cells[1]->Value = Convert::ToString(chance[i]);
					dataGridView1->Rows[i]->Cells[1]->Value = Convert::ToString(arr[i]);
					dataGridView1->Rows[i]->Cells[2]->Value = Convert::ToString(Shenon[i]);
				}


				// вывод доп. информации
				/////////////////////////////
				textBox2->Text = (Convert::ToString(ceil(some_bit)));
				textBox3->Text = (Convert::ToString(summ));
				textBox4->Text = (Convert::ToString(summ_chance));
				textBox5->Text = (Convert::ToString(ceil(summ_of_bit)));
				if (textBox1->Text == " ") textBox1->Text = "Файл пуст";
			}
			else MessageBox::Show("Ошибка открытия файла");
		}
	}


	private: System::Void vScrollBar2_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
		textBox1->Clear();
		for (int i = vScrollBar2->Value; i < Line->Count && i < vScrollBar2->Value + 25; i++) {
			textBox1->AppendText(Line[i] + "\r\n");
		}
	}

};
}
