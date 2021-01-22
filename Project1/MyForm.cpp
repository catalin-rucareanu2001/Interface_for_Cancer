#include "MyForm.h"
#include "Backend.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main()
{
	if (Backend::Functionalitate() == -1)
	{
		exit(404);
	}
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Project1::MyForm form;
	Application::Run(% form);
}
