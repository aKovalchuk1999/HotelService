#pragma once
#include "mainMenu.h"

namespace MetropolHotel {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для mainForm
	/// </summary>
	public ref class mainForm : public System::Windows::Forms::Form
	{
	public:
		mainForm(void)
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
		~mainForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 


	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::DataGridView^  dataGridView1;



	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(mainForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Lime;
			this->button1->Location = System::Drawing::Point(226, 106);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(102, 35);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Увійти";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &mainForm::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(3, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(144, 138);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 24, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(258, 3);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(70, 39);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Вхід";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(153, 40);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 25);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Логін";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(153, 70);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 25);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Пароль";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(226, 45);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(166, 20);
			this->textBox1->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(226, 71);
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(166, 20);
			this->textBox2->TabIndex = 6;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button2->Location = System::Drawing::Point(334, 106);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(58, 35);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Вийти";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &mainForm::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(3, 3);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(144, 138);
			this->dataGridView1->TabIndex = 8;
			this->dataGridView1->Visible = false;
			// 
			// mainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(408, 145);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Name = L"mainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Вхід в управління готелем";
			this->Load += gcnew System::EventHandler(this, &mainForm::mainForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 bool admin = false, cleaner = false, allWorks = false, director = false;
				  bool one = false;
				  bool two = false;
				  int on,off;
				  for(int i = 0; i < dataGridView1->RowCount; i++)
				  {
					  if(dataGridView1->Rows[i]->Cells[2]->Value->ToString() == textBox1->Text){one = true; on = Convert::ToInt32(dataGridView1->Rows[i]->Cells[0]->Value);}
					  else{}
					  if(textBox2->Text == dataGridView1->Rows[i]->Cells[3]->Value->ToString()){two = true; off = Convert::ToInt32(dataGridView1->Rows[i]->Cells[0]->Value);}
					  else{break;}
				  }
				  if(one && two && (on = off)){mainMenu^ f = gcnew mainMenu(); f->ShowDialog();} else{}
				 /* if(one && two && (on = off) && (dataGridView1->Rows[on]->Cells[4]->Value->ToString()=="Прибиральниця")||(dataGridView1->Rows[on]->Cells[4]->Value->ToString()=="Прибиральник")){cleaner = true; mainMenu^ f = gcnew mainMenu(); f->ShowDialog();}
				  else if(one && two && (on = off) && (dataGridView1->Rows[on]->Cells[4]->Value->ToString()=="Різноробочий")){allWorks = true; mainMenu^ f = gcnew mainMenu(); f->ShowDialog();}
				  else if(one && two && (on = off) && (dataGridView1->Rows[on]->Cells[4]->Value->ToString()=="Адміністратор")){admin = true; mainMenu^ f = gcnew mainMenu(); f->ShowDialog();}
				  else if(one && two && (on = off) && (dataGridView1->Rows[on]->Cells[4]->Value->ToString()=="Директор")){director = true; mainMenu^ f = gcnew mainMenu(); f->ShowDialog();}
				  else{ MessageBox::Show("Невірно вказано логін або пароль!!!");}

				  MessageBox::Show(Convert::ToString(admin) + Convert::ToString(cleaner) + Convert::ToString(allWorks) + Convert::ToString(director));
				  */
				  /*if(one && two && (on == off)){mainMenu^ f = gcnew mainMenu();
				 f->ShowDialog();}
				  else{ MessageBox::Show("Невірно вказано логін або пароль!!");}*/
			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 Application::Exit();
			 }
private: System::Void mainForm_Load(System::Object^  sender, System::EventArgs^  e) {
			  String^ constring=L"datasource=localhost;port=3306;username=root;password=1111";
			  MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
			  MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select workerID,concat(workerSurname,' ',substr(workerName,1,1),'.',substr(workerForename,1,1),'.'),workerLogin,workerPassword,workerPosada from metropol.worker;",conDataBase);
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
