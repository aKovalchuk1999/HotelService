#pragma once
#include "addRequest.h"

namespace MetropolHotel {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;


	/// <summary>
	/// Сводка для addBron
	/// </summary>
	public ref class addBron : public System::Windows::Forms::Form
	{
	public:
		addBron(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~addBron()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button3;
	protected: 


	private: System::Windows::Forms::CheckBox^  checkBox5;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::CheckBox^  checkBox6;



	private: System::Windows::Forms::CheckBox^  checkBox4;

	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker2;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::DataGridView^  dataGridView2;


	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;

	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::CheckBox^  checkBox3;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(addBron::typeid));
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Silver;
			this->button3->Location = System::Drawing::Point(896, 246);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(76, 23);
			this->button3->TabIndex = 14;
			this->button3->Text = L" Вихід";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &addBron::button3_Click);
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->checkBox5->Location = System::Drawing::Point(134, 104);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(57, 19);
			this->checkBox5->TabIndex = 7;
			this->checkBox5->Text = L"Здача";
			this->checkBox5->UseVisualStyleBackColor = true;
			this->checkBox5->Click += gcnew System::EventHandler(this, &addBron::checkBox5_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::DisplayedCells;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ControlLightLight;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(228, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 4;
			this->dataGridView1->Size = System::Drawing::Size(492, 257);
			this->dataGridView1->TabIndex = 9;
			this->dataGridView1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &addBron::dataGridView1_MouseClick);
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->checkBox6->Location = System::Drawing::Point(134, 78);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(60, 19);
			this->checkBox6->TabIndex = 6;
			this->checkBox6->Text = L"Бронь";
			this->checkBox6->UseVisualStyleBackColor = true;
			this->checkBox6->CheckedChanged += gcnew System::EventHandler(this, &addBron::checkBox6_Click);
			this->checkBox6->Click += gcnew System::EventHandler(this, &addBron::checkBox6_Click);
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->checkBox4->Location = System::Drawing::Point(11, 81);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(70, 19);
			this->checkBox4->TabIndex = 4;
			this->checkBox4->Text = L"Активні";
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &addBron::checkBox4_CheckedChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->checkBox3);
			this->groupBox1->Controls->Add(this->checkBox5);
			this->groupBox1->Controls->Add(this->checkBox6);
			this->groupBox1->Controls->Add(this->checkBox4);
			this->groupBox1->Controls->Add(this->dateTimePicker2);
			this->groupBox1->Controls->Add(this->dateTimePicker1);
			this->groupBox1->Controls->Add(this->checkBox2);
			this->groupBox1->Controls->Add(this->checkBox1);
			this->groupBox1->Location = System::Drawing::Point(12, 129);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(210, 140);
			this->groupBox1->TabIndex = 11;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Швидкий пошук";
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->checkBox3->Location = System::Drawing::Point(11, 104);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(123, 19);
			this->checkBox3->TabIndex = 8;
			this->checkBox3->Text = L"Звільнені номери";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->Click += gcnew System::EventHandler(this, &addBron::checkBox3_Click);
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point(48, 55);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(154, 20);
			this->dateTimePicker2->TabIndex = 3;
			this->dateTimePicker2->ValueChanged += gcnew System::EventHandler(this, &addBron::checkBox2_CheckedChanged);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(48, 23);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(154, 20);
			this->dateTimePicker1->TabIndex = 2;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &addBron::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->checkBox2->Location = System::Drawing::Point(11, 55);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(42, 19);
			this->checkBox2->TabIndex = 1;
			this->checkBox2->Text = L"По";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &addBron::checkBox2_CheckedChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->checkBox1->Location = System::Drawing::Point(11, 23);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(33, 19);
			this->checkBox1->TabIndex = 0;
			this->checkBox1->Text = L"З";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &addBron::checkBox1_CheckedChanged);
			// 
			// dataGridView2
			// 
			this->dataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::ControlLightLight;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(726, 12);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 4;
			this->dataGridView2->Size = System::Drawing::Size(246, 105);
			this->dataGridView2->TabIndex = 10;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button7.BackgroundImage")));
			this->button7->ForeColor = System::Drawing::Color::Maroon;
			this->button7->Location = System::Drawing::Point(788, 152);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(143, 52);
			this->button7->TabIndex = 18;
			this->button7->Text = L"Оформити заявку";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &addBron::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button8->ForeColor = System::Drawing::Color::GreenYellow;
			this->button8->Location = System::Drawing::Point(789, 210);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(142, 23);
			this->button8->TabIndex = 19;
			this->button8->Text = L"Видалити заявку";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &addBron::button8_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::White;
			this->button10->Location = System::Drawing::Point(828, 246);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(62, 23);
			this->button10->TabIndex = 21;
			this->button10->Text = L"Оновити";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &addBron::button10_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button1->Location = System::Drawing::Point(726, 246);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(96, 23);
			this->button1->TabIndex = 22;
			this->button1->Text = L"Оплата номера";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &addBron::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button2->Location = System::Drawing::Point(726, 123);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(177, 23);
			this->button2->TabIndex = 23;
			this->button2->Text = L"Вибрати клієнта і харчування";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &addBron::button2_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button4->Location = System::Drawing::Point(909, 123);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(63, 23);
			this->button4->TabIndex = 24;
			this->button4->Text = L"Видалити";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &addBron::button4_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(202, 111);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 25;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(727, 202);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(56, 50);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 26;
			this->pictureBox2->TabStop = false;
			// 
			// addBron
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(985, 284);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->dataGridView2);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(1001, 322);
			this->MinimumSize = System::Drawing::Size(1001, 322);
			this->Name = L"addBron";
			this->Text = L"Здача/Бронювання номерів";
			this->Activated += gcnew System::EventHandler(this, &addBron::addBron_Load);
			this->Load += gcnew System::EventHandler(this, &addBron::addBron_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
private: void Color(void){
		 for (int i = 0; i < dataGridView1->RowCount; i++)
                {
                    for (int j = 0; j < dataGridView1->ColumnCount; j++)
                        if (dataGridView1->Rows[i]->Cells[j]->Value != nullptr){
                            if (dataGridView1->Rows[i]->Cells[j]->Value->ToString()->Contains("NO"))
                            {
                                dataGridView1->Rows[i]->DefaultCellStyle->BackColor = Color::Tomato;
                                break;
                            }
							if (dataGridView1->Rows[i]->Cells[j]->Value->ToString()->Contains("YES"))
                            {
                                dataGridView1->Rows[i]->DefaultCellStyle->BackColor = Color::LawnGreen;
                                break;
                            }
						}
                }
		 }
private: void Update(){
			 String^ constring=L"datasource=localhost;port=3306;username=root;password=1111";
			  MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
			MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select nomerZdachaID as'ID', nomerZdachaDateFrom as'Дата з',nomerZdachaDateTo as'Дата По',nomerZdachaBron as 'Бронь',nomerTypePrice as'Ціна',nomerRoom as'Номер',(DATEDIFF(nomerZdachaDateFrom,nomerZdachaDateTo)*(-1)) as 'Дні',((DATEDIFF(nomerZdachaDateFrom,nomerZdachaDateTo)*(-1))*nomerTypePrice) as 'Заг.ціна', nomerZdachaPeoples as 'К-сть осіб', nomerZdachaPayment as 'Оплачено' from metropol.nomer,metropol.nomerType, metropol.nomerZdacha where nomerID = nomerZdachaNomerID and nomerTypeID = nomerNomerTypeID;",conDataBase);
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
			 Color();
			 this->button2->Enabled = false;
			 this->button4->Enabled = false;
		 }

private: void ClientInNomer(void){
		  String^ constring=L"datasource=localhost;port=3306;username=root;password=1111";
			  MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
			  MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select clientInNomerID as 'ID',concat(clientSurname,' ',substr(clientName,1,1),'.',substr(clientForename,1,1),'.') as 'Клієнти', eatType as 'Харчування',clientID from metropol.clientInNomer inner join metropol.client on clientID = clientInNomerClientID inner join metropol.nomerZdacha on nomerZdachaID = clientInNomerNomerZdachaID and nomerZdachaID = '"+dataGridView1->CurrentRow->Cells[0]->Value+"' inner join metropol.eat on eatID = clientInNomerEatID;",conDataBase);
			  try{
				 MySqlDataAdapter ^ sda = gcnew MySqlDataAdapter();
				 sda->SelectCommand = cmdDataBase;
				 DataTable ^ dbdataset = gcnew DataTable();
				 sda->Fill(dbdataset);
				 BindingSource^ bSource = gcnew BindingSource();
				 bSource->DataSource = dbdataset;
				 dataGridView2->DataSource = bSource;
				 sda->Update(dbdataset);
				 this->dataGridView2->Columns[0]->Visible = false;
				 this->dataGridView2->Columns[3]->Visible = false;
			 }
			 catch(Exception^ex){
				 MessageBox::Show(ex->Message);
			 }
			 this->button2->Enabled = true;
			 this->button4->Enabled = true;
		 }
private: System::Void dataGridView1_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 ClientInNomer();
		 }
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 String^ constring=L"datasource=localhost;port=3306;username=root;password=1111";
			  MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
			  MySqlCommand^ cmdDataBase;
			  if((checkBox1->Checked==true) && (checkBox2->Checked==true)){
				   this->checkBox6->Enabled = false;
				    this->checkBox3->Enabled = false;
					 this->checkBox4->Enabled = false;
					  this->checkBox5->Enabled = false;
				  cmdDataBase = gcnew MySqlCommand("select nomerZdachaID as'ID', nomerZdachaDateFrom as'Дата з',nomerZdachaDateTo as'Дата По',nomerZdachaBron as 'Бронь',nomerTypePrice as'Ціна',nomerRoom as'Номер',(DATEDIFF(nomerZdachaDateFrom,nomerZdachaDateTo)*(-1)) as 'Дні',((DATEDIFF(nomerZdachaDateFrom,nomerZdachaDateTo)*(-1))*nomerTypePrice) as 'Заг.ціна', nomerZdachaPeoples as 'К-сть осіб', nomerZdachaPayment as 'Оплачено' from metropol.nomer,metropol.nomerType, metropol.nomerZdacha where nomerID = nomerZdachaNomerID and nomerTypeID = nomerNomerTypeID and nomerZdachaDateFrom between '"+dateTimePicker1->Value.ToString("yyyy-MM-dd")+"' and '"+dateTimePicker2->Value.ToString("yyyy-MM-dd")+"' ;",conDataBase);}
			 else if((checkBox1->Checked==true) && (checkBox2->Checked==false)){
				  this->checkBox6->Enabled = false;
				    this->checkBox3->Enabled = false;
					 this->checkBox4->Enabled = false;
					  this->checkBox5->Enabled = false;
				 cmdDataBase = gcnew MySqlCommand("select nomerZdachaID as'ID', nomerZdachaDateFrom as'Дата з',nomerZdachaDateTo as'Дата По',nomerZdachaBron as 'Бронь',nomerTypePrice as'Ціна',nomerRoom as'Номер',(DATEDIFF(nomerZdachaDateFrom,nomerZdachaDateTo)*(-1)) as 'Дні',((DATEDIFF(nomerZdachaDateFrom,nomerZdachaDateTo)*(-1))*nomerTypePrice) as 'Заг.ціна', nomerZdachaPeoples as 'К-сть осіб', nomerZdachaPayment as 'Оплачено' from metropol.nomer,metropol.nomerType, metropol.nomerZdacha where nomerID = nomerZdachaNomerID and nomerTypeID = nomerNomerTypeID and nomerZdachaDateFrom between '"+dateTimePicker1->Value.ToString("yyyy-MM-dd")+"' and Date(now());",conDataBase);}
			 else {
				 this->checkBox6->Enabled = true;
				    this->checkBox3->Enabled = true;
					 this->checkBox4->Enabled = true;
					  this->checkBox5->Enabled = true;
				 cmdDataBase = gcnew MySqlCommand("select nomerZdachaID as'ID', nomerZdachaDateFrom as'Дата з',nomerZdachaDateTo as'Дата По',nomerZdachaBron as 'Бронь',nomerTypePrice as'Ціна',nomerRoom as'Номер',(DATEDIFF(nomerZdachaDateFrom,nomerZdachaDateTo)*(-1)) as 'Дні',((DATEDIFF(nomerZdachaDateFrom,nomerZdachaDateTo)*(-1))*nomerTypePrice) as 'Заг.ціна', nomerZdachaPeoples as 'К-сть осіб', nomerZdachaPayment as 'Оплачено' from metropol.nomer,metropol.nomerType, metropol.nomerZdacha where nomerID = nomerZdachaNomerID and nomerTypeID = nomerNomerTypeID;",conDataBase);}
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
			 Color();
			 }
