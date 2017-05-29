#include "MainForm.h"
using namespace System;
using namespace System ::Windows::Forms;
[STAThread]
void main(array<System::String^>^ arg) {
   Application::EnableVisualStyles();
   Application::SetCompatibleTextRenderingDefault(false);
   //TestForma es el nombre del proyecto
   IDE::MainForm form;
   Application::Run(%form);
}
