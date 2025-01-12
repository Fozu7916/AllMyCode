#include "MyForm.h"
#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <msclr\marshal_cppstd.h >
#include <ctime>
#include <cstdlib>
#include <atlstr.h>
#include <windows.h>
using namespace msclr::interop;
using namespace System;
using namespace System::Windows::Forms;

//
// P.S КНОПКИ С 3 ПО 9 МОГУТ БЫТЬ ОПЕЧАТОЧНО НАЗВАННЫ НЕ NextButton а NexButton !
// создавать новые вопросы лучше по схеме: скопировал существующий, поменял цифру нехт буттонов и в форме.h нашёл описание елемента некстбуттон под нужной тебе цифрой
// и далее там создаёшь новый ивент подобно тому как он описан в предыдущих
// можете создавать больше или меньше персонажей а так же менять фандомы
//

[STAThreadAttribute]
int main(array<String^>^ args)
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	WINDAWS::MyForm form;
	Application::Run(% form);
	srand(time(NULL));
	//main лучше не трогать , если вам не нужно конкретно тут что то менять
}

// тут создаём/удаляем/меняем персонажей
class TypeOfPersona
{
public:
	int Juggernaut = 0;
	int Lanaya = 0;
	int Naga = 0;
	int Slark = 0;
	int Invoker = 0;
	int Sf = 0;



};


TypeOfPersona hero;  // обьект класса в котором мы каждому герою начисляем баллы и в конце по балам вычисляем результаты теста


// кнопки описания не требует bcz название говорит всё за меня
System::Void WINDAWS::MyForm::CloseButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
System::Void WINDAWS::MyForm::GoButton_Click(System::Object^ sender, System::EventArgs^ e) {
	GoButton->Visible = false;
	label1->Visible = true;
	label1->Text = "вы...?";
	checkBox1->Visible = true;
	checkBox2->Visible = true;
	checkBox3->Visible = true;
	checkBox4->Visible = false;
	checkBox5->Visible = false;
	checkBox6->Visible = false;
	checkBox1->Text = "человек";
	checkBox2->Text = "рыбка";
	checkBox3->Text = "демон";
	checkBox4->Text = "розовые";
	checkBox5->Text = "розовые";
	checkBox6->Text = "розовые";
	NextButton1->Visible = true;
	button1->Visible = false;

}

int a = 0;
bool zx = false;
//переменные для последовательных действий чекбокса , иначе необходтимо было бы создавать дахуя чекбоксов  и каждый раз делать одни видимыми другие невидимыми

System::Void WINDAWS::MyForm::checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if(checkBox1->Checked)
	{ 
	checkBox2->Checked = false;
	checkBox3->Checked = false;
	checkBox4->Checked = false;
	checkBox5->Checked = false;
	checkBox6->Checked = false;
	zx = true;
	if (a == 0 && zx )
	{
		
		hero.Invoker += 1;
		hero.Juggernaut += 1;
		hero.Lanaya += 1;
		a++;
		zx = false;
	}

	if (a == 1 && zx)

	{
		hero.Slark += 3;
		a++;
		zx = false;
	}

	if (a == 2 && zx) {
		hero.Sf += 3;
		a++;
		zx = false;
	}
	
	if (a == 3 && zx)
	{
		hero.Invoker += 1;
		hero.Lanaya += 1;
		hero.Sf += 1;
		zx = false;
	}
	}
}



System::Void WINDAWS::MyForm::checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox2->Checked)
	{
		checkBox1->Checked = false;
		checkBox3->Checked = false;
		checkBox4->Checked = false;
		checkBox5->Checked = false;
		checkBox6->Checked = false;
		zx = true;
		if (a == 0 && zx)
		{

			hero.Slark += 2;
			hero.Naga += 2;
			a++;
			zx = false;
		}


		if (a == 1 && zx)
		{
			hero.Juggernaut += 3;
			a++;
			zx = false;
		}

		if (a == 2 && zx)


			if (a == 2 && zx)
			{
				hero.Juggernaut += 1;
				hero.Naga += 1;
				hero.Slark += 1;
				zx = false;
		    }

	}

}
System::Void WINDAWS::MyForm::checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox3->Checked)
	{
		checkBox1->Checked = false;
		checkBox2->Checked = false;
		checkBox4->Checked = false;
		checkBox5->Checked = false;
		checkBox6->Checked = false;
		zx = true;
		if (a == 0 && zx)
		{

			hero.Sf += 3;
			a++;
			zx = false;

		}

		if (a == 1 && zx)
		{
			hero.Lanaya += 3;
			a++;
			zx = false;
		}


		if (a == 2 && zx) {
			hero.Juggernaut = hero.Juggernaut + 1;
			hero.Lanaya += 1;
			hero.Naga += 1;
			hero.Slark += 1;
			a++;
			zx = false;
		}
	}

}
System::Void WINDAWS::MyForm::checkBox4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox4->Checked)
	{
		checkBox1->Checked = false;
		checkBox2->Checked = false;
		checkBox3->Checked = false;
		checkBox5->Checked = false;
		checkBox6->Checked = false;
		zx = true;

		if (a == 1 && zx)
		{
			hero.Sf += 3;
			a++;
			zx = false;
		}
	}
	
}
System::Void WINDAWS::MyForm::checkBox5_CheckedChanged(System::Object ^ sender, System::EventArgs ^ e) {
		if (checkBox5->Checked)
		{
			checkBox1->Checked = false;
			checkBox2->Checked = false;
			checkBox3->Checked = false;
			checkBox4->Checked = false;
			checkBox6->Checked = false;
			zx = true;


			if (a == 1 && zx)
			{
				hero.Invoker += 3;
				a++;
				zx = false;
			}

		}
	}
