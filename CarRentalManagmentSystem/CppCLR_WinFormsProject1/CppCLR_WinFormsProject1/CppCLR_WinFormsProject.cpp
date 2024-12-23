#include "pch.h"
#include "Form1.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // Create the main form
    CppCLRWinFormsProject::Form1^ form = gcnew CppCLRWinFormsProject::Form1();
    Application::Run(form);

    return 0;
}
