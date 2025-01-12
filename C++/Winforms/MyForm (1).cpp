#include "MyForm.h"
#include <iostream>
#include <string>
#include <vector>
#include <msclr\marshal_cppstd.h >


//Array->Text = (first.GetData());
	/*std::vector<std::string> vec{};
	vec.emplace_back(first.GetData());
	Array->Items->Add(gcnew System::String(vec[0].c_str()));*/
	//System::String^ clrString = "123";
	//std::string stdString = marshal_as<std::string>(clrString);  //String^ to std
	//System::String^ clrString2 = marshal_as<System::String^>(stdString);   //std to String^




using namespace msclr::interop;
using namespace System;
using namespace System::Windows::Forms;

int id=0;
 class Bank
{

public:
	
	int idPersonal;
	std::string name; std::string email; std::string age;
Bank(std::string name,  std::string  email, std::string age)
{
	this->name = name;
	this->email = email;
	this->age = age;
    id++;
}
Bank()
{
	this->name = " чел";
	this->email = " чел";
	this->age = " чел";
    id++;
	idPersonal = id;
}
void SetProperites(std::string name, std::string  email, std::string age)
{
	this->name = name;
	this->email = email;
	this->age = age;
	idPersonal = id;
}
System::String^ GetData()
{
	
	String^ result1;
	String^ result2;
	String^ result3;
	String^ result4;
	result1 = marshal_as<String^>(name);
	result2 = marshal_as<String^>(email);
	result3 = marshal_as<String^>(age);
	std::string str_id = std::to_string(id);
	result4 = marshal_as<String^>(str_id);

	return "Name = " + result1 + " email = " + result2 + " age =  " + result3 + "  id = " + result4 + " ; ";
}
int GetID()
{
	return idPersonal;
}

};






[STAThreadAttribute]
int main(array<String^>^ args)
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	WINDAWS::MyForm form;
	Application::Run(% form);

}

Bank a;
Bank a1;


System::Void WINDAWS::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
System::Void WINDAWS::MyForm::HIdeList_Click(System::Object^ sender, System::EventArgs^ e)
{
	HIdeList->Visible = false;
	list_button->Visible = true;
	Array->Visible = false;
}
System::Void WINDAWS::MyForm::list_button_Click(System::Object^ sender, System::EventArgs^ e) {
	list_button->Visible = false;
	HIdeList->Visible = true;
	Array->Visible = true;	
}
System::Void WINDAWS::MyForm::CreateNew_Click(System::Object^ sender, System::EventArgs^ e)
{
	
	Bank a("Alsekey", "Fozyqq215@gmail.com", "32........Это значение стоит по умолчанию,его слендует изменить");
	Array->Items->Add(a.GetData());
}
System::Void WINDAWS::MyForm::DeleteClassType_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (Array->SelectedIndex != -1)
	{
		Array->Items->RemoveAt(Array->SelectedIndex);
	}
}
System::Void WINDAWS::MyForm::EditButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	EditLabel->Visible = true;
	label1->Visible = true;
	label2->Visible = true;
	label3->Visible = true;
	Editbox1->Visible = true;
	Editbox2->Visible = true;
	Editbox3->Visible = true;

}
System::Void WINDAWS::MyForm::WTFBUTTON_Click(System::Object^ sender, System::EventArgs^ e)
{

	EditLabel->Visible = false;
	Editbox1->Visible = false;
	Editbox2->Visible = false;
	Editbox3->Visible = false;
	label1->Visible = false;
	label2->Visible = false;
	label3->Visible = false;

	






}
System::Void WINDAWS::MyForm::OkButton_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (Array->SelectedIndex != -1)
	{
		msclr::interop::marshal_context context;
		std::string Zxc1 = context.marshal_as<std::string>(Editbox1->Text);
		std::string Zxc2 = context.marshal_as<std::string>(Editbox2->Text);
		std::string Zxc3 = context.marshal_as<std::string>(Editbox3->Text);

		a1.name = Zxc1;
		a1.email = Zxc2;
		a1.age = Zxc3;

		Array->Items->RemoveAt(Array->SelectedIndex);
		Array->Items->Add(a1.GetData());
	}
}
System::Void WINDAWS::MyForm::Readme_Click(System::Object^ sender, System::EventArgs^ e)
{
	ReadmeLabel->Visible = true;
	CloseAgain->Visible = true;
}
System::Void WINDAWS::MyForm::CloseAgain_Click(System::Object^ sender, System::EventArgs^ e) 
{
	ReadmeLabel->Visible = false;
	CloseAgain->Visible = false;

}
System::Void WINDAWS::MyForm::IDBox_TextChanged(System::Object^ sender, System::EventArgs^ e)
{


}