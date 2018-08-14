#pragma once
#include "LogPassword.h"

namespace MetropolHotel {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Сводка для personal
	/// </summary>
	public ref class personal : public System::Windows::Forms::Form
	{
	public:
		String^ Statt;
		personal(void)
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
		~personal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button3;


	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;




	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::GroupBox^  groupBox1;


	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::MaskedTextBox^  textBox1;
	private: System::Windows::Forms::MaskedTextBox^  textBox2;
	private: System::Windows::Forms::MaskedTextBox^  textBox3;
	private: System::Windows::Forms::MaskedTextBox^  textBox4;
	private: System::Windows::Forms::MaskedTextBox^  textBox6;
	private: System::Windows::Forms::MaskedTextBox^  textBox7;
	private: System::Windows::Forms::MaskedTextBox^  textBox5;

	protected: 

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(personal::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->textBox3 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->textBox4 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->textBox6 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->textBox7 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->textBox5 = (gcnew System::Windows::Forms::MaskedTextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ControlLightLight;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(123, 60);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 4;
			this->dataGridView1->Size = System::Drawing::Size(240, 246);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &personal::dataGridView1_MouseClick);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button5->Location = System::Drawing::Point(574, 283);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 50;
			this->button5->Text = L"Відмінити";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &personal::button5_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button3->Location = System::Drawing::Point(493, 283);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 49;
			this->button3->Text = L"Зберегти";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &personal::button3_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Прибиральниця", L"Різноробочий", L"Адміністратор", 
				L"Директор"});
			this->comboBox1->Location = System::Drawing::Point(485, 180);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(164, 21);
			this->comboBox1->TabIndex = 46;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radioButton2);
			this->groupBox2->Controls->Add(this->radioButton1);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->groupBox2->Location = System::Drawing::Point(388, 114);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(261, 58);
			this->groupBox2->TabIndex = 45;
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
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &personal::radioButton2_CheckedChanged);
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
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &personal::radioButton1_CheckedChanged);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(485, 88);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(164, 20);
			this->dateTimePicker1->TabIndex = 44;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(383, 232);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(57, 19);
			this->label8->TabIndex = 38;
			this->label8->Text = L"Адреса";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(384, 206);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(65, 19);
			this->label9->TabIndex = 37;
			this->label9->Text = L"Телефон";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(367, 256);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(112, 19);
			this->label10->TabIndex = 36;
			this->label10->Text = L"Графік роботи";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(383, 178);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(60, 19);
			this->label6->TabIndex = 35;
			this->label6->Text = L"Посада";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(383, 90);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(106, 19);
			this->label4->TabIndex = 34;
			this->label4->Text = L"Дата народж";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(384, 61);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(94, 19);
			this->label3->TabIndex = 33;
			this->label3->Text = L"По-батькові";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(384, 35);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(34, 19);
			this->label2->TabIndex = 32;
			this->label2->Text = L"Ім\'я";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(384, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(73, 19);
			this->label1->TabIndex = 31;
			this->label1->Text = L"Прізвище";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button4->Location = System::Drawing::Point(-1, 238);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(118, 57);
			this->button4->TabIndex = 53;
			this->button4->Text = L"Видалити працівника";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &personal::button4_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button2->Location = System::Drawing::Point(-1, 175);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(118, 57);
			this->button2->TabIndex = 52;
			this->button2->Text = L"Додати нового працівника";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &personal::button2_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Location = System::Drawing::Point(123, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(189, 52);
			this->groupBox1->TabIndex = 51;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Пошук";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 17);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(164, 20);
			this->textBox1->TabIndex = 57;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &personal::textBox1_TextChanged_1);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button6->Location = System::Drawing::Point(412, 283);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 54;
			this->button6->Text = L"Додати";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &personal::button6_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-1, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(118, 170);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 55;
			this->pictureBox1->TabStop = false;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(485, 10);
			this->textBox2->Mask = L">L<\?\?\?\?\?\?\?\?\?\?\?\?\?\?\?\?\?\?\?\?";
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(164, 20);
			this->textBox2->TabIndex = 56;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(485, 36);
			this->textBox3->Mask = L">L<\?\?\?\?\?\?\?\?\?\?\?\?\?\?\?\?\?\?\?\?";
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(164, 20);
			this->textBox3->TabIndex = 57;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(485, 62);
			this->textBox4->Mask = L">L<\?\?\?\?\?\?\?\?\?\?\?\?\?\?\?\?\?\?\?\?";
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(164, 20);
			this->textBox4->TabIndex = 58;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(485, 207);
			this->textBox6->Mask = L"38(999)000-00-00";
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(164, 20);
			this->textBox6->TabIndex = 59;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(485, 233);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(164, 20);
			this->textBox7->TabIndex = 60;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(485, 257);
			this->textBox5->Mask = L">L<L->L<L 00:00-00:00";
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(164, 20);
			this->textBox5->TabIndex = 61;
			// 
			// personal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(664, 311);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->pictureBox1);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(680, 349);
			this->MinimumSize = System::Drawing::Size(680, 349);
			this->Name = L"personal";
			this->ShowInTaskbar = false;
			this->Text = L"Персонал";
			this->Activated += gcnew System::EventHandler(this, &personal::personal_Load);
			this->Load += gcnew System::EventHandler(this, &personal::personal_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void personal_Load(System::Object^  sender, System::EventArgs^  e) {
				  String^ constring=L"datasource=localhost;port=3306;username=root;password=1111";
			  MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
			  MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select workerID as 'ID', concat(workerSurname,' ',substr(workerName,1,1),'.',substr(workerForename,1,1),'.') as 'Прізвише та ініціали',workerPosada as 'Посада' from metropol.worker",conDataBase);
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
				 this->button6->Enabled = false;
			 }
			 catch(Exception^ex){
				 MessageBox::Show(ex->Message);
			 }
			 }
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
			 }
