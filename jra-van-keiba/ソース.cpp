#include "MyForm.h" // Form��.h
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	// gcnew �v���W�F�N�g��::Form��()
	Application::Run(gcnew jravankeiba::MyForm());
	return 0;
}