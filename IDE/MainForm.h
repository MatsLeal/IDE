#pragma once
#include "Windows.h";

#include "FileHandler.h"


namespace IDE {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Resumen de MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		FileHandler ^FH; 
		MainForm(void)
		{
			FH= gcnew FileHandler;
			InitializeComponent();
			//List_Files->Columns->Add("Files",0,HorizontalAlignment::Left);//Agregamos columna a la lista
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  copiarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  pasteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  undoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  redoToolStripMenuItem;
	private: System::Windows::Forms::RichTextBox^  EntradaArchivo;
	private: System::Windows::Forms::MenuStrip^  menuStrip2;
	private: System::Windows::Forms::ToolStripMenuItem^  archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  saveAsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  closeToolStripMenuItem;
	private: System::Windows::Forms::Label^  label_openfile;
	private: System::Windows::Forms::ListView^  List_Files;
	private: System::Windows::Forms::MenuStrip^  menuStrip3;
	private: System::Windows::Forms::ToolStripMenuItem^  toolsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  openFolderToolStripMenuItem;
	private: System::Windows::Forms::Label^  Label_PWD;
	private: System::Windows::Forms::ToolStripMenuItem^  selectAllToolStripMenuItem;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  btn_folderup;



	protected: 

	private:
		/// <summary>
		/// Variable del diseñador requerida.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido del método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->copiarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pasteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->undoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->redoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->selectAllToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->EntradaArchivo = (gcnew System::Windows::Forms::RichTextBox());
			this->menuStrip2 = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->closeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label_openfile = (gcnew System::Windows::Forms::Label());
			this->List_Files = (gcnew System::Windows::Forms::ListView());
			this->menuStrip3 = (gcnew System::Windows::Forms::MenuStrip());
			this->toolsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFolderToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Label_PWD = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->btn_folderup = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->menuStrip2->SuspendLayout();
			this->menuStrip3->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(275, 11);
			this->button1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(87, 26);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Librarian";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Dock = System::Windows::Forms::DockStyle::None;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->fileToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(52, 11);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(7, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(48, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->BackColor = System::Drawing::SystemColors::Window;
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->copiarToolStripMenuItem, 
				this->pasteToolStripMenuItem, this->undoToolStripMenuItem, this->redoToolStripMenuItem, this->selectAllToolStripMenuItem});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(39, 20);
			this->fileToolStripMenuItem->Text = L"Edit";
			this->fileToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::fileToolStripMenuItem_Click);
			// 
			// copiarToolStripMenuItem
			// 
			this->copiarToolStripMenuItem->Name = L"copiarToolStripMenuItem";
			this->copiarToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->copiarToolStripMenuItem->Text = L"Copy";
			this->copiarToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::copiarToolStripMenuItem_Click);
			// 
			// pasteToolStripMenuItem
			// 
			this->pasteToolStripMenuItem->Name = L"pasteToolStripMenuItem";
			this->pasteToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->pasteToolStripMenuItem->Text = L"Paste";
			this->pasteToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::pasteToolStripMenuItem_Click);
			// 
			// undoToolStripMenuItem
			// 
			this->undoToolStripMenuItem->Name = L"undoToolStripMenuItem";
			this->undoToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->undoToolStripMenuItem->Text = L"Undo";
			this->undoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::undoToolStripMenuItem_Click);
			// 
			// redoToolStripMenuItem
			// 
			this->redoToolStripMenuItem->Name = L"redoToolStripMenuItem";
			this->redoToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->redoToolStripMenuItem->Text = L"Redo";
			this->redoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::redoToolStripMenuItem_Click);
			// 
			// selectAllToolStripMenuItem
			// 
			this->selectAllToolStripMenuItem->Name = L"selectAllToolStripMenuItem";
			this->selectAllToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->selectAllToolStripMenuItem->Text = L"Select All";
			this->selectAllToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::selectAllToolStripMenuItem_Click);
			// 
			// EntradaArchivo
			// 
			this->EntradaArchivo->EnableAutoDragDrop = true;
			this->EntradaArchivo->Location = System::Drawing::Point(275, 64);
			this->EntradaArchivo->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->EntradaArchivo->Name = L"EntradaArchivo";
			this->EntradaArchivo->Size = System::Drawing::Size(982, 470);
			this->EntradaArchivo->TabIndex = 2;
			this->EntradaArchivo->Text = L"";
			this->EntradaArchivo->TextChanged += gcnew System::EventHandler(this, &MainForm::EntradaArchivo_TextChanged);
			// 
			// menuStrip2
			// 
			this->menuStrip2->Dock = System::Windows::Forms::DockStyle::None;
			this->menuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->archivoToolStripMenuItem});
			this->menuStrip2->Location = System::Drawing::Point(0, 11);
			this->menuStrip2->Name = L"menuStrip2";
			this->menuStrip2->Padding = System::Windows::Forms::Padding(7, 2, 0, 2);
			this->menuStrip2->Size = System::Drawing::Size(46, 24);
			this->menuStrip2->TabIndex = 3;
			this->menuStrip2->Text = L"menuStrip2";
			this->menuStrip2->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &MainForm::menuStrip2_ItemClicked);
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->BackColor = System::Drawing::SystemColors::Window;
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->saveToolStripMenuItem, 
				this->saveAsToolStripMenuItem, this->openToolStripMenuItem, this->closeToolStripMenuItem});
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->archivoToolStripMenuItem->Text = L"File";
			this->archivoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::archivoToolStripMenuItem_Click);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(114, 22);
			this->saveToolStripMenuItem->Text = L"Save";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::saveToolStripMenuItem_Click);
			// 
			// saveAsToolStripMenuItem
			// 
			this->saveAsToolStripMenuItem->Name = L"saveAsToolStripMenuItem";
			this->saveAsToolStripMenuItem->Size = System::Drawing::Size(114, 22);
			this->saveAsToolStripMenuItem->Text = L"Save As";
			this->saveAsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::saveAsToolStripMenuItem_Click);
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(114, 22);
			this->openToolStripMenuItem->Text = L"Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::openToolStripMenuItem_Click);
			// 
			// closeToolStripMenuItem
			// 
			this->closeToolStripMenuItem->Name = L"closeToolStripMenuItem";
			this->closeToolStripMenuItem->Size = System::Drawing::Size(114, 22);
			this->closeToolStripMenuItem->Text = L"Close";
			// 
			// label_openfile
			// 
			this->label_openfile->AutoSize = true;
			this->label_openfile->Location = System::Drawing::Point(272, 45);
			this->label_openfile->Name = L"label_openfile";
			this->label_openfile->Size = System::Drawing::Size(50, 15);
			this->label_openfile->TabIndex = 4;
			this->label_openfile->Text = L"NewFile";
			// 
			// List_Files
			// 
			this->List_Files->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->List_Files->Location = System::Drawing::Point(0, 64);
			this->List_Files->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->List_Files->Name = L"List_Files";
			this->List_Files->Size = System::Drawing::Size(237, 470);
			this->List_Files->TabIndex = 5;
			this->List_Files->UseCompatibleStateImageBehavior = false;
			this->List_Files->View = System::Windows::Forms::View::List;
			this->List_Files->ItemActivate += gcnew System::EventHandler(this, &MainForm::List_Files_ItemActivate);
			// 
			// menuStrip3
			// 
			this->menuStrip3->BackColor = System::Drawing::SystemColors::Window;
			this->menuStrip3->Dock = System::Windows::Forms::DockStyle::None;
			this->menuStrip3->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->toolsToolStripMenuItem});
			this->menuStrip3->Location = System::Drawing::Point(107, 11);
			this->menuStrip3->Name = L"menuStrip3";
			this->menuStrip3->Padding = System::Windows::Forms::Padding(7, 2, 0, 2);
			this->menuStrip3->Size = System::Drawing::Size(57, 24);
			this->menuStrip3->TabIndex = 6;
			this->menuStrip3->Text = L"menuStrip3";
			// 
			// toolsToolStripMenuItem
			// 
			this->toolsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->openFolderToolStripMenuItem});
			this->toolsToolStripMenuItem->Name = L"toolsToolStripMenuItem";
			this->toolsToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->toolsToolStripMenuItem->Text = L"Tools";
			this->toolsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::toolsToolStripMenuItem_Click);
			// 
			// openFolderToolStripMenuItem
			// 
			this->openFolderToolStripMenuItem->Name = L"openFolderToolStripMenuItem";
			this->openFolderToolStripMenuItem->Size = System::Drawing::Size(136, 22);
			this->openFolderToolStripMenuItem->Text = L"OpenFolder";
			this->openFolderToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::openFolderToolStripMenuItem_Click);
			// 
			// Label_PWD
			// 
			this->Label_PWD->AutoSize = true;
			this->Label_PWD->Location = System::Drawing::Point(14, 562);
			this->Label_PWD->Name = L"Label_PWD";
			this->Label_PWD->Size = System::Drawing::Size(0, 15);
			this->Label_PWD->TabIndex = 7;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(178, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Compile";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// btn_folderup
			// 
			this->btn_folderup->Location = System::Drawing::Point(203, 45);
			this->btn_folderup->Name = L"btn_folderup";
			this->btn_folderup->Size = System::Drawing::Size(34, 23);
			this->btn_folderup->TabIndex = 9;
			this->btn_folderup->Text = L"<-";
			this->btn_folderup->UseVisualStyleBackColor = true;
			this->btn_folderup->Click += gcnew System::EventHandler(this, &MainForm::btn_folderup_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ClientSize = System::Drawing::Size(1306, 588);
			this->Controls->Add(this->btn_folderup);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->Label_PWD);
			this->Controls->Add(this->List_Files);
			this->Controls->Add(this->label_openfile);
			this->Controls->Add(this->EntradaArchivo);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->menuStrip2);
			this->Controls->Add(this->menuStrip3);
			this->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"MainForm";
			this->Text = L"Lightning";
			this->TransparencyKey = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(24)));
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->menuStrip2->ResumeLayout(false);
			this->menuStrip2->PerformLayout();
			this->menuStrip3->ResumeLayout(false);
			this->menuStrip3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	LPCTSTR lpApplicationName;
	lpApplicationName="C:\\Users\\Dr Halsey Romanoff\\Documents\\Visual Studio 2012\\Projects\\IDE\\IDE\\Librarian.exe";
	 STARTUPINFO si;     
			PROCESS_INFORMATION pi;

   // set the size of the structures
   ZeroMemory( &si, sizeof(si) );
   si.cb = sizeof(si);
   ZeroMemory( &pi, sizeof(pi) );

  // start the program up
  CreateProcess( lpApplicationName,   // the path
    ".",			// Command line
    NULL,           // Process handle not inheritable
    NULL,           // Thread handle not inheritable
    FALSE,          // Set handle inheritance to FALSE
    0,              // No creation flags
    NULL,           // Use parent's environment block
    NULL,           // Use parent's starting directory 
    &si,            // Pointer to STARTUPINFO structure
    &pi             // Pointer to PROCESS_INFORMATION structure (removed extra parentheses)
    );
			 }
	private: System::Void copiarToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				EntradaArchivo->Copy();
			 }
