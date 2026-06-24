#include "MyForm.h"
#include "LoginForm.h"
using namespace curs;

[STAThreadAttribute]

int main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	LoginForm^ loginform = gcnew LoginForm();
	loginform->ShowDialog();
	if (loginform->IsAuth) { Application::Run(gcnew MyForm); }
	return 0;
}
