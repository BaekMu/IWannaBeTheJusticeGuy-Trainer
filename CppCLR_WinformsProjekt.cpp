#pragma once
#include "pch.h"
#include "MainForm.h"

using namespace System;

//int main(array<System::String ^> ^args)
//{
//    return 0;
//}

using namespace System::Windows::Forms;

[STAThread]
int main() {
	//AllocConsole();
	//freopen("CONOUT$", "w", stdout);

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew IWBTJG_Trainer::MainForm()); 
	return 0;
}