private: System::Void dataGridView1_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 this->button6->Enabled = false;
			 String^ constring=L"datasource=localhost;port=3306;username=root;password=1111";
			  MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
			  MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from metropol.worker where workerID = '"+dataGridView1->CurrentRow->Cells[0]->Value+"';",conDataBase);
			 MySqlDataReader^ myReader;
			  try{
				  conDataBase->Open();
				  myReader=cmdDataBase->ExecuteReader();
				  if(myReader->Read()){
					  String^ Sur = myReader->GetString("workerSurname");
					  textBox2->Text = Sur;
					  String^ SurN = myReader->GetString("workername");
					  textBox3->Text=SurN;
					  String^ ForN = myReader->GetString("workerforename");
					  textBox4->Text=ForN;
					  String^ BD = myReader->GetString("workerBirthdate");
					  dateTimePicker1->Value = DateTime::Parse(BD);
					  if(myReader->GetString("workerStat")=="Чоловіча"){radioButton1->Checked=true;}
					  else {radioButton2->Checked=true;}
					  String^ Doc = myReader->GetString("workerPosada");
					  comboBox1->Text=Doc;
					  String^ Ser = myReader->GetString("workerGraphic");
					  textBox5->Text=Ser;
					  String^ Ph = myReader->GetString("workerPhone");
					  textBox6->Text=Ph;
					  String^ Ad = myReader->GetString("workerAddress");
					  textBox7->Text=Ad; 
				  }
			  }catch(Exception^ex){ MessageBox::Show(ex->Message);}
			  this->button3->Enabled = true;
		 }
private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 Statt = "Жіноча";
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ constring=L"datasource=localhost;port=3306;username=root;password=1111";
			  MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
			  MySqlCommand^ cmdDataBase = gcnew MySqlCommand("delete from metropol.workInNomer where workInNomerWorkerID ='"+dataGridView1->CurrentRow->Cells[0]->Value+"';   delete from metropol.worker where workerID = '"+dataGridView1->CurrentRow->Cells[0]->Value+"';",conDataBase);
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
			  MySqlCommand^ cmdDataBase = gcnew MySqlCommand("update metropol.worker set workerSurname='"+this->textBox2->Text+"', workerName='"
															+this->textBox3->Text+"',workerForename = '"+this->textBox4->Text+"' , workerBirthdate='"+dateTimePicker1->Value.Date.ToString("yyyy-MM-dd")+"', workerStat='"
															+Statt+"',workerPosada='"+this->comboBox1->Text+"', workerGraphic='"+this->textBox5->Text+"',workerPhone='"+this->textBox6->Text+"',workerAddress='"
															+this->textBox7->Text+"' where workerId='"+dataGridView1->CurrentRow->Cells[0]->Value+"';",conDataBase);
			  MySqlDataReader^ myReader;
			  try{
				  conDataBase->Open();
				  myReader=cmdDataBase->ExecuteReader();
				  MessageBox::Show("Збережено!");
				  while(myReader->Read()){
				  }
			  }catch(Exception^ex){ MessageBox::Show(ex->Message);}
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->button3->Enabled = false;
			 this->textBox2->Text = "";
			 this->textBox3->Text = "";
			 this->textBox4->Text = "";
			 this->comboBox1->Text = "";
			 this->textBox5->Text = "";
			 this->textBox6->Text = "";
			this->textBox7->Text = "";
			this->button6->Enabled = true;
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			  String^ constring=L"datasource=localhost;port=3306;username=root;password=1111";
			  MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
			  MySqlCommand^ cmdDataBase = gcnew MySqlCommand("insert into  metropol.worker (workerSurname,workerName,workerForename,workerPosada,workerStat,workerBirthdate,workerAddress,workerPhone,workerGraphic) values('"+this->textBox2->Text+"','"+this->textBox3->Text+"','"+this->textBox4->Text+"','"+this->comboBox1->Text+"','"+Statt+"','"+dateTimePicker1->Value.Date.ToString("yyyy-MM-dd")+"','"+this->textBox7->Text+"','"+this->textBox6->Text+"','"+this->textBox5->Text+"');",conDataBase);
			  MySqlDataReader^ myReader;
			  try{
				  conDataBase->Open();
				  myReader=cmdDataBase->ExecuteReader();
				  MessageBox::Show("Додано!");
			  }catch(Exception^ex){ MessageBox::Show(ex->Message);}
		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 String^ logic = textBox1->Text;
			 String^ constring=L"datasource=localhost;port=3306;username=root;password=1111";
			  MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
			  MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from metropol.worker where workerSurname='"+logic+"' or workerName='"
															+logic+"'or workerStat='"+logic+"'or workerPhone='"+logic+"' or workerPosada='"+logic+"';",conDataBase);
			  try{
				 MySqlDataAdapter ^ sda = gcnew MySqlDataAdapter();
				 sda->SelectCommand = cmdDataBase;
				 DataTable ^ dbdataset = gcnew DataTable();
				 sda->Fill(dbdataset);
				 BindingSource^ bSource = gcnew BindingSource();
				 bSource->DataSource = dbdataset;
				 dataGridView1->DataSource = bSource;
				 sda->Update(dbdataset);
			 }
			 catch(Exception^ex){
				 MessageBox::Show(ex->Message);
			 }
		 }
private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			  Statt = "Чоловіча";
		 }
private: System::Void textBox1_TextChanged_1(System::Object^  sender, System::EventArgs^  e) {
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
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 LogPassword^ f = gcnew LogPassword();
			 f->WorkerIID = dataGridView1->CurrentRow->Cells[0]->Value->ToString();
			 f->ShowDialog();
		 }
};
}
