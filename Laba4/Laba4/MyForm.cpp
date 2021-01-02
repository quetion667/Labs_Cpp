#include "MyForm.h"
#include <Windows.h>

using namespace Laba4;
using namespace System::Windows::Forms;
using namespace System;

[STAThread]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Laba4::MyForm form;
	Application::Run(% form);


}