System::Void WINDAWS::MyForm::checkBox6_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox6->Checked)
	{
		checkBox1->Checked = false;
		checkBox2->Checked = false;
		checkBox3->Checked = false;
		checkBox4->Checked = false;
		checkBox5->Checked = false;
		zx = true;
		if (a == 3 && zx)
		{
			hero.Naga += 3;
			a++;
			zx = false;
		}
	}



}

System::Void WINDAWS::MyForm::NextButton1_Click(System::Object^ sender, System::EventArgs^ e)
{
	checkBox1->Checked = false;
	checkBox2->Checked = false;
	checkBox3->Checked = false;
	checkBox4->Checked = false;
	checkBox5->Checked = false;
	checkBox6->Checked = false;
	checkBox4->Visible = true;
	checkBox5->Visible = true;
	checkBox6->Visible = true;
	label1->Text = "Ваша быващая/нынешняя/настоящая любовь??";
	checkBox1->Text = "нага";
	checkBox2->Text = "Ланая";
	checkBox3->Text = "Джагернаут";
	checkBox4->Text = "Твоя душа мб";
	checkBox5->Text = "она была шалавой";
	checkBox6->Text = "конечно же я";
	NextButton1->Visible = false;
	NextButton2->Visible = true;
}
System::Void WINDAWS::MyForm::NextButton2_Click(System::Object^ sender, System::EventArgs^ e)
{
	checkBox1->Checked = false;
	checkBox2->Checked = false;
	checkBox3->Checked = false;
	checkBox4->Checked = false;
	checkBox5->Checked = false;
	checkBox6->Checked = false;
	checkBox4->Visible = false;
	checkBox5->Visible = false;
	checkBox6->Visible = false;
	label1->Text = "физ или маг дмг?";
	checkBox1->Text = "и туда и туда могу";
	checkBox2->Text = "маг";
	checkBox3->Text = "физ";

	NextButton2->Visible = false;
	NexButton3->Visible = true;
}

System::Void WINDAWS::MyForm::NexButton3_Click(System::Object^ sender, System::EventArgs^ e)
{
	checkBox1->Checked = false;
	checkBox2->Checked = false;
	checkBox3->Visible = false;
	checkBox4->Visible = false;
	checkBox5->Visible = false;
	checkBox6->Visible = false;
	label1->Text = "Какое оружие вы предпочитаете?";
	checkBox1->Text = "Рукой хуярить ачо";
	checkBox2->Text = "Меч";

	NextButton2->Visible = false;



	NexButton3->Visible = false;
	NextButton4->Visible = true;
}

System::Void WINDAWS::MyForm::NextButton4_Click(System::Object^ sender, System::EventArgs^ e)
{
	checkBox1->Checked = false;
	checkBox2->Checked = false;
	checkBox3->Visible = false;
	checkBox4->Visible = false;
	checkBox5->Visible = false;
	checkBox6->Visible = false;

	NextButton4->Visible = false;
	FinalButton->Visible = true;
}





// система вычитания результата 
System::Void WINDAWS::MyForm::FinalButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	checkBox1->Visible = false;
	checkBox2->Visible = false;
	checkBox3->Visible = false;
	checkBox4->Visible = false;
	checkBox5->Visible = false;
	checkBox6->Visible = false;
	label1->Text = "Ваш Результат:";
	EndTitle->Visible = true;
	if (hero.Juggernaut > hero.Lanaya && hero.Juggernaut >= hero.Naga && hero.Juggernaut >= hero.Slark && hero.Juggernaut >= hero.Sf && hero.Juggernaut >= hero.Invoker)
	{
		EndTitle->Text = "Вы Джагернаут!";
		Juggernaut_Picture->Visible = true;
	}
	else if (hero.Sf > hero.Lanaya && hero.Sf >= hero.Naga && hero.Sf >= hero.Slark &&  hero.Sf >= hero.Juggernaut && hero.Sf >= hero.Invoker)
	{
		EndTitle->Text = "Вы СФ!";
		Sf_Picture->Visible = true;
	}
	else if (hero.Invoker >= hero.Lanaya && hero.Invoker >= hero.Naga && hero.Invoker >= hero.Slark && hero.Invoker >= hero.Sf && hero.Invoker >= hero.Juggernaut)
	{
		EndTitle->Text = "Вы Инвокер!";
		Inbossik_Picture->Visible = true;
	}
	else if (hero.Slark >= hero.Lanaya && hero.Slark >= hero.Naga && hero.Slark >= hero.Juggernaut && hero.Slark >= hero.Sf && hero.Slark >= hero.Invoker)
	{
		EndTitle->Text = "Вы Сларк!";
		Slark_Picture->Visible = true;
	}
	else if (hero.Naga >= hero.Lanaya &&  hero.Naga >= hero.Juggernaut && hero.Naga >= hero.Slark && hero.Naga >= hero.Sf && hero.Naga >= hero.Invoker)
	{
		EndTitle->Text = "Вы Нага!";
		Naga_Picture->Visible = true;
	}
	else if ( hero.Lanaya >= hero.Juggernaut && hero.Lanaya >= hero.Naga && hero.Lanaya >= hero.Slark && hero.Lanaya >= hero.Sf && hero.Lanaya >= hero.Invoker)
	{
		EndTitle->Text = "Вы Ланая!";
		Lanaya_Picture->Visible = true;
	}

	//встроенные тесты , проверяющие правильно ли идёт логика в 1-6 чекбоксах
	// 
	//std::string name;
	//name = std::to_string( a);
	//EndTitle->Text = marshal_as<String^>(name);


//все варианты героев
//hero.Juggernaut
//hero.Lanaya
//hero.Naga
//hero.Slark 
//hero.Invoker 
//hero.Sf 
	
}
