#include "MyForm.h"
#include "time.h"

#include <Windows.h>

using namespace GoGO;
using namespace System;
using namespace System::Windows::Forms;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew MyForm);
    return 0;
    srand(time(NULL));
}

System::Void GoGO::MyForm::close_button_Click(System::Object^ sender, System::EventArgs^ e)
{
    this->Close();
};

System::Void GoGO::MyForm::start_button_Click(System::Object^ sender, System::EventArgs^ e)
{
    int CoountryNumber = 0;
    int Country_count = 12;
    int Ideology = 0;
    CoountryNumber = rand()% Country_count;

    switch (CoountryNumber)
    {
    case 1:
        Result->Visible = true;
        Result->Text = "Канада";
        break;
    case 2:
        Result->Visible = true;
        Result->Text = "CCCР";
        break;
    case 3:
        Result->Visible = true;
        Result->Text = "США";
        break;
    case 4:
        Result->Visible = true;
        Result->Text = "Великобритания";
        break;
    case 5:
        Result->Visible = true;
        Result->Text = "Германия";
        break;
    case 6:
        Result->Visible = true;
        Result->Text = "Венгрия";
        break;
    case 7:
        Result->Visible = true;
        Result->Text = "Румыния";
        break;
    case 8:
        Result->Visible = true;
        Result->Text = "Италия";
        break;
    case 9:
        Result->Visible = true;
        Result->Text = "Турция";
        break;
    case 10:
        Result->Visible = true;
        Result->Text = "Япония";
        break;
    case 11:
        Result->Visible = true;
        Result->Text = "Франция";
        break;
    case 12:
        Result->Visible = true;
        Result->Text = "Польша";
        break;
    default:
       break;
    }
    if (randombox->Checked)
    {
        Ideology = rand() % 4;
        switch (Ideology)
        {
        case 1:
            Ideolog->Visible = true;
            Ideolog->Text = "Fashicst";
            break;
        case 2:
            Ideolog->Visible = true;
            Ideolog->Text = "Democrati";
            break;
        case 3:
            Ideolog->Visible = true;
            Ideolog->Text = "Communist-socialist";
            break;
        case 4:
            Ideolog->Visible = true;
            Ideolog->Text = "Neutraleteo";
            break;
        }
    }
    
};