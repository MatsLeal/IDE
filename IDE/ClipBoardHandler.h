#pragma once
#include "string.h"
#include <windows.h>
#include <stdio.h>

ref class ClipBoardHandler
{
public:
	
	ClipBoardHandler(void);
	System::String^ GetClipboardText();
	void SetClipBoardText(const System::String ^s);
};

