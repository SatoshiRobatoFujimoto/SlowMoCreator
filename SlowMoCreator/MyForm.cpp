#include "MyForm.h"
#include "stdlib.h"
#include <time.h>
#using <system.dll>

using namespace System;
using namespace System::Windows::Forms;

[STAThread]

int  main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	SlowMoCreator::MyForm form;
	Application::Run(%form);	
	return 1;
}