private: System::Void fileToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void pasteToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 EntradaArchivo->Paste();
		 }
private: System::Void undoToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 EntradaArchivo->Undo();
		 }
private: System::Void redoToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 EntradaArchivo->Redo();
		 }
private: System::Void menuStrip2_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
		 }
private: System::Void EntradaArchivo_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void archivoToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void saveToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 //Save current EntradaArchivo
			 if(label_openfile->Text=="NewFile.txt")
			 {
			 std::string textdata = msclr::interop::marshal_as<std::string>(EntradaArchivo->Text);
			 std::ofstream out;
			 out.open("NewFile.txt");
			 out << textdata;
			 out.close();
			 }
			 else
			 {
				 std::string textdata = msclr::interop::marshal_as<std::string>(EntradaArchivo->Text);
				 std::ofstream out;
				out.open(msclr::interop::marshal_as<std::string>(label_openfile->Text));
				out << textdata;
				out.close();
			 }
		 }
private: System::Void saveAsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 SaveFileDialog^ saveCurrentFile= gcnew SaveFileDialog; // Instanciate SaveFileDialog
			 saveCurrentFile->InitialDirectory="c:\\";//Give inicial directory
			 saveCurrentFile->Filter="txt file (*.txt)|*.txt|All files (*.*)|*.*";//Set filter array
			 saveCurrentFile->FilterIndex=2;//Select filter
			 saveCurrentFile->RestoreDirectory=true;
			 //If Dialog window an button OK pressed, it means that we can have access to filename 
			 if(saveCurrentFile->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			 {
				 std::string textdata = msclr::interop::marshal_as<std::string>(EntradaArchivo->Text);
				 std::ofstream out;//Instanciate output file stream
				 out.open(msclr::interop::marshal_as<std::string>(saveCurrentFile->FileName
					 ));//Open file selected
				 out << textdata;//Write data from EntradaArchivo
				 out.close();
			 }
	}
