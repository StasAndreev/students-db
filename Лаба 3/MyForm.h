#pragma once

#include <cliext/vector>
#include "AddressForm.h"
#include "SpecialtyForm.h"

namespace Лаба3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace System::Data::SQLite;
	using namespace System::Text;
	using namespace cliext;

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
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;

	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;


	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;

	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;

	private: SQLiteConnection^ db;
	private: System::Object^ idAddressAdd;
	private: System::Object^ idAddressChange;
	private: System::Object^ idSpecialtyAdd;
	private: System::Object^ idSpecialtyChange;
	private: System::Object^ idDateAdd;
	private: System::Object^ idDateChange;

	private: AddressForm^ addressForm;
	private: SpecialtyForm^ specialtyForm;

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
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::Button^ button1;

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(28, 137);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(1121, 251);
			this->dataGridView1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1178, 137);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(188, 28);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Открыть базу данных";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(1178, 258);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(188, 28);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Удалить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(28, 23);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(173, 28);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Добавить данные";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(304, 29);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(111, 22);
			this->textBox1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(423, 30);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(125, 22);
			this->textBox2->TabIndex = 5;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(556, 31);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(113, 22);
			this->textBox3->TabIndex = 6;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox5->Location = System::Drawing::Point(840, 31);
			this->textBox5->Margin = System::Windows::Forms::Padding(4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(122, 22);
			this->textBox5->TabIndex = 8;
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox6->Location = System::Drawing::Point(1005, 31);
			this->textBox6->Margin = System::Windows::Forms::Padding(4);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(112, 22);
			this->textBox6->TabIndex = 9;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(28, 81);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(173, 28);
			this->button4->TabIndex = 10;
			this->button4->Text = L"Изменить данные";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(225, 87);
			this->textBox7->Margin = System::Windows::Forms::Padding(4);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(71, 22);
			this->textBox7->TabIndex = 11;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(304, 87);
			this->textBox8->Margin = System::Windows::Forms::Padding(4);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(111, 22);
			this->textBox8->TabIndex = 12;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(423, 87);
			this->textBox9->Margin = System::Windows::Forms::Padding(4);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(125, 22);
			this->textBox9->TabIndex = 13;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(556, 87);
			this->textBox10->Margin = System::Windows::Forms::Padding(4);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(113, 22);
			this->textBox10->TabIndex = 14;
			// 
			// textBox12
			// 
			this->textBox12->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox12->Location = System::Drawing::Point(840, 88);
			this->textBox12->Margin = System::Windows::Forms::Padding(4);
			this->textBox12->Name = L"textBox12";
			this->textBox12->ReadOnly = true;
			this->textBox12->Size = System::Drawing::Size(122, 22);
			this->textBox12->TabIndex = 16;
			// 
			// textBox13
			// 
			this->textBox13->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox13->Location = System::Drawing::Point(1005, 89);
			this->textBox13->Margin = System::Windows::Forms::Padding(4);
			this->textBox13->Name = L"textBox13";
			this->textBox13->ReadOnly = true;
			this->textBox13->Size = System::Drawing::Size(112, 22);
			this->textBox13->TabIndex = 17;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(1178, 222);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(188, 28);
			this->button5->TabIndex = 18;
			this->button5->Text = L"Сортировка ";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(301, 9);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(33, 16);
			this->label1->TabIndex = 19;
			this->label1->Text = L"Имя";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(420, 9);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(66, 16);
			this->label2->TabIndex = 20;
			this->label2->Text = L"Фамилия";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(556, 9);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 16);
			this->label3->TabIndex = 21;
			this->label3->Text = L"Отчество";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(837, 9);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(130, 16);
			this->label4->TabIndex = 22;
			this->label4->Text = L"Адрес проживания";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(674, 9);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(120, 16);
			this->label5->TabIndex = 22;
			this->label5->Text = L"Дата зачисления";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(1002, 9);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(108, 16);
			this->label6->TabIndex = 23;
			this->label6->Text = L"Специальность";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(227, 69);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(18, 16);
			this->label7->TabIndex = 24;
			this->label7->Text = L"id";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(301, 68);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(33, 16);
			this->label8->TabIndex = 25;
			this->label8->Text = L"Имя";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(420, 67);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(66, 16);
			this->label9->TabIndex = 26;
			this->label9->Text = L"Фамилия";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(674, 68);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(120, 16);
			this->label10->TabIndex = 27;
			this->label10->Text = L"Дата зачисления";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(837, 67);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(130, 16);
			this->label11->TabIndex = 28;
			this->label11->Text = L"Адрес проживания";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(556, 67);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(70, 16);
			this->label12->TabIndex = 29;
			this->label12->Text = L"Отчество";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(1002, 69);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(108, 16);
			this->label13->TabIndex = 30;
			this->label13->Text = L"Специальность";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(676, 31);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(153, 22);
			this->dateTimePicker1->TabIndex = 31;
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point(676, 87);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(153, 22);
			this->dateTimePicker2->TabIndex = 32;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(964, 31);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(28, 23);
			this->button6->TabIndex = 33;
			this->button6->Text = L"…";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(964, 88);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(28, 23);
			this->button7->TabIndex = 34;
			this->button7->Text = L"…";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(1121, 30);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(28, 23);
			this->button8->TabIndex = 35;
			this->button8->Text = L"…";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(1121, 89);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(28, 23);
			this->button9->TabIndex = 36;
			this->button9->Text = L"…";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1381, 414);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->dateTimePicker2);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"Данные";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: DataTable^ fillDataTable() {
		DataTable^ table;
		try
		{
			SQLiteCommand^ cmdSelect = db->CreateCommand();
			//Обратите внимание, что SQL запрос оформляем как обычную строчку
			cmdSelect->CommandText =
				"SELECT student.id as 'id', student.name as 'Имя', student.surname as 'Фамилия', student.middlename as 'Отчество', " +
				"(date.day || '/' || date.month || '/' || date.year) as 'Дата зачисления', " +
				"(address.street || ', ' || address.house || ', ' || address.house) as 'Адрес', " +
				"specialty.name as 'Специальность' " +
				"FROM student " +
				"JOIN date ON student.date_id = date.id " +
				"JOIN address ON student.address_id = address.id " +
				"JOIN specialty ON student.specialty_id = specialty.id; ";
			SQLiteDataReader^ reader = cmdSelect->ExecuteReader();

			//Переменные
			DataColumn^ column; //Столбец таблицы
			DataRow^ row; //Строка таблицы

			//Создаем таблицу данных
			table = gcnew DataTable();

			//Вектор названий столбцов
			vector<String^>^ nameColumns = gcnew vector<String^>();

			//Заполним данные о столбцах
			for (int i = 0; i < reader->FieldCount; i++) {
				nameColumns->push_back(reader->GetName(i));
				column = gcnew DataColumn(nameColumns->at(i), String::typeid);
				table->Columns->Add(column);
			}

			//Пробегаем по каждой записи
			while (reader->Read()) {
				//Заполняем строчку таблицы
				row = table->NewRow();
				//В каждой записи пробегаем по всем столбцам
				for (int i = 0; i < reader->FieldCount; i++) {
					//Добавляем значение столбца в row
					row[nameColumns->at(i)] = reader->GetValue(i)->ToString();
					reader->GetValue(i)->ToString();
				}
				table->Rows->Add(row);
			}

			enableControls();
		}
		catch (Exception^ e)
		{
			MessageBox::Show("Error Executing SQL: " + e->ToString(), "Exception While Displaying MyTable ...");
		}
		return table;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		String^ fileName = "Data.db";

		db = gcnew SQLiteConnection();
		try
		{
			db->ConnectionString = "Data Source=\"" + fileName + "\"";
			db->Open();

			DataTable^ table = fillDataTable();

			//Выводим результат
			dataGridView1->DataSource = NULL;
			dataGridView1->DataSource = table;

		}
		catch (Exception^ e)
		{
			MessageBox::Show("Error Executing SQL: " + e->ToString(), "Exception While Displaying MyTable ...");
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (dataGridView1->SelectedCells->Count == 0)
		{
			MessageBox::Show("Выделите строку", "Внимание");
			return;
		}

		try
		{
			System::Object^ student_id = dataGridView1->CurrentRow->Cells["id"]->EditedFormattedValue;
			//CheckOrDeleteDate(student_id);

			SQLiteCommand^ cmdDelete = db->CreateCommand();
			cmdDelete->CommandText = "DELETE FROM student WHERE id = " + student_id + ";";
			cmdDelete->ExecuteNonQuery();

			DataTable^ table = fillDataTable();

			//Выводим результат
			dataGridView1->DataSource = table;

		}
		catch (Exception^ e)
		{
			MessageBox::Show("Error Executing SQL: " + e->ToString(), "Exception ...");
		}
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
{
	try
	{
		if (textBox1->Text == "" || textBox2->Text == "" || textBox3->Text == "" ||
			idAddressAdd == NULL || idSpecialtyAdd == NULL) {
			MessageBox::Show("Заполните все поля", "Внимание");
			return;
		}


		SQLiteCommand^ cmdInsertValue = db->CreateCommand();
		cmdInsertValue->CommandText = 
			"INSERT INTO student (name, surname ,middlename, date_id, address_id, specialty_id) " + 
			"Values ('" + textBox1->Text + "', '" + textBox2->Text + "', '" + textBox3->Text + "', '" +
			getDateId(dateTimePicker1)+ "', '" + idAddressAdd + "', '" + idSpecialtyAdd + "')";
		cmdInsertValue->ExecuteNonQuery();

		DataTable^ table = fillDataTable();

		dataGridView1->DataSource = table;

		textBox1->Text = "";
		textBox2->Text = "";
		textBox3->Text = "";
		textBox5->Text = "";
		textBox6->Text = "";
		
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Error Executing SQL: " + e->ToString(), "Exception ...");
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) 
{
	try
	{
		if (textBox8->Text == "" || textBox9->Text == "" || textBox10->Text == "" ||
			idAddressChange == NULL || idSpecialtyChange == NULL) {
			MessageBox::Show("Заполните все поля", "Внимание");
			return;
		}

		SQLiteCommand^ cmdInsertValue = db->CreateCommand();
		cmdInsertValue->CommandText =
			"UPDATE student SET name = ('" + textBox8->Text + "') , surname = ('" + textBox9->Text +
			"') , middlename = ('" + textBox10->Text + "') , date_id = ('" + getDateId(dateTimePicker2) +
			"') , address_id = ('" + idAddressChange + "') , specialty_id = ('" + idSpecialtyChange +
			"') WHERE id = ('" + textBox7->Text + "')";
		cmdInsertValue->ExecuteNonQuery();

		DataTable^ table = fillDataTable();

		dataGridView1->DataSource = table;
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Error Executing SQL: " + e->ToString(), "Exception ...");
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) 
{
	try {
		this->dataGridView1->Sort(this->dataGridView1->Columns["Имя"], System::ComponentModel::ListSortDirection::Ascending);
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Error Executing SQL: " + e->ToString(), "Exception ...");
	}
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	disableControls();
}
private: System::Void disableControls()
{
	button2->Enabled = false;
	button3->Enabled = false;
	button4->Enabled = false;
	button5->Enabled = false;
	button6->Enabled = false;
	button7->Enabled = false;
	button8->Enabled = false;
	button9->Enabled = false;

	dateTimePicker1->Enabled = false;
	dateTimePicker2->Enabled = false;

	textBox1->ReadOnly = true;
	textBox2->ReadOnly = true;
	textBox3->ReadOnly = true;
	textBox7->ReadOnly = true;
	textBox8->ReadOnly = true;
	textBox9->ReadOnly = true;
	textBox10->ReadOnly = true;
}

private: System::Void enableControls()
{
	button2->Enabled = true;
	button3->Enabled = true;
	button4->Enabled = true;
	button5->Enabled = true;
	button6->Enabled = true;
	button7->Enabled = true;
	button8->Enabled = true;
	button9->Enabled = true;

	dateTimePicker1->Enabled = true;
	dateTimePicker2->Enabled = true;

	textBox1->ReadOnly = false;
	textBox2->ReadOnly = false;
	textBox3->ReadOnly = false;
	textBox7->ReadOnly = false;
	textBox8->ReadOnly = false;
	textBox9->ReadOnly = false;
	textBox10->ReadOnly = false;
}

private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e)
{
	addressForm = gcnew AddressForm;
	addressForm->FormClosing += gcnew FormClosingEventHandler(this, &MyForm::onAddAddressFormClosed);
	addressForm->setSqlConnection(db);
	addressForm->Show();
}
private: void onAddAddressFormClosed(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
{
	idAddressAdd = addressForm->getId();
	textBox5->Text = addressForm->getFormattedValue();
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e)
{
	addressForm = gcnew AddressForm;
	addressForm->FormClosing += gcnew FormClosingEventHandler(this, &MyForm::onChangeAddressFormClosed);
	addressForm->setSqlConnection(db);
	addressForm->Show();
}
private: void onChangeAddressFormClosed(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
{
	idAddressChange = addressForm->getId();
	textBox12->Text = addressForm->getFormattedValue();
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e)
{
	specialtyForm = gcnew SpecialtyForm;
	specialtyForm->FormClosing += gcnew FormClosingEventHandler(this, &MyForm::onAddSpecialtyFormClosed);
	specialtyForm->setSqlConnection(db);
	specialtyForm->Show();

}
private: void onAddSpecialtyFormClosed(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
{
	idSpecialtyAdd = specialtyForm->getId();
	textBox6->Text = specialtyForm->getFormattedValue();
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e)
{
	specialtyForm = gcnew SpecialtyForm;
	specialtyForm->FormClosing += gcnew FormClosingEventHandler(this, &MyForm::onChangeSpecialtyFormClosed);
	specialtyForm->setSqlConnection(db);
	specialtyForm->Show();
}
private: void onChangeSpecialtyFormClosed(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
{
	idSpecialtyChange = specialtyForm->getId();
	textBox13->Text = specialtyForm->getFormattedValue();
}
private: System::Object^ getDateId(DateTimePicker^ dtPicker)
{
	try
	{
		SQLiteCommand^ cmdSelect = db->CreateCommand();
		cmdSelect->CommandText = "SELECT COUNT(id) FROM date WHERE day = @pDay AND month = @pMonth AND year = @pYear;";
		cmdSelect->Parameters->Add(gcnew SQLiteParameter("@pDay", dtPicker->Value.Day));
		cmdSelect->Parameters->Add(gcnew SQLiteParameter("@pMonth", dtPicker->Value.Month));
		cmdSelect->Parameters->Add(gcnew SQLiteParameter("@pYear", dtPicker->Value.Year));

		SQLiteDataReader^ reader = cmdSelect->ExecuteReader();
		reader->Read();
		int count = reader->GetInt32(0);
		reader->Close();

		if (count == 0) {
			SQLiteCommand^ cmdInsert = db->CreateCommand();
			cmdInsert->CommandText = "INSERT INTO date(day, month, year) VALUES(" + dtPicker->Value.Day + ", " + dtPicker->Value.Month + ", " + dtPicker->Value.Year + ");";
			cmdInsert->ExecuteNonQuery();

			reader = cmdSelect->ExecuteReader();
			reader->Read();
			return reader->GetValue(0);
		}
		else {
			cmdSelect->CommandText = "SELECT id FROM date WHERE day = @pDay AND month = @pMonth AND year = @pYear;";
			cmdSelect->Parameters->Add(gcnew SQLiteParameter("@pDay", dtPicker->Value.Day));
			cmdSelect->Parameters->Add(gcnew SQLiteParameter("@pMonth", dtPicker->Value.Month));
			cmdSelect->Parameters->Add(gcnew SQLiteParameter("@pYear", dtPicker->Value.Year));
			reader = cmdSelect->ExecuteReader();

			reader->Read();
			return reader->GetValue(0);
		}
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Error Executing SQL: " + e->ToString(), "Exception While Displaying MyTable ...");
	}
}
private: void CheckOrDeleteDate(System::Object^ student_id)
{
	try
	{
		SQLiteCommand^ cmdSelect = db->CreateCommand();
		cmdSelect->CommandText = "SELECT date_id FROM student WHERE id == " + student_id + ";";
		SQLiteDataReader^ reader = cmdSelect->ExecuteReader();
		reader->Read();
		System::Object^ date_id = reader->GetValue(0);
		reader->Close();

		cmdSelect->CommandText = "SELECT id FROM student WHERE date_id ==" + date_id + ";";
		reader = cmdSelect->ExecuteReader();

		if (reader->FieldCount <= 1) {
			SQLiteCommand^ cmdDelete = db->CreateCommand();
			cmdDelete->CommandText = "DELETE FROM date WHERE id = " + date_id + ";";
			cmdDelete->ExecuteNonQuery();
		}
		reader->Close();
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Error Executing SQL: " + e->ToString(), "Exception While Displaying MyTable ...");
	}
}
};
}
