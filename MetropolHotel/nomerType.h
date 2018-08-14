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
	/// Сводка для nomerType
	/// </summary>
	public ref class nomerType : public System::Windows::Forms::Form
	{
	public:
		nomerType(void)
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
		~nomerType()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	protected: 
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(nomerType::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ControlLightLight;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(97, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 4;
			this->dataGridView1->Size = System::Drawing::Size(504, 202);
			this->dataGridView1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(526, 204);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Вихід";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &nomerType::button1_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(97, 208);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(105, 17);
			this->checkBox1->TabIndex = 2;
			this->checkBox1->Text = L"Зайняті номери";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &nomerType::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(208, 208);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(136, 17);
			this->checkBox2->TabIndex = 3;
			this->checkBox2->Text = L"Заброньовані номери";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &nomerType::checkBox2_CheckedChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-5, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(105, 102);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(350, 208);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(96, 17);
			this->checkBox3->TabIndex = 5;
			this->checkBox3->Text = L"Вільні номери";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &nomerType::checkBox3_CheckedChanged);
			// 
			// nomerType
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(609, 239);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->button1);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(625, 277);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(625, 277);
			this->Name = L"nomerType";
			this->Text = L"Список номерів";
			this->Load += gcnew System::EventHandler(this, &nomerType::nomerType_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
			 }
	private: System::Void nomerType_Load(System::Object^  sender, System::EventArgs^  e) {
				 String^ constring=L"datasource=localhost;port=3306;username=root;password=1111";
			  MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
			  MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select nomerRoom,nomerPoverh,nomerPhone,nomerProperties,nomertypeType from metropol.nomer inner join metropol.nomertype on nomertypeid = nomerNomertypeID;",conDataBase);
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
	private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 String^ constring=L"datasource=localhost;port=3306;username=root;password=1111";
			  MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
			  MySqlCommand^ cmdDataBase;
			  if(checkBox1->Checked==true){checkBox2->Enabled = false; checkBox3->Enabled = false;cmdDataBase = gcnew MySqlCommand("select nomerRoom as 'Номер',nomerPoverh as 'Поверх',nomerPhone as 'Телефон',nomerProperties as 'Особливості',nomertypeType as 'Тип' from metropol.nomerZdacha, metropol.nomer, metropol.nomerType where nomerTypeID = nomerNomerTypeID and nomerID = nomerZdachaNomerID and nomerZdachaBron = 'Здача';",conDataBase);}
			  else{checkBox2->Enabled = true; checkBox3->Enabled = true; cmdDataBase = gcnew MySqlCommand("select nomerRoom as 'Номер',nomerPoverh as 'Поверх',nomerPhone as 'Телефон',nomerProperties as 'Особливості',nomertypeType as 'Тип' from metropol.nomer, metropol.nomerType where nomerTypeID = nomerNomerTypeID;",conDataBase);}
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
private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 String^ constring=L"datasource=localhost;port=3306;username=root;password=1111";
			  MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
			  MySqlCommand^ cmdDataBase;
			  if(checkBox2->Checked==true){checkBox1->Enabled = false; checkBox3->Enabled = false;cmdDataBase = gcnew MySqlCommand("select nomerRoom as 'Номер',nomerPoverh as 'Поверх',nomerPhone as 'Телефон',nomerProperties as 'Особливості',nomertypeType as 'Тип' from metropol.nomerZdacha, metropol.nomer, metropol.nomerType where nomerTypeID = nomerNomerTypeID and nomerID = nomerZdachaNomerID and nomerZdachaBron = 'Бронь';",conDataBase);}
			  else{checkBox1->Enabled = true; checkBox3->Enabled = true; cmdDataBase = gcnew MySqlCommand("select nomerRoom as 'Номер',nomerPoverh as 'Поверх',nomerPhone as 'Телефон',nomerProperties as 'Особливості',nomertypeType as 'Тип' from metropol.nomer, metropol.nomerType where nomerTypeID = nomerNomerTypeID",conDataBase);}
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
private: System::Void checkBox3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 String^ constring=L"datasource=localhost;port=3306;username=root;password=1111";
			  MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
			  MySqlCommand^ cmdDataBase;
			  if(checkBox3->Checked==true){checkBox2->Enabled = false; checkBox1->Enabled = false; cmdDataBase = gcnew MySqlCommand("select nomerRoom as 'Номер',nomerPoverh as 'Поверх',nomerPhone as 'Телефон',nomerProperties as 'Особливості',nomertypeType as 'Тип' from metropol.nomerType,metropol.nomerZdacha right outer join metropol.nomer on nomerZdachaNomerID = nomerID where nomerZdachaNomerID is Null and nomerTypeID = nomerNomerTypeID;",conDataBase);}
			  else{checkBox2->Enabled = true; checkBox1->Enabled = true; cmdDataBase = gcnew MySqlCommand("select nomerRoom as 'Номер',nomerPoverh as 'Поверх',nomerPhone as 'Телефон',nomerProperties as 'Особливості',nomertypeType as 'Тип' from metropol.nomer, metropol.nomerType where nomerTypeID = nomerNomerTypeID",conDataBase);}
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
};
}