private: System::Void openToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
				openFileDialog1->InitialDirectory = "c:\\";
				openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
				openFileDialog1->FilterIndex = 1;
				openFileDialog1->RestoreDirectory = true;
				  if ( openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK )
				  {
					  //Original
						  std::string line;	
						  EntradaArchivo->Text="";
						  //funciòn para convertir un System::String a std::string
						  std::ifstream sourcefile(msclr::interop::marshal_as<std::string>(openFileDialog1->FileName));
						  if (sourcefile.is_open())
						  {
							while ( getline (sourcefile,line) )
							{
								System::String^ aux = gcnew System::String(line.c_str()); 
							  EntradaArchivo->Text += aux+"\n"; //c_str converts std::string to System::String ^
							}
							sourcefile.close();
							label_openfile->Text=openFileDialog1->FileName;
						  }
				  }
		 }


//Event that is triggered when an element of the list_files is doubled clicked
private: System::Void List_Files_ItemActivate(System::Object^  sender, System::EventArgs^  e) { 
				//Get The selected item
				int i = List_Files->SelectedIndices[0];
				//System::String ^path=List_Files->Items[i]->Text	;
				std::string s_path=msclr::interop::marshal_as<std::string>(List_Files->Items[i]->Text);
				//&s_path[0u] is the conversion from string to char*
				if (!SetCurrentDirectory(s_path.c_str()))//If selected item cannot  be accesed asa folder...
				{
					//Then it is not a a folder, therefore, it's a file, therefore
					//We can fill the RichTextBox with it's contents
					FH->FillRichTextBoxFromFile(EntradaArchivo,List_Files->Items[i]->Text,label_openfile);					
					return;	
				}
				else //If we cand cd into that s_path
				{
					//Then it is a folder, therefore
					System::String ^p=Label_PWD->Text +"\\" +List_Files->Items[i]->Text;//Format the folder route
					std::string c_path=msclr::interop::marshal_as<std::string>(p);//Convert to std::string
					FH->FillListFromDirectory(List_Files,&c_path[0u],Label_PWD);//Update File_List
				}
		 }

