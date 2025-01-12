#include "MyForm.h"
#include "time.h"
#include <fstream>
#include <Windows.h>
#include <string>
#include <vector>
#include <msclr\marshal_cppstd.h>
#include <msclr\auto_gcroot.h>
#include <algorithm> 

using namespace msclr::interop;
using namespace GoGO;
using namespace System;
using namespace System::Windows::Forms;



int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew MyForm);
    return 0;
}


//все функции программы
System::Void GoGO::MyForm::close_button_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->Close();
};
System::Void GoGO::MyForm::Delete_button_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (List->SelectedIndex != -1)
    {
        List->Items->RemoveAt(List->SelectedIndex);
    }
}
System::Void GoGO::MyForm::Edit_button_Click(System::Object^ sender, System::EventArgs^ e)
{
    Stealth_label->Visible = true;
    textBox1->Visible = true;
    OK_button->Visible = true;
}
System::Void GoGO::MyForm::Create_button_Click(System::Object^ sender, System::EventArgs^ e) 
{
    List->Items->Add("Free Form");
}
System::Void GoGO::MyForm::OK_button_Click(System::Object^ sender, System::EventArgs^ e)
{  
    if (textBox1->Text != "")
    {
        List->Items[List->SelectedIndex] = textBox1->Text;
        Stealth_label->Visible = false;
        textBox1->Visible = false;
        textBox1->Text = "";
    }
}
System::Void GoGO::MyForm::Save_button_Click(System::Object^ sender, System::EventArgs^ e)
{
    std::ofstream file("output1.txt");
    if (file.is_open())
    {
        for (int i = 0; i < List->Items->Count; i++)
        {
            msclr::interop::marshal_context context;
            String^ Element = List->Items[i]->ToString(); 
            std::string result = context.marshal_as<std::string>(Element);
            file << result + "\n";
        }
        file.close(); 
    }
}
System::Void GoGO::MyForm::Synchr_Click(System::Object^ sender, System::EventArgs^ e)
{
    std::string fileName = "output1.txt";
    std::ifstream inputFile(fileName);
    List->Items->Clear();
    if (inputFile.is_open())
    {
        std::string line;
        while (std::getline(inputFile, line))
        {
          String^ lineStr = msclr::interop::marshal_as<String^>(line);
          List->Items->Add(lineStr);
        }
        inputFile.close(); 
   }
}
