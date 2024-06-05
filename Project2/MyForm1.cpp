#include "MyForm1.h"
#include "MyForm2.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ arg) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    Project2::MyForm1 form; //WinFormsTest - имя вашего проекта
    Application::Run(% form);
    
}


