#include "MyForm.h"
#include <Windows.h>

using namespace lab111;
using namespace System::Windows::Forms;
using namespace System;

[STAThread]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	lab111::MyForm form;
	Application::Run(% form);
}
