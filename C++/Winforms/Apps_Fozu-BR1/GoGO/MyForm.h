#pragma once

namespace GoGO {

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
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			
		}
	private: void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		Synchr_Click(sender, e);
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

	protected:



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ Create_button;
	private: System::Windows::Forms::Button^ Edit_button;
	private: System::Windows::Forms::Button^ Delete_button;
	private: System::Windows::Forms::ListBox^ List;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ Stealth_label;
	private: System::Windows::Forms::Button^ OK_button;
	private: System::Windows::Forms::Button^ Save_button;






	protected:

	protected:

	protected:













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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Create_button = (gcnew System::Windows::Forms::Button());
			this->Edit_button = (gcnew System::Windows::Forms::Button());
			this->Delete_button = (gcnew System::Windows::Forms::Button());
			this->List = (gcnew System::Windows::Forms::ListBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->Stealth_label = (gcnew System::Windows::Forms::Label());
			this->OK_button = (gcnew System::Windows::Forms::Button());
			this->Save_button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(172, 23);
			this->label1->TabIndex = 2;
			this->label1->Text = L" Список ";
			// 
			// Create_button
			// 
			this->Create_button->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Create_button->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Create_button->Location = System::Drawing::Point(17, 320);
			this->Create_button->Name = L"Create_button";
			this->Create_button->Size = System::Drawing::Size(106, 32);
			this->Create_button->TabIndex = 3;
			this->Create_button->Text = L"Создать";
			this->Create_button->UseVisualStyleBackColor = true;
			this->Create_button->Click += gcnew System::EventHandler(this, &MyForm::Create_button_Click);
			// 
			// Edit_button
			// 
			this->Edit_button->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Edit_button->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Edit_button->Location = System::Drawing::Point(141, 360);
			this->Edit_button->Name = L"Edit_button";
			this->Edit_button->Size = System::Drawing::Size(158, 32);
			this->Edit_button->TabIndex = 4;
			this->Edit_button->Text = L"Редактировать";
			this->Edit_button->UseVisualStyleBackColor = true;
			this->Edit_button->Click += gcnew System::EventHandler(this, &MyForm::Edit_button_Click);
			// 
			// Delete_button
			// 
			this->Delete_button->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Delete_button->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Delete_button->Location = System::Drawing::Point(17, 360);
			this->Delete_button->Name = L"Delete_button";
			this->Delete_button->Size = System::Drawing::Size(106, 32);
			this->Delete_button->TabIndex = 5;
			this->Delete_button->Text = L"Удалить";
			this->Delete_button->UseVisualStyleBackColor = true;
			this->Delete_button->Click += gcnew System::EventHandler(this, &MyForm::Delete_button_Click);
			// 
			// List
			// 
			this->List->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->List->FormattingEnabled = true;
			this->List->ItemHeight = 25;
			this->List->Location = System::Drawing::Point(17, 35);
			this->List->Name = L"List";
			this->List->Size = System::Drawing::Size(534, 279);
			this->List->TabIndex = 1;
			this->List->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::List_SelectedIndexChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(327, 360);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(152, 20);
			this->textBox1->TabIndex = 6;
			this->textBox1->Visible = false;
			// 
			// Stealth_label
			// 
			this->Stealth_label->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Stealth_label->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Stealth_label->Location = System::Drawing::Point(322, 320);
			this->Stealth_label->Name = L"Stealth_label";
			this->Stealth_label->Size = System::Drawing::Size(172, 32);
			this->Stealth_label->TabIndex = 7;
			this->Stealth_label->Text = L"Введите данные";
			this->Stealth_label->Visible = false;
			// 
			// OK_button
			// 
			this->OK_button->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->OK_button->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->OK_button->Location = System::Drawing::Point(500, 350);
			this->OK_button->Name = L"OK_button";
			this->OK_button->Size = System::Drawing::Size(51, 32);
			this->OK_button->TabIndex = 8;
			this->OK_button->Text = L"ОК";
			this->OK_button->UseVisualStyleBackColor = true;
			this->OK_button->Visible = false;
			this->OK_button->Click += gcnew System::EventHandler(this, &MyForm::OK_button_Click);
			// 
			// Save_button
			// 
			this->Save_button->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Save_button->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Save_button->Location = System::Drawing::Point(141, 320);
			this->Save_button->Name = L"Save_button";
			this->Save_button->Size = System::Drawing::Size(158, 32);
			this->Save_button->TabIndex = 9;
			this->Save_button->Text = L"Сохранить";
			this->Save_button->UseVisualStyleBackColor = true;
			this->Save_button->Click += gcnew System::EventHandler(this, &MyForm::Save_button_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(603, 405);
			this->Controls->Add(this->Save_button);
			this->Controls->Add(this->OK_button);
			this->Controls->Add(this->Stealth_label);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->Delete_button);
			this->Controls->Add(this->Edit_button);
			this->Controls->Add(this->Create_button);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->List);
			this->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"GoGO";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//обьявление функций
	private: System::Void close_button_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Delete_button_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Edit_button_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Create_button_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void OK_button_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Save_button_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Synchr_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void List_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