private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			  String^ constring=L"datasource=localhost;port=3306;username=root;password=1111";
			  MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
			  MySqlCommand^ cmdDataBase;
			  if((checkBox1->Checked==true)&&(checkBox2->Checked==true)){
				  this->checkBox6->Enabled = false;
				    this->checkBox3->Enabled = false;
					 this->checkBox4->Enabled = false;
					  this->checkBox5->Enabled = false;
				  cmdDataBase = gcnew MySqlCommand("select nomerZdachaID as'ID', nomerZdachaDateFrom as'Дата з',nomerZdachaDateTo as'Дата По',nomerZdachaBron as 'Бронь',nomerTypePrice as'Ціна',nomerRoom as'Номер',(DATEDIFF(nomerZdachaDateFrom,nomerZdachaDateTo)*(-1)) as 'Дні',((DATEDIFF(nomerZdachaDateFrom,nomerZdachaDateTo)*(-1))*nomerTypePrice) as 'Заг.ціна', nomerZdachaPeoples as 'К-сть осіб', nomerZdachaPayment as 'Оплачено' from metropol.nomer,metropol.nomerType, metropol.nomerZdacha where nomerID = nomerZdachaNomerID and nomerTypeID = nomerNomerTypeID and nomerZdachaDateTo between '"+dateTimePicker1->Value.ToString("yyyy-MM-dd")+"' and '"+dateTimePicker2->Value.ToString("yyyy-MM-dd")+"';",conDataBase);}
			 else if((checkBox1->Checked==false)&&(checkBox2->Checked==true)){
				   this->checkBox6->Enabled = false;
				    this->checkBox3->Enabled = false;
					 this->checkBox4->Enabled = false;
					  this->checkBox5->Enabled = false;
				 cmdDataBase = gcnew MySqlCommand("select nomerZdachaID as'ID', nomerZdachaDateFrom as'Дата з',nomerZdachaDateTo as'Дата По',nomerZdachaBron as 'Бронь',nomerTypePrice as'Ціна',nomerRoom as'Номер',(DATEDIFF(nomerZdachaDateFrom,nomerZdachaDateTo)*(-1)) as 'Дні',((DATEDIFF(nomerZdachaDateFrom,nomerZdachaDateTo)*(-1))*nomerTypePrice) as 'Заг.ціна', nomerZdachaPeoples as 'К-сть осіб', nomerZdachaPayment as 'Оплачено' from metropol.nomer,metropol.nomerType, metropol.nomerZdacha where nomerID = nomerZdachaNomerID and nomerTypeID = nomerNomerTypeID and nomerZdachaDateTo between (select min(nomerZdachaDateTo) from metropol.nomerZdacha) and '"+dateTimePicker2->Value.ToString("yyyy-MM-dd")+"';",conDataBase);}
			 else{
				 this->checkBox6->Enabled = true;
				    this->checkBox3->Enabled = true;
					 this->checkBox4->Enabled = true;
					  this->checkBox5->Enabled = true;
				 cmdDataBase = gcnew MySqlCommand("select nomerZdachaID as'ID', nomerZdachaDateFrom as'Дата з',nomerZdachaDateTo as'Дата По',nomerZdachaBron as 'Бронь',nomerTypePrice as'Ціна',nomerRoom as'Номер',(DATEDIFF(nomerZdachaDateFrom,nomerZdachaDateTo)*(-1)) as 'Дні',((DATEDIFF(nomerZdachaDateFrom,nomerZdachaDateTo)*(-1))*nomerTypePrice) as 'Заг.ціна', nomerZdachaPeoples as 'К-сть осіб', nomerZdachaPayment as 'Оплачено' from metropol.nomer,metropol.nomerType, metropol.nomerZdacha where nomerID = nomerZdachaNomerID and nomerTypeID = nomerNomerTypeID;",conDataBase);}
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
			  Color();
		 }

