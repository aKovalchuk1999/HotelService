#pragma once
#include "addBron.h"
#include "clientPayments.h"
#include "ClientsList.h"
#include "nomerType.h"
#include "eatType.h"
#include "nomerWork.h"
#include "personal.h"
#include "posluga.h"
#include "ClientPosluga.h"
#include "nomerCleaning.h"
#include "paymentArxiv.h"

namespace MetropolHotel {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Printing;

	/// <summary>
	/// Ñâîäêà äëÿ mainMenu
	/// </summary>
	public ref class mainMenu : public System::Windows::Forms::Form
	{
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::ToolStripMenuItem^  ôàéëToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  äîâ³äíèêToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ğîáîòàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ñïèñîêÊë³ºíò³âToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  äğóêToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ïğîÏğîãğàìóToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ñïèñîêÍîìåğ³âToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  òèïèÕàğ÷óâàííÿToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  âèäèĞîá³òÓÍîìåğ³ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ïåğñîíàëToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ïîñëóãèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  çäà÷àáğîíşâàííÿÍîìåğ³âToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ğàõóíêèÊë³ºíò³âToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  êîíòğîëüÑëóæáèÏğèáèğàëüíèöüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ïîñëóãèÊë³ºíòàìToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  àğõ³âToolStripMenuItem;

	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  âèõ³äToolStripMenuItem;


	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton2;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton3;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton4;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton5;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton6;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton7;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;


	private: System::Windows::Forms::ToolStripButton^  toolStripButton9;
	private: System::Windows::Forms::ToolStripButton^  toolStripButton1;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel2;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel3;

	public:
		bool admin1, cleaner1, allWorks1, director1;
	private: System::Drawing::Printing::PrintDocument^  printDocument1;
	public: 
		mainMenu(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~mainMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected: 


	private: System::Windows::Forms::Timer^  timer1;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Òğåáóåòñÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Îáÿçàòåëüíûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà - íå èçìåíÿéòå
		/// ñîäåğæèìîå äàííîãî ìåòîäà ïğè ïîìîùè ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(mainMenu::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ôàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âèõ³äToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->äîâ³äíèêToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñïèñîêÊë³ºíò³âToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñïèñîêÍîìåğ³âToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->òèïèÕàğ÷óâàííÿToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âèäèĞîá³òÓÍîìåğ³ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïåğñîíàëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïîñëóãèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ğîáîòàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çäà÷àáğîíşâàííÿÍîìåğ³âToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ğàõóíêèÊë³ºíò³âToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->êîíòğîëüÑëóæáèÏğèáèğàëüíèöüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïîñëóãèÊë³ºíòàìToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->äğóêToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->àğõ³âToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïğîÏğîãğàìóToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton3 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton4 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton5 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton6 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton7 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButton9 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel2 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel3 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->statusStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 24);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(180, 299);
			this->panel1->TabIndex = 0;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button4->Location = System::Drawing::Point(12, 231);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(155, 48);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Ïîñëóãè ";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &mainMenu::ïîñëóãèÊë³ºíòàìToolStripMenuItem_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button3->Location = System::Drawing::Point(12, 177);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(155, 48);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Êîíòğîëü ñëóæáè ïğèáèğàëüíèöü";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &mainMenu::êîíòğîëüÑëóæáèÏğèáèğàëüíèöüToolStripMenuItem_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button2->Location = System::Drawing::Point(12, 123);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(155, 48);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Ğàõóíêè";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &mainMenu::ğàõóíêèÊë³ºíò³âToolStripMenuItem_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button1->Location = System::Drawing::Point(12, 69);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(155, 48);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Çäà÷à/Áğîíşâàííÿ íîìåğ³â";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &mainMenu::çäà÷àáğîíşâàííÿÍîìåğ³âToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 20.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(155, 33);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Ãîëîâíå ìåíş";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Left;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(180, 299);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &mainMenu::timer1_Tick);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->ôàéëToolStripMenuItem, 
				this->äîâ³äíèêToolStripMenuItem, this->ğîáîòàToolStripMenuItem, this->äğóêToolStripMenuItem, this->ïğîÏğîãğàìóToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(699, 24);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ôàéëToolStripMenuItem
			// 
			this->ôàéëToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->âèõ³äToolStripMenuItem});
			this->ôàéëToolStripMenuItem->Name = L"ôàéëToolStripMenuItem";
			this->ôàéëToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->ôàéëToolStripMenuItem->Text = L"Ôàéë";
			// 
			// âèõ³äToolStripMenuItem
			// 
			this->âèõ³äToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"âèõ³äToolStripMenuItem.Image")));
			this->âèõ³äToolStripMenuItem->Name = L"âèõ³äToolStripMenuItem";
			this->âèõ³äToolStripMenuItem->Size = System::Drawing::Size(102, 22);
			this->âèõ³äToolStripMenuItem->Text = L"Âèõ³ä";
			this->âèõ³äToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainMenu::âèõ³äToolStripMenuItem_Click);
			// 
			// äîâ³äíèêToolStripMenuItem
			// 
			this->äîâ³äíèêToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {this->ñïèñîêÊë³ºíò³âToolStripMenuItem, 
				this->ñïèñîêÍîìåğ³âToolStripMenuItem, this->òèïèÕàğ÷óâàííÿToolStripMenuItem, this->âèäèĞîá³òÓÍîìåğ³ToolStripMenuItem, this->ïåğñîíàëToolStripMenuItem, 
				this->ïîñëóãèToolStripMenuItem});
			this->äîâ³äíèêToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"äîâ³äíèêToolStripMenuItem.Image")));
			this->äîâ³äíèêToolStripMenuItem->Name = L"äîâ³äíèêToolStripMenuItem";
			this->äîâ³äíèêToolStripMenuItem->Size = System::Drawing::Size(85, 20);
			this->äîâ³äíèêToolStripMenuItem->Text = L"Äîâ³äíèê";
			// 
			// ñïèñîêÊë³ºíò³âToolStripMenuItem
			// 
			this->ñïèñîêÊë³ºíò³âToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ñïèñîêÊë³ºíò³âToolStripMenuItem.Image")));
			this->ñïèñîêÊë³ºíò³âToolStripMenuItem->Name = L"ñïèñîêÊë³ºíò³âToolStripMenuItem";
			this->ñïèñîêÊë³ºíò³âToolStripMenuItem->Size = System::Drawing::Size(184, 22);
			this->ñïèñîêÊë³ºíò³âToolStripMenuItem->Text = L"Ñïèñîê êë³ºíò³â";
			this->ñïèñîêÊë³ºíò³âToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainMenu::ñïèñîêÊë³ºíò³âToolStripMenuItem_Click);
			// 
			// ñïèñîêÍîìåğ³âToolStripMenuItem
			// 
			this->ñïèñîêÍîìåğ³âToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ñïèñîêÍîìåğ³âToolStripMenuItem.Image")));
			this->ñïèñîêÍîìåğ³âToolStripMenuItem->Name = L"ñïèñîêÍîìåğ³âToolStripMenuItem";
			this->ñïèñîêÍîìåğ³âToolStripMenuItem->Size = System::Drawing::Size(184, 22);
			this->ñïèñîêÍîìåğ³âToolStripMenuItem->Text = L"Ñïèñîê íîìåğ³â";
			this->ñïèñîêÍîìåğ³âToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainMenu::ñïèñîêÍîìåğ³âToolStripMenuItem_Click);
			// 
			// òèïèÕàğ÷óâàííÿToolStripMenuItem
			// 
			this->òèïèÕàğ÷óâàííÿToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"òèïèÕàğ÷óâàííÿToolStripMenuItem.Image")));
			this->òèïèÕàğ÷óâàííÿToolStripMenuItem->Name = L"òèïèÕàğ÷óâàííÿToolStripMenuItem";
			this->òèïèÕàğ÷óâàííÿToolStripMenuItem->Size = System::Drawing::Size(184, 22);
			this->òèïèÕàğ÷óâàííÿToolStripMenuItem->Text = L"Òèïè õàğ÷óâàííÿ";
			this->òèïèÕàğ÷óâàííÿToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainMenu::òèïèÕàğ÷óâàííÿToolStripMenuItem_Click);
			// 
			// âèäèĞîá³òÓÍîìåğ³ToolStripMenuItem
			// 
			this->âèäèĞîá³òÓÍîìåğ³ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"âèäèĞîá³òÓÍîìåğ³ToolStripMenuItem.Image")));
			this->âèäèĞîá³òÓÍîìåğ³ToolStripMenuItem->Name = L"âèäèĞîá³òÓÍîìåğ³ToolStripMenuItem";
			this->âèäèĞîá³òÓÍîìåğ³ToolStripMenuItem->Size = System::Drawing::Size(184, 22);
			this->âèäèĞîá³òÓÍîìåğ³ToolStripMenuItem->Text = L"Âèäè ğîá³ò ó íîìåğ³";
			this->âèäèĞîá³òÓÍîìåğ³ToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainMenu::âèäèĞîá³òÓÍîìåğ³ToolStripMenuItem_Click);
			// 
			// ïåğñîíàëToolStripMenuItem
			// 
			this->ïåğñîíàëToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ïåğñîíàëToolStripMenuItem.Image")));
			this->ïåğñîíàëToolStripMenuItem->Name = L"ïåğñîíàëToolStripMenuItem";
			this->ïåğñîíàëToolStripMenuItem->Size = System::Drawing::Size(184, 22);
			this->ïåğñîíàëToolStripMenuItem->Text = L"Ïåğñîíàë";
			this->ïåğñîíàëToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainMenu::ïåğñîíàëToolStripMenuItem_Click_1);
			// 
			// ïîñëóãèToolStripMenuItem
			// 
			this->ïîñëóãèToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ïîñëóãèToolStripMenuItem.Image")));
			this->ïîñëóãèToolStripMenuItem->Name = L"ïîñëóãèToolStripMenuItem";
			this->ïîñëóãèToolStripMenuItem->Size = System::Drawing::Size(184, 22);
			this->ïîñëóãèToolStripMenuItem->Text = L"Ïîñëóãè";
			this->ïîñëóãèToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainMenu::ïîñëóãèToolStripMenuItem_Click);
			// 
			// ğîáîòàToolStripMenuItem
			// 
			this->ğîáîòàToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->çäà÷àáğîíşâàííÿÍîìåğ³âToolStripMenuItem, 
				this->ğàõóíêèÊë³ºíò³âToolStripMenuItem, this->êîíòğîëüÑëóæáèÏğèáèğàëüíèöüToolStripMenuItem, this->ïîñëóãèÊë³ºíòàìToolStripMenuItem});
			this->ğîáîòàToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ğîáîòàToolStripMenuItem.Image")));
			this->ğîáîòàToolStripMenuItem->Name = L"ğîáîòàToolStripMenuItem";
			this->ğîáîòàToolStripMenuItem->Size = System::Drawing::Size(74, 20);
			this->ğîáîòàToolStripMenuItem->Text = L"Ğîáîòà";
			// 
			// çäà÷àáğîíşâàííÿÍîìåğ³âToolStripMenuItem
			// 
			this->çäà÷àáğîíşâàííÿÍîìåğ³âToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"çäà÷àáğîíşâàííÿÍîìåğ³âToolStripMenuItem.Image")));
			this->çäà÷àáğîíşâàííÿÍîìåğ³âToolStripMenuItem->Name = L"çäà÷àáğîíşâàííÿÍîìåğ³âToolStripMenuItem";
			this->çäà÷àáğîíşâàííÿÍîìåğ³âToolStripMenuItem->Size = System::Drawing::Size(263, 22);
			this->çäà÷àáğîíşâàííÿÍîìåğ³âToolStripMenuItem->Text = L"Çäà÷à/áğîíşâàííÿ íîìåğ³â";
			this->çäà÷àáğîíşâàííÿÍîìåğ³âToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainMenu::çäà÷àáğîíşâàííÿÍîìåğ³âToolStripMenuItem_Click);
			// 
			// ğàõóíêèÊë³ºíò³âToolStripMenuItem
			// 
			this->ğàõóíêèÊë³ºíò³âToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ğàõóíêèÊë³ºíò³âToolStripMenuItem.Image")));
			this->ğàõóíêèÊë³ºíò³âToolStripMenuItem->Name = L"ğàõóíêèÊë³ºíò³âToolStripMenuItem";
			this->ğàõóíêèÊë³ºíò³âToolStripMenuItem->Size = System::Drawing::Size(263, 22);
			this->ğàõóíêèÊë³ºíò³âToolStripMenuItem->Text = L"Ğàõóíêè êë³ºíò³â";
			this->ğàõóíêèÊë³ºíò³âToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainMenu::ğàõóíêèÊë³ºíò³âToolStripMenuItem_Click);
			// 
			// êîíòğîëüÑëóæáèÏğèáèğàëüíèöüToolStripMenuItem
			// 
			this->êîíòğîëüÑëóæáèÏğèáèğàëüíèöüToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"êîíòğîëüÑëóæáèÏğèáèğàëüíèöüToolStripMenuItem.Image")));
			this->êîíòğîëüÑëóæáèÏğèáèğàëüíèöüToolStripMenuItem->Name = L"êîíòğîëüÑëóæáèÏğèáèğàëüíèöüToolStripMenuItem";
			this->êîíòğîëüÑëóæáèÏğèáèğàëüíèöüToolStripMenuItem->Size = System::Drawing::Size(263, 22);
			this->êîíòğîëüÑëóæáèÏğèáèğàëüíèöüToolStripMenuItem->Text = L"Êîíòğîëü ñëóæáè ïğèáèğàëüíèöü";
			this->êîíòğîëüÑëóæáèÏğèáèğàëüíèöüToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainMenu::êîíòğîëüÑëóæáèÏğèáèğàëüíèöüToolStripMenuItem_Click);
			// 
			// ïîñëóãèÊë³ºíòàìToolStripMenuItem
			// 
			this->ïîñëóãèÊë³ºíòàìToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ïîñëóãèÊë³ºíòàìToolStripMenuItem.Image")));
			this->ïîñëóãèÊë³ºíòàìToolStripMenuItem->Name = L"ïîñëóãèÊë³ºíòàìToolStripMenuItem";
			this->ïîñëóãèÊë³ºíòàìToolStripMenuItem->Size = System::Drawing::Size(263, 22);
			this->ïîñëóãèÊë³ºíòàìToolStripMenuItem->Text = L"Ïîñëóãè êë³ºíòàì";
			this->ïîñëóãèÊë³ºíòàìToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainMenu::ïîñëóãèÊë³ºíòàìToolStripMenuItem_Click);
			// 
			// äğóêToolStripMenuItem
			// 
			this->äğóêToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->àğõ³âToolStripMenuItem});
			this->äğóêToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"äğóêToolStripMenuItem.Image")));
			this->äğóêToolStripMenuItem->Name = L"äğóêToolStripMenuItem";
			this->äğóêToolStripMenuItem->Size = System::Drawing::Size(62, 20);
			this->äğóêToolStripMenuItem->Text = L"Äğóê";
			// 
			// àğõ³âToolStripMenuItem
			// 
			this->àğõ³âToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"àğõ³âToolStripMenuItem.Image")));
			this->àğõ³âToolStripMenuItem->Name = L"àğõ³âToolStripMenuItem";
			this->àğõ³âToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->àğõ³âToolStripMenuItem->Text = L"Àğõ³â";
			this->àğõ³âToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainMenu::àğõ³âToolStripMenuItem_Click);
			// 
			// ïğîÏğîãğàìóToolStripMenuItem
			// 
			this->ïğîÏğîãğàìóToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ïğîÏğîãğàìóToolStripMenuItem.Image")));
			this->ïğîÏğîãğàìóToolStripMenuItem->Name = L"ïğîÏğîãğàìóToolStripMenuItem";
			this->ïğîÏğîãğàìóToolStripMenuItem->Size = System::Drawing::Size(115, 20);
			this->ïğîÏğîãğàìóToolStripMenuItem->Text = L"Ïğî ïğîãğàìó";
			this->ïğîÏğîãğàìóToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainMenu::ïğîÏğîãğàìóToolStripMenuItem_Click);
			// 
			// toolStrip1
			// 
			this->toolStrip1->BackColor = System::Drawing::Color::White;
			this->toolStrip1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStrip1.BackgroundImage")));
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(9) {this->toolStripButton2, 
				this->toolStripButton3, this->toolStripButton4, this->toolStripButton5, this->toolStripButton6, this->toolStripButton7, this->toolStripSeparator1, 
				this->toolStripButton9, this->toolStripButton1});
			this->toolStrip1->Location = System::Drawing::Point(180, 24);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(519, 25);
			this->toolStrip1->TabIndex = 3;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripButton2
			// 
			this->toolStripButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton2.Image")));
			this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton2->Name = L"toolStripButton2";
			this->toolStripButton2->Size = System::Drawing::Size(23, 22);
			this->toolStripButton2->Text = L"Êë³ºíòè";
			this->toolStripButton2->Click += gcnew System::EventHandler(this, &mainMenu::ñïèñîêÊë³ºíò³âToolStripMenuItem_Click);
			// 
			// toolStripButton3
			// 
			this->toolStripButton3->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton3.Image")));
			this->toolStripButton3->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton3->Name = L"toolStripButton3";
			this->toolStripButton3->Size = System::Drawing::Size(23, 22);
			this->toolStripButton3->Text = L"Ñïèñîó íîìåğ³â";
			this->toolStripButton3->Click += gcnew System::EventHandler(this, &mainMenu::ñïèñîêÍîìåğ³âToolStripMenuItem_Click);
			// 
			// toolStripButton4
			// 
			this->toolStripButton4->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton4.Image")));
			this->toolStripButton4->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton4->Name = L"toolStripButton4";
			this->toolStripButton4->Size = System::Drawing::Size(23, 22);
			this->toolStripButton4->Text = L"Õàğ÷óâàííÿ";
			this->toolStripButton4->Click += gcnew System::EventHandler(this, &mainMenu::òèïèÕàğ÷óâàííÿToolStripMenuItem_Click);
			// 
			// toolStripButton5
			// 
			this->toolStripButton5->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton5.Image")));
			this->toolStripButton5->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton5->Name = L"toolStripButton5";
			this->toolStripButton5->Size = System::Drawing::Size(23, 22);
			this->toolStripButton5->Text = L"Ğîáîòè ó íîìåğ³";
			this->toolStripButton5->Click += gcnew System::EventHandler(this, &mainMenu::âèäèĞîá³òÓÍîìåğ³ToolStripMenuItem_Click);
			// 
			// toolStripButton6
			// 
			this->toolStripButton6->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton6->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton6.Image")));
			this->toolStripButton6->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton6->Name = L"toolStripButton6";
			this->toolStripButton6->Size = System::Drawing::Size(23, 22);
			this->toolStripButton6->Text = L"Ïåğñîíàë";
			this->toolStripButton6->Click += gcnew System::EventHandler(this, &mainMenu::ïåğñîíàëToolStripMenuItem_Click_1);
			// 
			// toolStripButton7
			// 
			this->toolStripButton7->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton7->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton7.Image")));
			this->toolStripButton7->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton7->Name = L"toolStripButton7";
			this->toolStripButton7->Size = System::Drawing::Size(23, 22);
			this->toolStripButton7->Text = L"Ïîñëóãè";
			this->toolStripButton7->Click += gcnew System::EventHandler(this, &mainMenu::ïîñëóãèToolStripMenuItem_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->toolStripSeparator1->ForeColor = System::Drawing::Color::Black;
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(6, 25);
			// 
			// toolStripButton9
			// 
			this->toolStripButton9->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton9->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton9.Image")));
			this->toolStripButton9->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton9->Name = L"toolStripButton9";
			this->toolStripButton9->Size = System::Drawing::Size(23, 22);
			this->toolStripButton9->Text = L"Àğõ³â ïëàòåæ³â";
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(55, 22);
			this->toolStripButton1->Text = L"Âèõ³ä";
			this->toolStripButton1->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &mainMenu::toolStripButton1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(180, 49);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(519, 274);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 4;
			this->pictureBox2->TabStop = false;
			// 
			// statusStrip1
			// 
			this->statusStrip1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->toolStripStatusLabel1, 
				this->toolStripStatusLabel2, this->toolStripStatusLabel3});
			this->statusStrip1->Location = System::Drawing::Point(180, 301);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(519, 22);
			this->statusStrip1->TabIndex = 5;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(131, 17);
			this->toolStripStatusLabel1->Text = L"Ïîòî÷íèé ÷àñ òà äàòà: ";
			// 
			// toolStripStatusLabel2
			// 
			this->toolStripStatusLabel2->ActiveLinkColor = System::Drawing::Color::White;
			this->toolStripStatusLabel2->Name = L"toolStripStatusLabel2";
			this->toolStripStatusLabel2->Size = System::Drawing::Size(38, 17);
			this->toolStripStatusLabel2->Text = L"[date]";
			// 
			// toolStripStatusLabel3
			// 
			this->toolStripStatusLabel3->Name = L"toolStripStatusLabel3";
			this->toolStripStatusLabel3->Size = System::Drawing::Size(39, 17);
			this->toolStripStatusLabel3->Text = L"[time]";
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &mainMenu::printDocument1_PrintPage);
			// 
			// mainMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(699, 323);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(715, 361);
			this->MinimumSize = System::Drawing::Size(715, 361);
			this->Name = L"mainMenu";
			this->Text = L"Ãîëîâíà ñòîğ³íêà";
			this->Load += gcnew System::EventHandler(this, &mainMenu::mainMenu_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void toolStripButton1_Click(System::Object^  sender, System::EventArgs^  e) {
				 Application::Exit();
		 }
private: System::Void âèõ³äToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
		 }