//Fill the list of files when the From has loaded
private: System::Void MainForm_Load(System::Object^  sender, System::EventArgs^  e) {
			 /*
			 TCHAR Buffer[BUFSIZE];
			 DWORD dwRet;
			 dwRet = GetCurrentDirectory(BUFSIZE, Buffer);
			 char pwd[200];
			 sprintf(pwd, "%d", dwRet);
			 FH->FillListFromDirectory(List_Files,pwd,Label_PWD);
			 */
		 }
		 
private: System::Void toolsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		 }

private: System::Void openFolderToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 FolderBrowserDialog ^fb = gcnew FolderBrowserDialog;
				if(fb->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				{
					std::string s_path=msclr::interop::marshal_as<std::string>(fb->SelectedPath);				
						if (!SetCurrentDirectory(s_path.c_str()))
						MessageBox::Show("Error changing directory");
						
						else
						List_Files->Clear();
						FH->FillListFromDirectory(List_Files, &s_path[0u],Label_PWD);
				}
		 }
private: System::Void selectAllToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 EntradaArchivo->Focus();
			 EntradaArchivo->SelectAll();
		 }
private: System::Void btn_folderup_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(FH->FileExplorerDirectory=="C:")
				 return;

			 if (SetCurrentDirectory(".."))
				{ 
					List_Files->Clear();
					System::String ^aux= FH->FileExplorerDirectory;
					int found=aux->LastIndexOf("\\");
					aux=aux->Substring(0,found);
					FH->FillListFromDirectory(List_Files,&(msclr::interop::marshal_as<std::string>(aux))[0u],Label_PWD);
				}
			 else
			 {
				 MessageBox::Show("Error changing directory");
			 } 

		 }
};
}