private: System::Void checkBox6_Click(System::Object^  sender, System::EventArgs^  e) {
		 String^ constring=L"datasource=localhost;port=3306;username=root;password=1111";
			  MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
			  MySqlCommand^ cmdDataBase;
			  if(checkBox6->Checked==true){
				  this->checkBox1->Enabled = false;
				   this->checkBox2->Enabled = false;
				    this->checkBox3->Enabled = false;
					 this->checkBox4->Enabled = false;
					  this->checkBox5->Enabled = false;
				  cmdDataBase = gcnew MySqlCommand("select nomerZdachaID as'ID', nomerZdachaDateFrom as'Дата з',nomerZdachaDateTo as'Дата По',nomerZdachaBron as 'Бронь',nomerTypePrice as'Ціна',nomerRoom as'Номер',(DATEDIFF(nomerZdachaDateFrom,nomerZdachaDateTo)*(-1)) as 'Дні',((DATEDIFF(nomerZdachaDateFrom,nomerZdachaDateTo)*(-1))*nomerTypePrice) as 'Заг.ціна', nomerZdachaPeoples as 'К-сть осіб', nomerZdachaPayment as 'Оплачено' from metropol.nomer,metropol.nomerType, metropol.nomerZdacha where nomerID = nomerZdachaNomerID and nomerTypeID = nomerNomerTypeID and nomerZdachaBron = 'Бронь';",conDataBase);}
			  else if(checkBox6->Checked==false){
				  this->checkBox1->Enabled = true;
				   this->checkBox2->Enabled = true;
				    this->checkBox3->Enabled = true;
					 this->checkBox4->Enabled = true;
					  this->checkBox5->Enabled = true;
				  cmdDataBase = gcnew MySqlCommand("select nomerZdachaID as'ID', nomerZdachaDateFrom as'Дата з',nomerZdachaDateTo as'Дата По',nomerZdachaBron as 'Бронь',nomerTypePrice as'Ціна',nomerRoom as'Номер',(DATEDIFF(nomerZdachaDateFrom,nomerZdachaDateTo)*(-1)) as 'Дні',((DATEDIFF(nomerZdachaDateFrom,nomerZdachaDateTo)*(-1))*nomerTypePrice) as 'Заг.ціна', nomerZdachaPeoples as 'К-сть осіб', nomerZdachaPayment as 'Оплачено' from metropol.nomer,metropol.nomerType, metropol.nomerZdacha where nomerID = nomerZdachaNomerID and nomerTypeID = nomerNomerTypeID;",conDataBase);}
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
			  Color();
		 }