private: System::Void çäà÷àáğîíşâàííÿÍîìåğ³âToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 addBron^ f = gcnew addBron();
			 f->ShowDialog();
		 }

private: System::Void ğàõóíêèÊë³ºíò³âToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 clientPayments^ f = gcnew clientPayments();
			 f->ShowDialog();
		 }

private: System::Void êîíòğîëüÑëóæáèÏğèáèğàëüíèöüToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 nomerCleaning^ f = gcnew nomerCleaning();
			 f->ShowDialog();
		 }
private: System::Void ïîñëóãèÊë³ºíòàìToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 ClientPosluga^ f = gcnew ClientPosluga();
			 f->ShowDialog();
		 }
private: System::Void ñïèñîêÊë³ºíò³âToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 ClientsList^ f = gcnew ClientsList();
			 f->ShowDialog();
		 }
private: System::Void ñïèñîêÍîìåğ³âToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 nomerType^ f = gcnew nomerType();
			 f->ShowDialog();
		 }
private: System::Void òèïèÕàğ÷óâàííÿToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 eatType^ f = gcnew eatType();
			 f->ShowDialog();
		 }
private: System::Void âèäèĞîá³òÓÍîìåğ³ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 nomerWork^ f = gcnew nomerWork();
			 f->ShowDialog();
		 }
