#include "MyForm.h"
#include "LinkedQueue.h"

using namespace System;
using namespace System::Windows::Forms;



[STAThread]
void Main(array<String^>^ args)
{
	LinkedQueue * l = new LinkedQueue();
	l->Add(2);
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Queue::MyForm form;
	Application::Run(%form);
}

