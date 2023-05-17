#pragma once

#include <cliext/vector>

namespace Лаба3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SQLite;

	using namespace cliext;

	/// <summary>
	/// Сводка для AddressForm
	/// </summary>
	public ref class AddressForm : public System::Windows::Forms::Form
	{
	public:
		AddressForm(void)
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
		~AddressForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnChange;
	private: System::Windows::Forms::TextBox^ tbChangeId;
	private: System::Windows::Forms::TextBox^ tbChangeStreet;
	private: System::Windows::Forms::TextBox^ tbChangeHouse;
	private: System::Windows::Forms::TextBox^ tbChangeFlat;
	protected:

	protected:





	private: System::Windows::Forms::TextBox^ tbAddStreet;
	private: System::Windows::Forms::TextBox^ tbAddHouse;
	private: System::Windows::Forms::TextBox^ tbAddFlat;
	private: System::Windows::Forms::DataGridView^ dview;






	private: System::Windows::Forms::Button^ btnDelete;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ btnOk;

	private: SQLiteConnection^ db;
	private: System::Object^ id;
	private: System::Object^ street;
	private: System::Object^ house;
	private: System::Object^ flat;
	public: bool closeReasonIsChosen;

	public:

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
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnChange = (gcnew System::Windows::Forms::Button());
			this->tbChangeId = (gcnew System::Windows::Forms::TextBox());
			this->tbChangeStreet = (gcnew System::Windows::Forms::TextBox());
			this->tbChangeHouse = (gcnew System::Windows::Forms::TextBox());
			this->tbChangeFlat = (gcnew System::Windows::Forms::TextBox());
			this->tbAddStreet = (gcnew System::Windows::Forms::TextBox());
			this->tbAddHouse = (gcnew System::Windows::Forms::TextBox());
			this->tbAddFlat = (gcnew System::Windows::Forms::TextBox());
			this->dview = (gcnew System::Windows::Forms::DataGridView());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->btnOk = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dview))->BeginInit();
			this->SuspendLayout();
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(12, 30);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(126, 23);
			this->btnAdd->TabIndex = 0;
			this->btnAdd->Text = L"Добавить";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &AddressForm::btnAdd_Click);
			// 
			// btnChange
			// 
			this->btnChange->Location = System::Drawing::Point(12, 80);
			this->btnChange->Name = L"btnChange";
			this->btnChange->Size = System::Drawing::Size(126, 23);
			this->btnChange->TabIndex = 1;
			this->btnChange->Text = L"Изменить";
			this->btnChange->UseVisualStyleBackColor = true;
			this->btnChange->Click += gcnew System::EventHandler(this, &AddressForm::btnChange_Click);
			// 
			// tbChangeId
			// 
			this->tbChangeId->Location = System::Drawing::Point(168, 81);
			this->tbChangeId->Name = L"tbChangeId";
			this->tbChangeId->Size = System::Drawing::Size(100, 22);
			this->tbChangeId->TabIndex = 2;
			// 
			// tbChangeStreet
			// 
			this->tbChangeStreet->Location = System::Drawing::Point(296, 81);
			this->tbChangeStreet->Name = L"tbChangeStreet";
			this->tbChangeStreet->Size = System::Drawing::Size(100, 22);
			this->tbChangeStreet->TabIndex = 3;
			// 
			// tbChangeHouse
			// 
			this->tbChangeHouse->Location = System::Drawing::Point(419, 81);
			this->tbChangeHouse->Name = L"tbChangeHouse";
			this->tbChangeHouse->Size = System::Drawing::Size(100, 22);
			this->tbChangeHouse->TabIndex = 4;
			// 
			// tbChangeFlat
			// 
			this->tbChangeFlat->Location = System::Drawing::Point(538, 81);
			this->tbChangeFlat->Name = L"tbChangeFlat";
			this->tbChangeFlat->Size = System::Drawing::Size(100, 22);
			this->tbChangeFlat->TabIndex = 5;
			// 
			// tbAddStreet
			// 
			this->tbAddStreet->Location = System::Drawing::Point(296, 30);
			this->tbAddStreet->Name = L"tbAddStreet";
			this->tbAddStreet->Size = System::Drawing::Size(100, 22);
			this->tbAddStreet->TabIndex = 6;
			// 
			// tbAddHouse
			// 
			this->tbAddHouse->Location = System::Drawing::Point(419, 31);
			this->tbAddHouse->Name = L"tbAddHouse";
			this->tbAddHouse->Size = System::Drawing::Size(100, 22);
			this->tbAddHouse->TabIndex = 7;
			// 
			// tbAddFlat
			// 
			this->tbAddFlat->Location = System::Drawing::Point(538, 31);
			this->tbAddFlat->Name = L"tbAddFlat";
			this->tbAddFlat->Size = System::Drawing::Size(100, 22);
			this->tbAddFlat->TabIndex = 8;
			// 
			// dview
			// 
			this->dview->AllowUserToAddRows = false;
			this->dview->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dview->Location = System::Drawing::Point(12, 127);
			this->dview->Name = L"dview";
			this->dview->RowHeadersWidth = 51;
			this->dview->RowTemplate->Height = 24;
			this->dview->Size = System::Drawing::Size(626, 230);
			this->dview->TabIndex = 9;
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(661, 127);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(112, 23);
			this->btnDelete->TabIndex = 10;
			this->btnDelete->Text = L"Удалить";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &AddressForm::btnDelete_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(165, 62);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(18, 16);
			this->label1->TabIndex = 11;
			this->label1->Text = L"id";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(293, 11);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(48, 16);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Улица";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(293, 62);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(48, 16);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Улица";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(416, 12);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(33, 16);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Дом";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(416, 62);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(33, 16);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Дом";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(535, 9);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(70, 16);
			this->label6->TabIndex = 16;
			this->label6->Text = L"Квартира";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(535, 62);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(70, 16);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Квартира";
			// 
			// btnOk
			// 
			this->btnOk->Location = System::Drawing::Point(661, 166);
			this->btnOk->Name = L"btnOk";
			this->btnOk->Size = System::Drawing::Size(112, 23);
			this->btnOk->TabIndex = 18;
			this->btnOk->Text = L"Выбрать";
			this->btnOk->UseVisualStyleBackColor = true;
			this->btnOk->Click += gcnew System::EventHandler(this, &AddressForm::btnOk_Click);
			// 
			// AddressForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(787, 383);
			this->Controls->Add(this->btnOk);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->dview);
			this->Controls->Add(this->tbAddFlat);
			this->Controls->Add(this->tbAddHouse);
			this->Controls->Add(this->tbAddStreet);
			this->Controls->Add(this->tbChangeFlat);
			this->Controls->Add(this->tbChangeHouse);
			this->Controls->Add(this->tbChangeStreet);
			this->Controls->Add(this->tbChangeId);
			this->Controls->Add(this->btnChange);
			this->Controls->Add(this->btnAdd);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"AddressForm";
			this->Text = L"AddressForm";
			this->Load += gcnew System::EventHandler(this, &AddressForm::AddressForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dview))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: void setSqlConnection(SQLiteConnection^ db) {
		this->db = db;
	}
	  private: DataTable^ fillDataTable() {
		  DataTable^ table;
		  try
		  {
			  SQLiteCommand^ cmdSelect = db->CreateCommand();
			  //Обратите внимание, что SQL запрос оформляем как обычную строчку
			  cmdSelect->CommandText = "SELECT id, street as 'Улица', house as 'Дом', flat as 'Квартира' FROM address;";
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
		  }
		  catch (Exception^ e)
		  {
			  MessageBox::Show("Error Executing SQL: " + e->ToString(), "Exception While Displaying MyTable ...");
		  }
		  return table;
	  }
