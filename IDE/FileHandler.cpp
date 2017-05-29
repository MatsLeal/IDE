#include "FileHandler.h"


FileHandler::FileHandler(void)
{
}

void FileHandler::FillListFromDirectory(System::Windows::Forms::ListView^  List_Files,char *path,System::Windows::Forms::Label ^pwd)
{
	if(path==".")
	path=".";

	DIR *dir;
	struct dirent *ent;
	std::string aux;
	aux=path;
	int items=0;
	this->FileExplorerDirectory=gcnew System::String(aux.c_str());
	if ((dir = opendir(path)) != NULL) {
		/* print all the files and directories within directory */
		List_Files->Clear();
		while ((ent = readdir(dir)) != NULL) {
			{
			aux =ent->d_name;
			if(aux!="." && aux !="..")//If file name is diferent than . or .., add it to list
				{
					List_Files->Items->Add(gcnew System::String(aux.c_str()));
					if(SetCurrentDirectory(ent->d_name))
						{
							SetCurrentDirectory("..");
							//Find another way to asing this stuff 
							List_Files->Items[items]->BackColor=List_Files->Items[items]->BackColor.Coral;
						}
					items++;
				}
			
			}
		
		}
			if(strcmp(path,"..")==0){
				  char buffer[MAX_PATH];
				  GetModuleFileName( NULL, buffer, MAX_PATH );//Ahm, investigate this later
				  std::string::size_type pos //Variable in strange data type
				  = std::string //Instance of string wo conatin al of this below
				  ( buffer ). //Buffer is where the path is located
				  find_last_of( "\\/" ); //Find the last  \ leting know the current directory
				  pwd->Text=gcnew System::String
					  (//Create a string to recive this data
						(
							std::string( buffer ).substr( 0, pos)
						).c_str()//Convert char * path to String
					  );
				return;
			}
			pwd->Text=gcnew System::String(path);//Convert char * path to String
		closedir(dir);
		}
}
void FileHandler::FillRichTextBoxFromFile(System::Windows::Forms::RichTextBox^ tb,System::String ^filename,System::Windows::Forms::Label ^label_openfile)
{
						 std::string line;		
						  tb->Text="";
						  //funcino para convertir un System::String a std::string
						  std::ifstream sourcefile(msclr::interop::marshal_as<std::string>(filename));
						  if (sourcefile.is_open())
						  {
							while ( getline (sourcefile,line) )
							{
								System::String^ aux = gcnew System::String(line.c_str()); 
								tb->Text += aux+"\n"; //c_str converts std::string to System::String ^
							}
							sourcefile.close();
							label_openfile->Text=filename;
						  }
}