private: System::Void checkBox5_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ constring=L"datasource=localhost;port=3306;username=root;password=1111";
			  MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
			  MySqlCommand^ cmdDataBase;
			  if(checkBox5->Checked==true){
				 this->checkBox1->Enabled = false;
				   this->checkBox2->Enabled = false;
				    this->checkBox3->Enabled = false;
					 this->checkBox4->Enabled = false;
					  this->checkBox6->Enabled = false;
				  cmdDataBase = gcnew MySqlCommand("select nomerZdachaID as'ID', nomerZdachaDateFrom as'Дата з',nomerZdachaDateTo as'Дата По',nomerZdachaBron as 'Бронь',nomerTypePrice as'Ціна',nomerRoom as'Номер',(DATEDIFF(nomerZdachaDateFrom,nomerZdachaDateTo)*(-1)) as 'Дні',((DATEDIFF(nomerZdachaDateFrom,nomerZdachaDateTo)*(-1))*nomerTypePrice) as 'Заг.ціна', nomerZdachaPeoples as 'К-сть осіб', nomerZdachaPayment as 'Оплачено' from metropol.nomer,metropol.nomerType, metropol.nomerZdacha where nomerID = nomerZdachaNomerID and nomerTypeID = nomerNomerTypeID and nomerZdachaBron = 'Здача';",conDataBase);}
			  else if(checkBox5->Checked==false){
				  this->checkBox1->Enabled = true;
				   this->checkBox2->Enabled = true;
				    this->checkBox3->Enabled = true;
					 this->checkBox4->Enabled = true;
					  this->checkBox6->Enabled = true;
				  cmdDataBase = gcnew MySqlCommand("select nomerZdachaID as'ID', nomerZdachaDateFrom as'Дата з',nomerZdachaDateTo as'Дата По',nomerZdachaBron as 'Бронь',nomerTypePrice as'Ціна',nomerRoom as'Номер',(DATEDIFF(nomerZdachaDateFrom,nomerZdachaDateTo)*(-1)) as 'Дні',((DATEDIFF(nomerZdachaDateFrom,nomerZdachaDateTo)*(-1))*nomerTypePrice) as 'Заг.ціна', nomerZdachaPeoples as 'К-сть осіб', nomerZdachaPayment as 'Оплачено' from metropol.nomer,metropol.nomerType, metropol.nomerZdacha where nomerID = nomerZdachaNomerID and nomerTypeID = nomerNomerTypeID;",conDataBase);}
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
			 Color();
		 }

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 addRequest^ f = gcnew addRequest();
			 f->ShowDialog();
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ constring=L"datasource=localhost;port=3306;username=root;password=1111";
			  MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
			  MySqlCommand^ cmdDataBase = gcnew MySqlCommand("delete from metropol.clientInNomer where clientInNomerNomerZdachaID = '"+dataGridView1->CurrentRow->Cells[0]->Value+"'; delete from metropol.nomerZdacha where nomerZdachaID = '"+dataGridView1->CurrentRow->Cells[0]->Value+"';",conDataBase);
			  MySqlDataReader^ myReader;
			  try{
				  conDataBase->Open();
				  myReader=cmdDataBase->ExecuteReader();
				  MessageBox::Show("Видалено!");
			  }catch(Exception^ex){ MessageBox::Show(ex->Message);}
			  ClientInNomer();
			Update();
		 }
