#include "MyForm.h"
#include <string>
//#include <msclr\marshal_cppstd.h>

#include "decompression.h"

using namespace System;
using namespace System::Windows::Forms;
//using namespace msclr::interop;

//int enumerateArchive(const char*, const char*);

[STAThread]
void main(array<String^>^ arg) {
	setlocale(LC_ALL, "Russian");
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	FTPClient::MyForm form; 
	Application::Run(%form);
}

