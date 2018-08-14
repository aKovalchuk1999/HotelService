#pragma once
#include "addClient.h"

namespace MetropolHotel {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Сводка для ClientsList
	/// </summary>
	public ref class ClientsList : public System::Windows::Forms::Form
	{
	public:
		String^ Statt;
		ClientsList(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~ClientsList()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	protected: 

	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label6;

	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;




	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::ComboBox^  comboBox1;



	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::MaskedTextBox^  textBox6;
	private: System::Windows::Forms::MaskedTextBox^  textBox7;
	private: System::Windows::Forms::MaskedTextBox^  textBox5;
	private: System::Windows::Forms::MaskedTextBox^  textBox2;
	private: System::Windows::Forms::MaskedTextBox^  textBox3;
	private: System::Windows::Forms::MaskedTextBox^  textBox4;

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ClientsList::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox6 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->textBox7 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->textBox5 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->textBox2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->textBox3 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->textBox4 = (gcnew System::Windows::Forms::MaskedTextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ControlLightLight;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(3, 114);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 4;
			this->dataGridView1->Size = System::Drawing::Size(168, 247);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &ClientsList::dataGridView1_MouseClick);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(75, 19);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(180, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &ClientsList::textBox1_TextChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->pictureBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Location = System::Drawing::Point(181, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(261, 55);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Пошук";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(14, 13);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(55, 36);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button2->Location = System::Drawing::Point(3, 367);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Додати";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &ClientsList::button2_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button4->Location = System::Drawing::Point(96, 367);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 7;
			this->button4->Text = L"Видалити";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &ClientsList::button4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(177, 68);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(73, 19);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Прізвище";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(177, 94);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(34, 19);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Ім\'я";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(177, 120);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(94, 19);
			this->label3->TabIndex = 10;
			this->label3->Text = L"По-батькові";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(176, 149);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(106, 19);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Дата народж";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(176, 237);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(78, 19);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Документ";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(176, 317);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(57, 19);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Адреса";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(177, 291);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(65, 19);
			this->label9->TabIndex = 15;
			this->label9->Text = L"Телефон";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(177, 264);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(83, 19);
			this->label10->TabIndex = 14;
			this->label10->Text = L"Сер. номер";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(278, 147);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(164, 20);
			this->dateTimePicker1->TabIndex = 22;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radioButton2);
			this->groupBox2->Controls->Add(this->radioButton1);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->groupBox2->Location = System::Drawing::Point(181, 173);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(261, 58);
			this->groupBox2->TabIndex = 23;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Стать";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(139, 25);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(78, 23);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Жіноча";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &ClientsList::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(21, 25);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(88, 23);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Чоловіча";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &ClientsList::radioButton1_CheckedChanged);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(278, 237);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(164, 21);
			this->comboBox1->TabIndex = 24;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button3->Location = System::Drawing::Point(227, 367);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 28;
			this->button3->Text = L"Зберегти";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &ClientsList::button3_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Gray;
			this->button5->Location = System::Drawing::Point(367, 367);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 29;
			this->button5->Text = L"Відмінити";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &ClientsList::button5_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(177, 341);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(66, 19);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Статус";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(275, 346);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 13);
			this->label5->TabIndex = 30;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(21, 8);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(131, 100);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 31;
			this->pictureBox1->TabStop = false;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(278, 290);
			this->textBox6->Mask = L"38(999)000-00-00";
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(164, 20);
			this->textBox6->TabIndex = 32;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(278, 317);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(164, 20);
			this->textBox7->TabIndex = 33;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(278, 263);
			this->textBox5->Mask = L">LL<000000";
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(164, 20);
			this->textBox5->TabIndex = 34;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(278, 69);
			this->textBox2->Mask = L">L<\?\?\?\?\?\?\?\?\?\?\?\?\?\?\?\?\?\?\?\?";
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(164, 20);
			this->textBox2->TabIndex = 35;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(278, 93);
			this->textBox3->Mask = L">L<\?\?\?\?\?\?\?\?\?\?\?\?\?\?\?\?\?\?\?\?";
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(164, 20);
			this->textBox3->TabIndex = 36;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(278, 119);
			this->textBox4->Mask = L">L<\?\?\?\?\?\?\?\?\?\?\?\?\?\?\?\?\?\?\?\?";
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(164, 20);
			this->textBox4->TabIndex = 37;
			// 
			// ClientsList
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(451, 399);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->dataGridView1);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(467, 437);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(467, 437);
			this->Name = L"ClientsList";
			this->Text = L"Клієнти";
			this->Activated += gcnew System::EventHandler(this, &ClientsList::ClientsList_Activated);
			this->Load += gcnew System::EventHandler(this, &ClientsList::ClientsList_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 addClient^ f = gcnew addClient();
				 f->ShowDialog();
			 }
private: System::Void ClientsList_Load(System::Object^  sender, System::EventArgs^  e) {
			 this->button3->Enabled = false;
			 String^ constring=L"datasource=localhost;port=3306;username=root;password=1111";
			  MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
			  MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select clientid as 'ID',concat(clientSurname,' ',substr(clientName,1,1),'.',substr(clientForename,1,1),'.') as 'Клієнти' from metropol.client;",conDataBase);
			  try{
				 MySqlDataAdapter ^ sda = gcnew MySqlDataAdapter();
				 sda->SelectCommand = cmdDataBase;
				 DataTable ^ dbdataset = gcnew DataTable();
				 sda->Fill(dbdataset);
				 BindingSource^ bSource = gcnew BindingSource();
				 bSource->DataSource = dbdataset;
				 dataGridView1->DataSource = bSource;
				 sda->Update(dbdataset);
				 this->dataGridView1->Columns[0]->Visible = false;
			 }
			 catch(Exception^ex){
				 MessageBox::Show(ex->Message);
			 }
		 }
private: System::Void dataGridView1_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			  this->button3->Enabled = true;
			   String^ constring=L"datasource=localhost;port=3306;username=root;password=1111";
			  MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
			  MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from metropol.client where clientID = '"+dataGridView1->CurrentRow->Cells[0]->Value+"';",conDataBase);
			 MySqlDataReader^ myReader;
			  try{
				  conDataBase->Open();
				  myReader=cmdDataBase->ExecuteReader();
				  if(myReader->Read()){
					  String^ Sur = myReader->GetString("clientSurname");
					  textBox2->Text = Sur;
					  String^ SurN = myReader->GetString("clientname");
					  textBox3->Text=SurN;
					  String^ ForN = myReader->GetString("clientforename");
					  textBox4->Text=ForN;
					  String^ BD = myReader->GetString("clientBirthdate");
					  dateTimePicker1->Value = DateTime::Parse(BD);
					  if(myReader->GetString("clientStat")=="Чоловіча"){radioButton1->Checked=true;}
					  else {radioButton2->Checked=true;}
					  String^ Doc = myReader->GetString("clientDocument");
					  comboBox1->Text=Doc;
					  String^ Ser = myReader->GetString("clientSerNumber");
					  textBox5->Text=Ser;
					  String^ Ph = myReader->GetString("clientPhone");
					  textBox6->Text=Ph;
					  String^ Ad = myReader->GetString("clientAddress");
					  textBox7->Text=Ad;
					  String^ ZnK = myReader->GetString("clientStatusID");
					  if(Convert::ToInt32(ZnK)==1){label5->Text="Новий";}
					  else if(Convert::ToInt32(ZnK)==2){label5->Text="Постійний";}
					  else {label5->Text="VIP";}	  
				  }
			  }catch(Exception^ex){ MessageBox::Show(ex->Message);}
		 }
private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 Statt = "Чоловіча";
		 }
private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 Statt = "Жіноча";
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ constring=L"datasource=localhost;port=3306;username=root;password=1111";
			  MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
			  MySqlCommand^ cmdDataBase = gcnew MySqlCommand("delete from metropol.client where clientID = '"+dataGridView1->CurrentRow->Cells[0]->Value+"';",conDataBase);
			  MySqlDataReader^ myReader;
			  try{
				  conDataBase->Open();
				  myReader=cmdDataBase->ExecuteReader();
				  MessageBox::Show("Видалено!");
				  while(myReader->Read()){
				  }
			  }catch(Exception^ex){ MessageBox::Show(ex->Message);}
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ constring=L"datasource=localhost;port=3306;username=root;password=1111";
			  MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
			  MySqlCommand^ cmdDataBase = gcnew MySqlCommand("update metropol.client set clientSurname='"+this->textBox2->Text+"', clientName='"
															+this->textBox3->Text+"',clientForename = '"+this->textBox4->Text+"' , clientBirthdate='"+dateTimePicker1->Value.Date.ToString("yyyy-MM-dd")+"', clientStat='"
															+Statt+"',clientDocument='"+this->comboBox1->Text+"', clientSerNumber='"+this->textBox5->Text+"',clientPhone='"+this->textBox6->Text+"',clientAddress='"
															+this->textBox7->Text+"' where clientId='"+dataGridView1->CurrentRow->Cells[0]->Value+"';",conDataBase);
			  MySqlDataReader^ myReader;
			  try{
				  conDataBase->Open();
				  myReader=cmdDataBase->ExecuteReader();
				  MessageBox::Show("Оновлено");
				  while(myReader->Read()){
				  }
			  }catch(Exception^ex){ MessageBox::Show(ex->Message);}
			  //this->Close();
		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 for (int i = 0; i < dataGridView1->RowCount; i++)
                {
                    dataGridView1->Rows[i]->Selected = false;
                    for (int j = 0; j < dataGridView1->ColumnCount; j++)
                        if (dataGridView1->Rows[i]->Cells[j]->Value != nullptr)
                            if (dataGridView1->Rows[i]->Cells[j]->Value->ToString()->ToLower()->Contains(textBox1->Text->ToLower()))
                            {
                                dataGridView1->Rows[i]->Selected = true;
                                break;
                            }
                }
		 }
private: System::Void ClientsList_Activated(System::Object^  sender, System::EventArgs^  e) {
			  String^ constring=L"datasource=localhost;port=3306;username=root;password=1111";
			  MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
			  MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select clientid as 'ID',concat(clientSurname,' ',substr(clientName,1,1),'.',substr(clientForename,1,1),'.') as 'Клієнти' from metropol.client;",conDataBase);
			  try{
				 MySqlDataAdapter ^ sda = gcnew MySqlDataAdapter();
				 sda->SelectCommand = cmdDataBase;
				 DataTable ^ dbdataset = gcnew DataTable();
				 sda->Fill(dbdataset);
				 BindingSource^ bSource = gcnew BindingSource();
				 bSource->DataSource = dbdataset;
				 dataGridView1->DataSource = bSource;
				 sda->Update(dbdataset);
				 this->dataGridView1->Columns[0]->Visible = false;
			 }
			 catch(Exception^ex){
				 MessageBox::Show(ex->Message);
			 }
		 }
};
}

