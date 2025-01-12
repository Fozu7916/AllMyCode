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
	private: System::Windows::Forms::Button^ close_button;
	protected:

	protected:

	protected:

	private: System::Windows::Forms::Label^ Sigma_label;
	private: System::Windows::Forms::Label^ zagolovok;

	private: System::Windows::Forms::CheckBox^ randombox;


	private: System::Windows::Forms::Label^ Result;
	private: System::Windows::Forms::Button^ start_button;
	private: System::Windows::Forms::Label^ Ideolog;



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
			this->close_button = (gcnew System::Windows::Forms::Button());
			this->Sigma_label = (gcnew System::Windows::Forms::Label());
			this->zagolovok = (gcnew System::Windows::Forms::Label());
			this->randombox = (gcnew System::Windows::Forms::CheckBox());
			this->Result = (gcnew System::Windows::Forms::Label());
			this->start_button = (gcnew System::Windows::Forms::Button());
			this->Ideolog = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// close_button
			// 
			this->close_button->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->close_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->close_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->close_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->close_button->ForeColor = System::Drawing::Color::OrangeRed;
			this->close_button->Location = System::Drawing::Point(935, 3);
			this->close_button->Name = L"close_button";
			this->close_button->Size = System::Drawing::Size(58, 33);
			this->close_button->TabIndex = 0;
			this->close_button->Text = L"X";
			this->close_button->UseVisualStyleBackColor = false;
			this->close_button->Click += gcnew System::EventHandler(this, &MyForm::close_button_Click);
			// 
			// Sigma_label
			// 
			this->Sigma_label->AutoSize = true;
			this->Sigma_label->BackColor = System::Drawing::Color::Black;
			this->Sigma_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Sigma_label->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Sigma_label->Location = System::Drawing::Point(916, 581);
			this->Sigma_label->Name = L"Sigma_label";
			this->Sigma_label->Size = System::Drawing::Size(77, 25);
			this->Sigma_label->TabIndex = 1;
			this->Sigma_label->Text = L"Sigma";
			// 
			// zagolovok
			// 
			this->zagolovok->AutoSize = true;
			this->zagolovok->BackColor = System::Drawing::Color::Black;
			this->zagolovok->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->zagolovok->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->zagolovok->Location = System::Drawing::Point(262, 26);
			this->zagolovok->Name = L"zagolovok";
			this->zagolovok->Size = System::Drawing::Size(513, 33);
			this->zagolovok->TabIndex = 2;
			this->zagolovok->Text = L"Выбор Страны для ШедевроХойки";
			// 
			// randombox
			// 
			this->randombox->AutoSize = true;
			this->randombox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->randombox->ForeColor = System::Drawing::SystemColors::ControlText;
			this->randombox->Location = System::Drawing::Point(40, 91);
			this->randombox->Name = L"randombox";
			this->randombox->Size = System::Drawing::Size(235, 24);
			this->randombox->TabIndex = 3;
			this->randombox->Text = L"Рандомить ли идеологию\?";
			this->randombox->UseVisualStyleBackColor = true;
			// 
			// Result
			// 
			this->Result->AutoSize = true;
			this->Result->BackColor = System::Drawing::Color::Black;
			this->Result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Result->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->Result->Location = System::Drawing::Point(211, 474);
			this->Result->Name = L"Result";
			this->Result->Size = System::Drawing::Size(64, 33);
			this->Result->TabIndex = 4;
			this->Result->Text = L"хуй";
			this->Result->Visible = false;
			// 
			// start_button
			// 
			this->start_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->start_button->ForeColor = System::Drawing::SystemColors::ControlText;
			this->start_button->Location = System::Drawing::Point(40, 148);
			this->start_button->Name = L"start_button";
			this->start_button->Size = System::Drawing::Size(162, 35);
			this->start_button->TabIndex = 5;
			this->start_button->Text = L"НА БЕРЛИН!";
			this->start_button->UseVisualStyleBackColor = true;
			this->start_button->Click += gcnew System::EventHandler(this, &MyForm::start_button_Click);
			// 
			// Ideolog
			// 
			this->Ideolog->AutoSize = true;
			this->Ideolog->BackColor = System::Drawing::Color::Black;
			this->Ideolog->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Ideolog->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->Ideolog->Location = System::Drawing::Point(211, 428);
			this->Ideolog->Name = L"Ideolog";
			this->Ideolog->Size = System::Drawing::Size(64, 33);
			this->Ideolog->TabIndex = 6;
			this->Ideolog->Text = L"хуй";
			this->Ideolog->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(997, 615);
			this->Controls->Add(this->Ideolog);
			this->Controls->Add(this->start_button);
			this->Controls->Add(this->Result);
			this->Controls->Add(this->randombox);
			this->Controls->Add(this->zagolovok);
			this->Controls->Add(this->Sigma_label);
			this->Controls->Add(this->close_button);
			this->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"GoGO";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void close_button_Click(System::Object^ sender, System::EventArgs^ e);
    private: System::Void start_button_Click(System::Object^ sender, System::EventArgs^ e);
};
}
