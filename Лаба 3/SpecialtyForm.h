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
	/// Сводка для SpecialtyForm
	/// </summary>
	public ref class SpecialtyForm : public System::Windows::Forms::Form
	{
	public:
		SpecialtyForm(void)
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
		~SpecialtyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnAdd;
	protected:
	private: System::Windows::Forms::Button^ btnChange;
	private: System::Windows::Forms::TextBox^ tbChangeId;
	private: System::Windows::Forms::TextBox^ tbChangeName;
	private: System::Windows::Forms::TextBox^ tbAddName;
	private: System::Windows::Forms::DataGridView^ dview;


	private: System::Windows::Forms::Label^ lbId;
	private: System::Windows::Forms::Label^ lbAddName;
	private: System::Windows::Forms::Label^ lbChangeName;
	private: System::Windows::Forms::Button^ btnDelete;

	private: System::Windows::Forms::Button^ btnOk;
	public: bool closeReasonIsChosen;

	private: SQLiteConnection^ db;
	private: System::Object^ id;
	private: System::Object^ name;
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
			this->tbChangeName = (gcnew System::Windows::Forms::TextBox());
			this->tbAddName = (gcnew System::Windows::Forms::TextBox());
			this->dview = (gcnew System::Windows::Forms::DataGridView());
			this->lbId = (gcnew System::Windows::Forms::Label());
			this->lbAddName = (gcnew System::Windows::Forms::Label());
			this->lbChangeName = (gcnew System::Windows::Forms::Label());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnOk = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dview))->BeginInit();
			this->SuspendLayout();
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(12, 31);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(99, 23);
			this->btnAdd->TabIndex = 0;
			this->btnAdd->Text = L"Добавить";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &SpecialtyForm::btnAdd_Click);
			// 
			// btnChange
			// 
			this->btnChange->Location = System::Drawing::Point(12, 85);
			this->btnChange->Name = L"btnChange";
			this->btnChange->Size = System::Drawing::Size(99, 23);
			this->btnChange->TabIndex = 1;
			this->btnChange->Text = L"Изменить";
			this->btnChange->UseVisualStyleBackColor = true;
			this->btnChange->Click += gcnew System::EventHandler(this, &SpecialtyForm::btnChange_Click);
			// 
			// tbChangeId
			// 
			this->tbChangeId->Location = System::Drawing::Point(132, 86);
			this->tbChangeId->Name = L"tbChangeId";
			this->tbChangeId->Size = System::Drawing::Size(100, 22);
			this->tbChangeId->TabIndex = 3;
			// 
			// tbChangeName
			// 
			this->tbChangeName->Location = System::Drawing::Point(251, 86);
			this->tbChangeName->Name = L"tbChangeName";
			this->tbChangeName->Size = System::Drawing::Size(100, 22);
			this->tbChangeName->TabIndex = 4;
			// 
			// tbAddName
			// 
			this->tbAddName->Location = System::Drawing::Point(251, 32);
			this->tbAddName->Name = L"tbAddName";
			this->tbAddName->Size = System::Drawing::Size(100, 22);
			this->tbAddName->TabIndex = 5;
			// 
			// dview
			// 
			this->dview->AllowUserToAddRows = false;
			this->dview->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dview->Location = System::Drawing::Point(13, 128);
			this->dview->Name = L"dview";
			this->dview->RowHeadersWidth = 51;
			this->dview->RowTemplate->Height = 24;
			this->dview->Size = System::Drawing::Size(338, 260);
			this->dview->TabIndex = 6;
			// 
			// lbId
			// 
			this->lbId->AutoSize = true;
			this->lbId->Location = System::Drawing::Point(129, 67);
			this->lbId->Name = L"lbId";
			this->lbId->Size = System::Drawing::Size(18, 16);
			this->lbId->TabIndex = 7;
			this->lbId->Text = L"id";
			// 
			// lbAddName
			// 
			this->lbAddName->AutoSize = true;
			this->lbAddName->Location = System::Drawing::Point(248, 13);
			this->lbAddName->Name = L"lbAddName";
			this->lbAddName->Size = System::Drawing::Size(73, 16);
			this->lbAddName->TabIndex = 8;
			this->lbAddName->Text = L"Название";
			// 
			// lbChangeName
			// 
			this->lbChangeName->AutoSize = true;
			this->lbChangeName->Location = System::Drawing::Point(248, 67);
			this->lbChangeName->Name = L"lbChangeName";
			this->lbChangeName->Size = System::Drawing::Size(73, 16);
			this->lbChangeName->TabIndex = 9;
			this->lbChangeName->Text = L"Название";
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(379, 128);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(96, 23);
			this->btnDelete->TabIndex = 10;
			this->btnDelete->Text = L"Удалить";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &SpecialtyForm::btnDelete_Click);
			// 
			// btnOk
			// 
			this->btnOk->Location = System::Drawing::Point(379, 166);
			this->btnOk->Name = L"btnOk";
			this->btnOk->Size = System::Drawing::Size(96, 23);
			this->btnOk->TabIndex = 11;
			this->btnOk->Text = L"Выбрать";
			this->btnOk->UseVisualStyleBackColor = true;
			this->btnOk->Click += gcnew System::EventHandler(this, &SpecialtyForm::btnOk_Click);
			// 
			// SpecialtyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(500, 400);
			this->Controls->Add(this->btnOk);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->lbChangeName);
			this->Controls->Add(this->lbAddName);
			this->Controls->Add(this->lbId);
			this->Controls->Add(this->dview);
			this->Controls->Add(this->tbAddName);
			this->Controls->Add(this->tbChangeName);
			this->Controls->Add(this->tbChangeId);
			this->Controls->Add(this->btnChange);
			this->Controls->Add(this->btnAdd);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"SpecialtyForm";
			this->Text = L"Специальность";
			this->Load += gcnew System::EventHandler(this, &SpecialtyForm::SpecialtyForm_Load);
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
			cmdSelect->CommandText = "SELECT id, name AS `Имя` FROM specialty;";
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
private: System::Void SpecialtyForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	dview->DataSource = fillDataTable();
	closeReasonIsChosen = false;
}
private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e)
{
	try
	{
		SQLiteCommand^ cmdInsertValue = db->CreateCommand();
		cmdInsertValue->CommandText = "INSERT  INTO specialty(name) VALUES ('" + tbAddName->Text + "')";
		cmdInsertValue->ExecuteNonQuery();

		DataTable^ table = fillDataTable();

		dview->DataSource = table;

		tbAddName->Text = "";
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
		cmdInsertValue->CommandText = "UPDATE specialty SET name = ('" + tbChangeName->Text + "') WHERE id = ('" + tbChangeId->Text + "')";
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
		cmdInsertValue->CommandText = "DELETE FROM specialty WHERE id = @pId";
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
		name = dview->CurrentRow->Cells["Имя"]->EditedFormattedValue;
		closeReasonIsChosen = false;
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
	return name->ToString();
}
};
}