private: System::Void addBron_Load(System::Object^  sender, System::EventArgs^  e) {
				 Update();
		 }

private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
			 Update();
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(dataGridView1->CurrentRow->Cells[9]->Value->ToString() == "NO"){
			 String^ constring=L"datasource=localhost;port=3306;username=root;password=1111";
			  MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
			  MySqlCommand^ cmdDataBase = gcnew MySqlCommand("insert into  metropol.payment (paymentName,paymentDate,paymentPrice,paymentClientID) values('Оплата за номер "+dataGridView1->CurrentRow->Cells[5]->Value->ToString()+" дні: "+dataGridView1->CurrentRow->Cells[6]->Value->ToString()+"','"+DateTime::Now.ToString("yyyy-MM-dd HH:MM")+"','"+dataGridView1->CurrentRow->Cells[7]->Value+"','"+dataGridView2->CurrentRow->Cells[3]->Value+"'); update metropol.nomerZdacha set nomerZdachaPayment='YES' where nomerZdachaID = '"+dataGridView1->CurrentRow->Cells[0]->Value+"';",conDataBase);
			  MySqlDataReader^ myReader;
			  try{
				  conDataBase->Open();
				  myReader=cmdDataBase->ExecuteReader();
				  MessageBox::Show("Оплачено!");
				  Update();
			  }catch(Exception^ex){ MessageBox::Show(ex->Message);}}
			 else{MessageBox::Show("Номер оплачений!");}
		}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(Convert::ToInt32(dataGridView2->RowCount) <= Convert::ToInt32(dataGridView1->CurrentRow->Cells[8]->Value))
			 {
			 addRequest1^ f = gcnew addRequest1();
			 f->zdachaNomer = dataGridView1->CurrentRow->Cells[0]->Value->ToString();
			 f->ShowDialog();
			 }
			 else{MessageBox::Show("У цьому номері всі місця зайняті!");}}
		 private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
					   String^ constring=L"datasource=localhost;port=3306;username=root;password=1111";
			  MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
			  MySqlCommand^ cmdDataBase = gcnew MySqlCommand("delete from metropol.clientInNomer where clientInNomerID = '"+dataGridView2->CurrentRow->Cells[0]->Value+"';",conDataBase);
			  MySqlDataReader^ myReader;
			  try{
				  conDataBase->Open();
				  myReader=cmdDataBase->ExecuteReader();
				  MessageBox::Show("Видалено!");
				  ClientInNomer();
			  }catch(Exception^ex){ MessageBox::Show(ex->Message);}
				  }
