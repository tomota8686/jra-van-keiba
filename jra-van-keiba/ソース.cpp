#include "MyForm.h" // Form名.h
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	// gcnew プロジェクト名::Form名()
	Application::Run(gcnew jravankeiba::MyForm());
	return 0;
}