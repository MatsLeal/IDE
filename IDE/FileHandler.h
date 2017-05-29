#pragma once
#include "dirent.h"
#include "string.h"
#include <msclr\marshal_cppstd.h>
#include "conio.h"
#include "stdio.h"
#include "windows.h"  
#include <iostream>
#include <fstream>
#include <tchar.h>
#define BUFSIZE MAX_PATH

ref class FileHandler
{
public:
	System::String ^FileExplorerDirectory;
	FileHandler(void);
	void FillListFromDirectory(System::Windows::Forms::ListView^  List_Files,char *path,System::Windows::Forms::Label ^pwd);
	void FillRichTextBoxFromFile(System::Windows::Forms::RichTextBox^ tb,System::String ^filename,System::Windows::Forms::Label ^labe_openfile);
};

