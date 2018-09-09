#pragma once
#include <msclr\marshal_cppstd.h>
#include "decompression.h"
#include "Name_addres.h"
#include "BD.h"
#include <string>
namespace FTPClient {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;

	//int enumerateArchive(const char* filePath, const char* output)
	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::FolderBrowserDialog^  folderBrowserDialog1;

	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::FolderBrowserDialog^  folderBrowserDialog2;


	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->folderBrowserDialog2 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(447, 42);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(97, 20);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Распаковать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(447, 103);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(97, 20);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Добавить в БД";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox1->Enabled = false;
			this->textBox1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox1->Location = System::Drawing::Point(29, 23);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(366, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"Укажите путь до архива";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox2->Enabled = false;
			this->textBox2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox2->Location = System::Drawing::Point(29, 103);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(366, 20);
			this->textBox2->TabIndex = 3;
			this->textBox2->Text = L"Укажите путь до папки";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(401, 23);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(30, 20);
			this->button3->TabIndex = 4;
			this->button3->Text = L"...";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(401, 61);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(30, 20);
			this->button4->TabIndex = 5;
			this->button4->Text = L"...";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(401, 103);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(30, 20);
			this->button5->TabIndex = 6;
			this->button5->Text = L"...";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox3->Enabled = false;
			this->textBox3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox3->Location = System::Drawing::Point(29, 61);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(366, 20);
			this->textBox3->TabIndex = 7;
			this->textBox3->Text = L"Распаковать в ...";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// folderBrowserDialog1
			// 
			this->folderBrowserDialog1->HelpRequest += gcnew System::EventHandler(this, &MyForm::folderBrowserDialog1_HelpRequest);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::openFileDialog1_FileOk_1);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(556, 149);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void openFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		//auto input  = textBox1->Text;
		//auto output = textBox3->Text;

		System::String^ input = textBox1->Text;
		std::string input_ = marshal_as<std::string>(input);

		System::String^ output = textBox3->Text;
		std::string output_ = marshal_as<std::string>(output);
		output_ += (std::string)"\\";
		enumerateArchive(input_.c_str(), output_.c_str());

	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {

		folderBrowserDialog2->ShowDialog();
		textBox3->Text = folderBrowserDialog2->SelectedPath;

	}
private: System::Void folderBrowserDialog2_HelpRequest(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void folderBrowserDialog1_HelpRequest(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void openFileDialog1_FileOk_1(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	openFileDialog1->ShowDialog();
	textBox1->Text = openFileDialog1->FileName;
}

private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	folderBrowserDialog1->ShowDialog();
	textBox2->Text = folderBrowserDialog1->SelectedPath;
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {


	System::String^ input = textBox2->Text;
	std::string input_ = marshal_as<std::string>(input);

	input_ += (std::string)"\\";

	Name_addres(input_);
	BD();


	

}
};
}