private: System::Void AddressForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	dview->DataSource = fillDataTable();
	closeReasonIsChosen = false;
}
private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e)
{
	try
	{
		SQLiteCommand^ cmdInsertValue = db->CreateCommand();
		cmdInsertValue->CommandText = "INSERT  INTO address(street,house,flat) VALUES ('" + tbAddStreet->Text + "', '" + tbAddHouse->Text +"', '" + tbAddFlat->Text + "')";
		cmdInsertValue->ExecuteNonQuery();

		DataTable^ table = fillDataTable();

		dview->DataSource = table;

		tbAddStreet->Text = "";
		tbAddHouse->Text = "";
		tbAddFlat->Text = "";
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Error Executing SQL: " + e->ToString(), "Exception ...");
	}
}
private: System::Void btnChange_Click(System::Object^ sender, System::EventArgs^ e)
{
	try
	{
		SQLiteCommand^ cmdInsertValue = db->CreateCommand();
		cmdInsertValue->CommandText = "UPDATE address SET street = ('" + tbChangeStreet->Text + "'), house = ('" + tbChangeHouse->Text + "'), flat = ('" + tbChangeFlat->Text + "') WHERE id = ('" + tbChangeId->Text + "')";
		cmdInsertValue->ExecuteNonQuery();

		DataTable^ table = fillDataTable();

		dview->DataSource = table;
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Error Executing SQL: " + e->ToString(), "Exception ...");
	}
}
private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (dview->SelectedCells->Count == 0)
	{
		MessageBox::Show("Выделите строку", "Внимание");
		return;
	}
	try
	{
		SQLiteCommand^ cmdInsertValue = db->CreateCommand();
		cmdInsertValue->CommandText = "DELETE FROM address WHERE id = @pId";
		cmdInsertValue->Parameters->Add(gcnew SQLiteParameter("@pId", dview->CurrentRow->Cells["id"]->EditedFormattedValue));
		cmdInsertValue->ExecuteNonQuery();


		DataTable^ table = fillDataTable();

		//Выводим результат
		dview->DataSource = table;

	}
	catch (Exception^ e)
	{
		MessageBox::Show("Error Executing SQL: " + e->ToString(), "Exception ...");
	}
}
private: System::Void btnOk_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (dview->SelectedCells->Count == 0)
	{
		MessageBox::Show("Выделите строку", "Внимание");
		return;
	}
	try
	{
		id = dview->CurrentRow->Cells["id"]->EditedFormattedValue;
		street = dview->CurrentRow->Cells["Улица"]->EditedFormattedValue;
		house = dview->CurrentRow->Cells["Дом"]->EditedFormattedValue;
		flat = dview->CurrentRow->Cells["Квартира"]->EditedFormattedValue;
		closeReasonIsChosen = true;
		Close();
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Error Executing SQL: " + e->ToString(), "Exception ...");
	}
}
public: System::Object^ getId()
{
	return id;
}
public: System::String^ getFormattedValue()
{
	return street->ToString() + ", " + house->ToString() + ", " + flat->ToString();
}
};
}