private: System::Void checkBox4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 String^ constring=L"datasource=localhost;port=3306;username=root;password=1111";
			  MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
			  MySqlCommand^ cmdDataBase;
			  if(checkBox4->Checked==true){
				  this->checkBox1->Enabled = false;
				   this->checkBox2->Enabled = false;
				    this->checkBox3->Enabled = false;
					 this->checkBox5->Enabled = false;
					  this->checkBox6->Enabled = false;
				  cmdDataBase = gcnew MySqlCommand("select nomerZdachaID as'ID', nomerZdachaDateFrom as'Дата з',nomerZdachaDateTo as'Дата По',nomerZdachaBron as 'Бронь',nomerTypePrice as'Ціна',nomerRoom as'Номер',(DATEDIFF(nomerZdachaDateFrom,nomerZdachaDateTo)*(-1)) as 'Дні',((DATEDIFF(nomerZdachaDateFrom,nomerZdachaDateTo)*(-1))*nomerTypePrice) as 'Заг.ціна', nomerZdachaPeoples as 'К-сть осіб', nomerZdachaPayment as 'Оплачено' from metropol.nomer,metropol.nomerType, metropol.nomerZdacha where nomerID = nomerZdachaNomerID and nomerTypeID = nomerNomerTypeID and nomerZdachaDateFrom<Date(now()) and nomerZdachaDateTo>Date(now());",conDataBase);}
			  else if(checkBox4->Checked==false){
				   this->checkBox1->Enabled = true;
				   this->checkBox2->Enabled = true;
				    this->checkBox3->Enabled = true;
					 this->checkBox5->Enabled = true;
					  this->checkBox6->Enabled = true;
				  cmdDataBase = gcnew MySqlCommand("select nomerZdachaID as'ID', nomerZdachaDateFrom as'Дата з',nomerZdachaDateTo as'Дата По',nomerZdachaBron as 'Бронь',nomerTypePrice as'Ціна',nomerRoom as'Номер',(DATEDIFF(nomerZdachaDateFrom,nomerZdachaDateTo)*(-1)) as 'Дні',((DATEDIFF(nomerZdachaDateFrom,nomerZdachaDateTo)*(-1))*nomerTypePrice) as 'Заг.ціна', nomerZdachaPeoples as 'К-сть осіб', nomerZdachaPayment as 'Оплачено' from metropol.nomer,metropol.nomerType, metropol.nomerZdacha where nomerID = nomerZdachaNomerID and nomerTypeID = nomerNomerTypeID;",conDataBase);}
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
			  Color();
		 }
