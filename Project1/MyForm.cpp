#include "MyForm.h"
#include "loadingScreen.h"
#include "loadingScreen.h"
#include "Backend.h"
#define _CRT_SECURE_NO_WARNINGS

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main()
{
	/*if (Backend::Functionalitate() == -1)
	{
		exit(404);
	}*/
	 PlaySound(L"res/snd2.wav", NULL, SND_LOOP | SND_ASYNC);
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	
	Project1::loadingScreen form;
	Application::Run(% form);
	/*if (Backend::Functionalitate() == -1)
	{
		exit(404);
	}*/


	Project1::MyForm form1;
	Application::Run(% form1);
	Backend::StergereTotala();
}