private: System::Void ïåğñîíàëToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 personal^ f = gcnew personal();
			 f->ShowDialog();
			 }

private: System::Void ïåğñîíàëToolStripMenuItem_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 personal^ f = gcnew personal();
			 f->ShowDialog();
				  }
private: System::Void ïîñëóãèToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 posluga^ f = gcnew posluga();
			 f->ShowDialog();
		 }
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			  toolStripStatusLabel2->Text = DateTime::Now.ToLongTimeString();
				 toolStripStatusLabel3->Text = DateTime::Now.ToLongDateString();
		 }
private: System::Void mainMenu_Load(System::Object^  sender, System::EventArgs^  e) {
			 if(cleaner1){this->äîâ³äíèêToolStripMenuItem->Enabled = false;}
		 }
private: System::Void àğõ³âToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 paymentArxiv ^f = gcnew paymentArxiv();
			 printDocument1->Print();
		 }
private: System::Void printDocument1_PrintPage(System::Object^  sender, System::Drawing::Printing::PrintPageEventArgs^  e) {
			 paymentArxiv ^f = gcnew paymentArxiv();
			 f->ShowDialog(); 
			 Bitmap^ bmp = gcnew Bitmap (f->dataGridView1->Size.Width, f->dataGridView1->Size.Height);
             f->dataGridView1->DrawToBitmap (bmp, f->dataGridView1->Bounds);
			 e->Graphics->DrawImage (bmp, 10, 10);		
		 }
private: System::Void ïğîÏğîãğàìóToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("Êóğñîâèé ïğîåêò\nÊîâàëü÷óê À.².\n31 æîâòíÿ 2017ğ.");
		 }
};
}