private: System::Void checkBox3_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ constring=L"datasource=localhost;port=3306;username=root;password=1111";
			  MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
			  MySqlCommand^ cmdDataBase;
			  if(checkBox3->Checked==true){
				  this->checkBox1->Enabled = false;
				   this->checkBox2->Enabled = false;
				    this->checkBox4->Enabled = false;
					 this->checkBox5->Enabled = false;
					  this->checkBox6->Enabled = false;
				  cmdDataBase = gcnew MySqlCommand("select nomerZdachaID as'ID', nomerZdachaDateFrom as'Дата з',nomerZdachaDateTo as'Дата По',nomerZdachaBron as 'Бронь',nomerTypePrice as'Ціна',nomerRoom as'Номер',(DATEDIFF(nomerZdachaDateFrom,nomerZdachaDateTo)*(-1)) as 'Дні',((DATEDIFF(nomerZdachaDateFrom,nomerZdachaDateTo)*(-1))*nomerTypePrice) as 'Заг.ціна', nomerZdachaPeoples as 'К-сть осіб', nomerZdachaPayment as 'Оплачено' from metropol.nomer,metropol.nomerType, metropol.nomerZdacha where nomerID = nomerZdachaNomerID and nomerTypeID = nomerNomerTypeID and nomerZdachaDateTo<Date(now());",conDataBase);}
			  else if(checkBox3->Checked==false){
				   this->checkBox1->Enabled = true;
				   this->checkBox2->Enabled = true;
				    this->checkBox4->Enabled = true;
					 this->checkBox5->Enabled = true;
					  this->checkBox6->Enabled = true;
				  cmdDataBase = gcnew MySqlCommand("select nomerZdachaID as'ID', nomerZdachaDateFrom as'Дата з',nomerZdachaDateTo as'Дата По',nomerZdachaBron as 'Бронь',nomerTypePrice as'Ціна',nomerRoom as'Номер',(DATEDIFF(nomerZdachaDateFrom,nomerZdachaDateTo)*(-1)) as 'Дні',((DATEDIFF(nomerZdachaDateFrom,nomerZdachaDateTo)*(-1))*nomerTypePrice) as 'Заг.ціна', nomerZdachaPeoples as 'К-сть осіб', nomerZdachaPayment as 'Оплачено' from metropol.nomer,metropol.nomerType, metropol.nomerZdacha where nomerID = nomerZdachaNomerID and nomerTypeID = nomerNomerTypeID;",conDataBase);}
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
			  Color();
		 }
};
}
