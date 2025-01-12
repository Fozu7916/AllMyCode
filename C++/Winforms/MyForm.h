#pragma once
#include <shlwapi.h>
#include <stdlib.h>
#pragma comment (lib, "shell32.lib ")


namespace WINDAWS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;
	using namespace System::IO;

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
	private: System::Windows::Forms::Button^ CloseButton;
	private: System::Windows::Forms::Label^ By_Fozu7916;
	private: System::Windows::Forms::Button^ GoButton;
	private: System::Windows::Forms::Label^ GeneralLabel;
	private: System::Windows::Forms::Label^ label1;



















	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::Button^ NextButton1;
	private: System::Windows::Forms::Button^ NexButton9;
	private: System::Windows::Forms::Button^ NextButton2;

	private: System::Windows::Forms::Button^ NexButton7;
	private: System::Windows::Forms::Button^ NexButton6;
	private: System::Windows::Forms::Button^ NexButton5;
	private: System::Windows::Forms::Button^ NextButton4;

	private: System::Windows::Forms::Button^ NexButton3;
	private: System::Windows::Forms::Button^ FinalButton;
	private: System::Windows::Forms::Label^ EndTitle;
	private: System::Windows::Forms::CheckBox^ checkBox5;
	private: System::Windows::Forms::CheckBox^ checkBox6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ Juggernaut_Picture;

	private: System::Windows::Forms::Button^ Slark_Picture;

	private: System::Windows::Forms::Button^ Naga_Picture;

	private: System::Windows::Forms::Button^ Inbossik_Picture;

	private: System::Windows::Forms::Button^ Lanaya_Picture;

	private: System::Windows::Forms::Button^ Sf_Picture;


















	protected:


























































	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->CloseButton = (gcnew System::Windows::Forms::Button());
			this->By_Fozu7916 = (gcnew System::Windows::Forms::Label());
			this->GoButton = (gcnew System::Windows::Forms::Button());
			this->GeneralLabel = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->NextButton1 = (gcnew System::Windows::Forms::Button());
			this->NexButton9 = (gcnew System::Windows::Forms::Button());
			this->NextButton2 = (gcnew System::Windows::Forms::Button());
			this->NexButton7 = (gcnew System::Windows::Forms::Button());
			this->NexButton6 = (gcnew System::Windows::Forms::Button());
			this->NexButton5 = (gcnew System::Windows::Forms::Button());
			this->NextButton4 = (gcnew System::Windows::Forms::Button());
			this->NexButton3 = (gcnew System::Windows::Forms::Button());
			this->FinalButton = (gcnew System::Windows::Forms::Button());
			this->EndTitle = (gcnew System::Windows::Forms::Label());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Juggernaut_Picture = (gcnew System::Windows::Forms::Button());
			this->Slark_Picture = (gcnew System::Windows::Forms::Button());
			this->Naga_Picture = (gcnew System::Windows::Forms::Button());
			this->Inbossik_Picture = (gcnew System::Windows::Forms::Button());
			this->Lanaya_Picture = (gcnew System::Windows::Forms::Button());
			this->Sf_Picture = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// CloseButton
			// 
			this->CloseButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->CloseButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->CloseButton->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->CloseButton->Location = System::Drawing::Point(468, 2);
			this->CloseButton->Name = L"CloseButton";
			this->CloseButton->Size = System::Drawing::Size(30, 22);
			this->CloseButton->TabIndex = 0;
			this->CloseButton->Text = L"Х";
			this->CloseButton->UseVisualStyleBackColor = false;
			this->CloseButton->Click += gcnew System::EventHandler(this, &MyForm::CloseButton_Click);
			// 
			// By_Fozu7916
			// 
			this->By_Fozu7916->AutoSize = true;
			this->By_Fozu7916->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(29)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->By_Fozu7916->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->By_Fozu7916->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->By_Fozu7916->Location = System::Drawing::Point(412, 578);
			this->By_Fozu7916->Name = L"By_Fozu7916";
			this->By_Fozu7916->Size = System::Drawing::Size(76, 13);
			this->By_Fozu7916->TabIndex = 9;
			this->By_Fozu7916->Text = L"By Fozu#7916";
			// 
			// GoButton
			// 
			this->GoButton->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->GoButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->GoButton->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->GoButton->Location = System::Drawing::Point(152, 539);
			this->GoButton->Name = L"GoButton";
			this->GoButton->Size = System::Drawing::Size(151, 40);
			this->GoButton->TabIndex = 10;
			this->GoButton->Text = L"Начать!";
			this->GoButton->UseVisualStyleBackColor = false;
			this->GoButton->Click += gcnew System::EventHandler(this, &MyForm::GoButton_Click);
			// 
			// GeneralLabel
			// 
			this->GeneralLabel->AutoSize = true;
			this->GeneralLabel->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->GeneralLabel->Cursor = System::Windows::Forms::Cursors::No;
			this->GeneralLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->GeneralLabel->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->GeneralLabel->Location = System::Drawing::Point(107, 9);
			this->GeneralLabel->Name = L"GeneralLabel";
			this->GeneralLabel->Size = System::Drawing::Size(255, 29);
			this->GeneralLabel->TabIndex = 11;
			this->GeneralLabel->Text = L"Тест кто ты из Dota 2";
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(12, 54);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(448, 155);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Первый вопрос";
			this->label1->Visible = false;
			// 
			// checkBox1
			// 
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->checkBox1->Location = System::Drawing::Point(78, 212);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(302, 37);
			this->checkBox1->TabIndex = 32;
			this->checkBox1->Text = L"checkBox1";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->Visible = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->checkBox2->Location = System::Drawing::Point(78, 255);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(302, 37);
			this->checkBox2->TabIndex = 33;
			this->checkBox2->Text = L"checkBox2";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->Visible = false;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->checkBox3->Location = System::Drawing::Point(76, 298);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(304, 37);
			this->checkBox3->TabIndex = 34;
			this->checkBox3->Text = L"checkBox3";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->Visible = false;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox3_CheckedChanged);
			// 
			// checkBox4
			// 
			this->checkBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->checkBox4->Location = System::Drawing::Point(76, 341);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(304, 37);
			this->checkBox4->TabIndex = 35;
			this->checkBox4->Text = L"checkBox4";
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->Visible = false;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox4_CheckedChanged);
			// 
			// NextButton1
			// 
			this->NextButton1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->NextButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->NextButton1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->NextButton1->Location = System::Drawing::Point(152, 539);
			this->NextButton1->Name = L"NextButton1";
			this->NextButton1->Size = System::Drawing::Size(151, 40);
			this->NextButton1->TabIndex = 36;
			this->NextButton1->Text = L"Далее";
			this->NextButton1->UseVisualStyleBackColor = false;
			this->NextButton1->Visible = false;
			this->NextButton1->Click += gcnew System::EventHandler(this, &MyForm::NextButton1_Click);
			// 
			// NexButton9
			// 
			this->NexButton9->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->NexButton9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->NexButton9->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->NexButton9->Location = System::Drawing::Point(152, 539);
			this->NexButton9->Name = L"NexButton9";
			this->NexButton9->Size = System::Drawing::Size(151, 40);
			this->NexButton9->TabIndex = 37;
			this->NexButton9->Text = L"Далее";
			this->NexButton9->UseVisualStyleBackColor = false;
			this->NexButton9->Visible = false;
			// 
			// NextButton2
			// 
			this->NextButton2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->NextButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->NextButton2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->NextButton2->Location = System::Drawing::Point(152, 548);
			this->NextButton2->Name = L"NextButton2";
			this->NextButton2->Size = System::Drawing::Size(151, 40);
			this->NextButton2->TabIndex = 38;
			this->NextButton2->Text = L"Далее";
			this->NextButton2->UseVisualStyleBackColor = false;
			this->NextButton2->Visible = false;
			this->NextButton2->Click += gcnew System::EventHandler(this, &MyForm::NextButton2_Click);
			// 
			// NexButton7
			// 
			this->NexButton7->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->NexButton7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->NexButton7->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->NexButton7->Location = System::Drawing::Point(152, 502);
			this->NexButton7->Name = L"NexButton7";
			this->NexButton7->Size = System::Drawing::Size(151, 40);
			this->NexButton7->TabIndex = 39;
			this->NexButton7->Text = L"Далее";
			this->NexButton7->UseVisualStyleBackColor = false;
			this->NexButton7->Visible = false;
			// 
			// NexButton6
			// 
			this->NexButton6->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->NexButton6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->NexButton6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->NexButton6->Location = System::Drawing::Point(152, 502);
			this->NexButton6->Name = L"NexButton6";
			this->NexButton6->Size = System::Drawing::Size(151, 40);
			this->NexButton6->TabIndex = 40;
			this->NexButton6->Text = L"Далее";
			this->NexButton6->UseVisualStyleBackColor = false;
			this->NexButton6->Visible = false;
			// 
			// NexButton5
			// 
			this->NexButton5->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->NexButton5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->NexButton5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->NexButton5->Location = System::Drawing::Point(152, 502);
			this->NexButton5->Name = L"NexButton5";
			this->NexButton5->Size = System::Drawing::Size(151, 40);
			this->NexButton5->TabIndex = 41;
			this->NexButton5->Text = L"Далее";
			this->NexButton5->UseVisualStyleBackColor = false;
			this->NexButton5->Visible = false;
			// 
			// NextButton4
			// 
			this->NextButton4->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->NextButton4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->NextButton4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->NextButton4->Location = System::Drawing::Point(152, 502);
			this->NextButton4->Name = L"NextButton4";
			this->NextButton4->Size = System::Drawing::Size(151, 40);
			this->NextButton4->TabIndex = 42;
			this->NextButton4->Text = L"Далее";
			this->NextButton4->UseVisualStyleBackColor = false;
			this->NextButton4->Visible = false;
			this->NextButton4->Click += gcnew System::EventHandler(this, &MyForm::NextButton4_Click);
			// 
			// NexButton3
			// 
			this->NexButton3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->NexButton3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->NexButton3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->NexButton3->Location = System::Drawing::Point(152, 539);
			this->NexButton3->Name = L"NexButton3";
			this->NexButton3->Size = System::Drawing::Size(151, 40);
			this->NexButton3->TabIndex = 43;
			this->NexButton3->Text = L"Далее";
			this->NexButton3->UseVisualStyleBackColor = false;
			this->NexButton3->Visible = false;
			this->NexButton3->Click += gcnew System::EventHandler(this, &MyForm::NexButton3_Click);
			// 
			// FinalButton
			// 
			this->FinalButton->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->FinalButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FinalButton->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->FinalButton->Location = System::Drawing::Point(309, 548);
			this->FinalButton->Name = L"FinalButton";
			this->FinalButton->Size = System::Drawing::Size(151, 40);
			this->FinalButton->TabIndex = 44;
			this->FinalButton->Text = L"Результат";
			this->FinalButton->UseVisualStyleBackColor = false;
			this->FinalButton->Visible = false;
			this->FinalButton->Click += gcnew System::EventHandler(this, &MyForm::FinalButton_Click);
			// 
			// EndTitle
			// 
			this->EndTitle->AutoSize = true;
			this->EndTitle->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->EndTitle->Cursor = System::Windows::Forms::Cursors::No;
			this->EndTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->EndTitle->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->EndTitle->Location = System::Drawing::Point(28, 549);
			this->EndTitle->Name = L"EndTitle";
			this->EndTitle->Size = System::Drawing::Size(212, 42);
			this->EndTitle->TabIndex = 45;
			this->EndTitle->Text = L"Вы залупа!";
			this->EndTitle->Visible = false;
			// 
			// checkBox5
			// 
			this->checkBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->checkBox5->Location = System::Drawing::Point(71, 384);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(309, 37);
			this->checkBox5->TabIndex = 46;
			this->checkBox5->Text = L"checkBox5";
			this->checkBox5->UseVisualStyleBackColor = true;
			this->checkBox5->Visible = false;
			this->checkBox5->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox5_CheckedChanged);
			// 
			// checkBox6
			// 
			this->checkBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->checkBox6->Location = System::Drawing::Point(71, 427);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(309, 37);
			this->checkBox6->TabIndex = 47;
			this->checkBox6->Text = L"checkBox6";
			this->checkBox6->UseVisualStyleBackColor = true;
			this->checkBox6->Visible = false;
			this->checkBox6->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox6_CheckedChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(45, 89);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(356, 434);
			this->button1->TabIndex = 48;
			this->button1->UseVisualStyleBackColor = false;
			// 
			// Juggernaut_Picture
			// 
			this->Juggernaut_Picture->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->Juggernaut_Picture->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Juggernaut_Picture.BackgroundImage")));
			this->Juggernaut_Picture->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Juggernaut_Picture->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Italic,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Juggernaut_Picture->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Juggernaut_Picture->Location = System::Drawing::Point(35, 89);
			this->Juggernaut_Picture->Name = L"Juggernaut_Picture";
			this->Juggernaut_Picture->Size = System::Drawing::Size(356, 434);
			this->Juggernaut_Picture->TabIndex = 49;
			this->Juggernaut_Picture->UseVisualStyleBackColor = false;
			this->Juggernaut_Picture->Visible = false;
			// 
			// Slark_Picture
			// 
			this->Slark_Picture->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->Slark_Picture->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Slark_Picture.BackgroundImage")));
			this->Slark_Picture->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Slark_Picture->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Slark_Picture->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Slark_Picture->Location = System::Drawing::Point(35, 163);
			this->Slark_Picture->Name = L"Slark_Picture";
			this->Slark_Picture->Size = System::Drawing::Size(356, 227);
			this->Slark_Picture->TabIndex = 50;
			this->Slark_Picture->UseVisualStyleBackColor = false;
			this->Slark_Picture->Visible = false;
			// 
			// Naga_Picture
			// 
			this->Naga_Picture->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->Naga_Picture->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Naga_Picture.BackgroundImage")));
			this->Naga_Picture->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Naga_Picture->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Naga_Picture->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Naga_Picture->Location = System::Drawing::Point(19, 164);
			this->Naga_Picture->Name = L"Naga_Picture";
			this->Naga_Picture->Size = System::Drawing::Size(409, 244);
			this->Naga_Picture->TabIndex = 51;
			this->Naga_Picture->UseVisualStyleBackColor = false;
			this->Naga_Picture->Visible = false;
			// 
			// Inbossik_Picture
			// 
			this->Inbossik_Picture->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->Inbossik_Picture->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Inbossik_Picture.BackgroundImage")));
			this->Inbossik_Picture->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Inbossik_Picture->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Italic,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Inbossik_Picture->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Inbossik_Picture->Location = System::Drawing::Point(35, 123);
			this->Inbossik_Picture->Name = L"Inbossik_Picture";
			this->Inbossik_Picture->Size = System::Drawing::Size(356, 285);
			this->Inbossik_Picture->TabIndex = 52;
			this->Inbossik_Picture->UseVisualStyleBackColor = false;
			this->Inbossik_Picture->Visible = false;
			// 
			// Lanaya_Picture
			// 
			this->Lanaya_Picture->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->Lanaya_Picture->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Lanaya_Picture.BackgroundImage")));
			this->Lanaya_Picture->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Lanaya_Picture->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Lanaya_Picture->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Lanaya_Picture->Location = System::Drawing::Point(24, 89);
			this->Lanaya_Picture->Name = L"Lanaya_Picture";
			this->Lanaya_Picture->Size = System::Drawing::Size(356, 434);
			this->Lanaya_Picture->TabIndex = 53;
			this->Lanaya_Picture->UseVisualStyleBackColor = false;
			this->Lanaya_Picture->Visible = false;
			// 
			// Sf_Picture
			// 
			this->Sf_Picture->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->Sf_Picture->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Sf_Picture.BackgroundImage")));
			this->Sf_Picture->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Sf_Picture->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Sf_Picture->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Sf_Picture->Location = System::Drawing::Point(45, 89);
			this->Sf_Picture->Name = L"Sf_Picture";
			this->Sf_Picture->Size = System::Drawing::Size(356, 434);
			this->Sf_Picture->TabIndex = 54;
			this->Sf_Picture->UseVisualStyleBackColor = false;
			this->Sf_Picture->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(500, 600);
			this->Controls->Add(this->Sf_Picture);
			this->Controls->Add(this->Lanaya_Picture);
			this->Controls->Add(this->Inbossik_Picture);
			this->Controls->Add(this->Naga_Picture);
			this->Controls->Add(this->Slark_Picture);
			this->Controls->Add(this->Juggernaut_Picture);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->checkBox6);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->EndTitle);
			this->Controls->Add(this->FinalButton);
			this->Controls->Add(this->NexButton3);
			this->Controls->Add(this->NextButton4);
			this->Controls->Add(this->NexButton5);
			this->Controls->Add(this->NexButton6);
			this->Controls->Add(this->NexButton7);
			this->Controls->Add(this->NextButton2);
			this->Controls->Add(this->NexButton9);
			this->Controls->Add(this->NextButton1);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->GeneralLabel);
			this->Controls->Add(this->GoButton);
			this->Controls->Add(this->By_Fozu7916);
			this->Controls->Add(this->CloseButton);
			this->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Location = System::Drawing::Point(10, 10);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"UNIT TEST";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
// все events описаны в мейн cpp-шке.
private:System::Void CloseButton_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void GoButton_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void checkBox4_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void NextButton1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void NextButton2_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void NexButton3_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void FinalButton_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void checkBox5_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void checkBox6_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void NextButton4_Click(System::Object^ sender, System::EventArgs^ e);

};
	
};
		  

