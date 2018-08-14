#pragma once

namespace MetropolHotel {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Сводка для addWork
	/// </summary>
	public ref class addWork : public System::Windows::Forms::Form
	{
	public:
		addWork(void)
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
		~addWork()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	protected: 
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::DataGridView^  dataGridView3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(addWork::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView3))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ControlLightLight;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(2, 63);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 4;
			this->dataGridView1->Size = System::Drawing::Size(91, 162);
			this->dataGridView1->TabIndex = 0;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(443, 9);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(102, 101);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(63, 25);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Номер";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(2, 37);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(91, 20);
			this->textBox1->TabIndex = 3;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &addWork::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(124, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(101, 25);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Тип робіт";
			// 
			// dataGridView2
			// 
			this->dataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::ControlLightLight;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(99, 37);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 4;
			this->dataGridView2->Size = System::Drawing::Size(155, 188);
			this->dataGridView2->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(289, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(90, 25);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Дата/час";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"yyyy-MM-dd HH:mm";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(260, 37);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(177, 20);
			this->dateTimePicker1->TabIndex = 8;
			this->dateTimePicker1->Value = System::DateTime(2017, 10, 21, 19, 2, 5, 0);
			// 
			// dataGridView3
			// 
			this->dataGridView3->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView3->BackgroundColor = System::Drawing::SystemColors::ControlLightLight;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(260, 88);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersWidth = 4;
			this->dataGridView3->Size = System::Drawing::Size(177, 137);
			this->dataGridView3->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(301, 60);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(88, 25);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Робітник";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button1->Location = System::Drawing::Point(443, 127);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 44);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Зберегти";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &addWork::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button2->Location = System::Drawing::Point(443, 177);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 23);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Відмінити";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &addWork::button2_Click);
			// 
			// addWork
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(553, 232);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->dataGridView1);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(569, 270);
			this->MinimumSize = System::Drawing::Size(569, 270);
			this->Name = L"addWork";
			this->Text = L"Оформлення робіт в номерах";
			this->Load += gcnew System::EventHandler(this, &addWork::addWork_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: void Nomer(void){
				  String^ constring=L"datasource=localhost;port=3306;username=root;password=1111";
			  MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
			  MySqlCommand^ cmdDataBase;
			  cmdDataBase = gcnew MySqlCommand("select nomerID as 'ID', nomerRoom as 'Номер' from metropol.nomer;",conDataBase);
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

	private: void Work(void){
				  String^ constring=L"datasource=localhost;port=3306;username=root;password=1111";
			  MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
			  MySqlCommand^ cmdDataBase;
			  cmdDataBase = gcnew MySqlCommand("select workID as 'ID', workName as 'Назва' from metropol.work;",conDataBase);
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
			 }
			 catch(Exception^ex){
				 MessageBox::Show(ex->Message);
			 }
		}
private: void Worker(void){
				  String^ constring=L"datasource=localhost;port=3306;username=root;password=1111";
			  MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
			  MySqlCommand^ cmdDataBase;
			  cmdDataBase = gcnew MySqlCommand("select workerID as 'ID', concat(workerSurname,' ',substr(workerName,1,1),'.',substr(workerForename,1,1),'.') as 'ПІБ працівника' from metropol.worker;",conDataBase);
			  try{
				 MySqlDataAdapter ^ sda = gcnew MySqlDataAdapter();
				 sda->SelectCommand = cmdDataBase;
				 DataTable ^ dbdataset = gcnew DataTable();
				 sda->Fill(dbdataset);
				 BindingSource^ bSource = gcnew BindingSource();
				 bSource->DataSource = dbdataset;
				 dataGridView3->DataSource = bSource;
				 sda->Update(dbdataset);
				 this->dataGridView3->Columns[0]->Visible = false;
			 }
			 catch(Exception^ex){
				 MessageBox::Show(ex->Message);
			 }
		}
	private: System::Void addWork_Load(System::Object^  sender, System::EventArgs^  e) {
				 Nomer();
				 Work();
				 Worker();
			 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 for (int i = 0; i < dataGridView1->RowCount; i++)
                {
                    dataGridView1->Rows[i]->Selected = false;
                    for (int j = 0; j < dataGridView1->ColumnCount; j++)
                        if (dataGridView1->Rows[i]->Cells[j]->Value != nullptr)
                            if (dataGridView1->Rows[i]->Cells[j]->Value->ToString()->Contains(textBox1->Text))
                            {
                                dataGridView1->Rows[i]->Selected = true;
                                break;
                            }
                }
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 //MessageBox::Show(dataGridView1->CurrentRow->Cells[0]->Value + " " + dataGridView2->CurrentRow->Cells[0]->Value + " " + dateTimePicker1->Value.ToString("dd-MM-yyyy hh:mm") + " " + dataGridView3->CurrentRow->Cells[0]->Value);
			 String^ constring=L"datasource=localhost;port=3306;username=root;password=1111";
			  MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
			  MySqlCommand^ cmdDataBase = gcnew MySqlCommand("insert into  metropol.workInNomer (workInNomerNomerID,workInNomerWorkID,workInNomerDateTime,WorkInNomerEnd,workInNomerWorkerID) values('"+dataGridView1->CurrentRow->Cells[0]->Value+"','"+dataGridView2->CurrentRow->Cells[0]->Value+"','"+ dateTimePicker1->Value.ToString("yyyy-MM-dd HH:mm")+"','NO','"+dataGridView3->CurrentRow->Cells[0]->Value+"');",conDataBase);
			  MySqlDataReader^ myReader;
			  try{
				  conDataBase->Open();
				  myReader=cmdDataBase->ExecuteReader();
				  MessageBox::Show("Додано!");
			  }catch(Exception^ex){ MessageBox::Show(ex->Message);}
			  this->Close();
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
		 }
};
}