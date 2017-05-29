#include "ClipBoardHandler.h" 


ClipBoardHandler::ClipBoardHandler(void)
{
}
System::String^ ClipBoardHandler::GetClipboardText()
{
	return "lgo";
}


void ClipBoardHandler::SetClipBoardText(const System::String ^s){
	/*
	OpenClipboard(0);
	EmptyClipboard();	
	
	HGLOBAL hg=GlobalAlloc(GMEM_MOVEABLE,s.Length);
	if (!hg){
		CloseClipboard();
		return;
	}
	memcpy(GlobalLock(hg),&s,s.Length());
	GlobalUnlock(hg);
	SetClipboardData(CF_TEXT,hg);
	CloseClipboard();
	GlobalFree(hg);
	*/
}