#pragma once
#include "Form2.h"
namespace zadaniye1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:


	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton4;

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
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button1->Location = System::Drawing::Point(56, 450);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(224, 42);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Вывод текста";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button2->Location = System::Drawing::Point(490, 450);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(248, 42);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Запуск формы";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button3->Location = System::Drawing::Point(998, 450);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(120, 42);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Выход";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 19;
			this->listBox1->Location = System::Drawing::Point(56, 4);
			this->listBox1->Margin = System::Windows::Forms::Padding(4);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(1062, 156);
			this->listBox1->TabIndex = 5;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->checkBox3);
			this->groupBox1->Controls->Add(this->checkBox4);
			this->groupBox1->Controls->Add(this->checkBox2);
			this->groupBox1->Controls->Add(this->checkBox1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(56, 173);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(1062, 119);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Стиль шрифта";
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(536, 57);
			this->checkBox3->Margin = System::Windows::Forms::Padding(4);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(155, 23);
			this->checkBox3->TabIndex = 7;
			this->checkBox3->Text = L"подчеркнутый";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(784, 57);
			this->checkBox4->Margin = System::Windows::Forms::Padding(4);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(166, 23);
			this->checkBox4->TabIndex = 2;
			this->checkBox4->Text = L"перечеркнутый";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(312, 57);
			this->checkBox2->Margin = System::Windows::Forms::Padding(4);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(124, 23);
			this->checkBox2->TabIndex = 1;
			this->checkBox2->Text = L"курсивный";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(68, 57);
			this->checkBox1->Margin = System::Windows::Forms::Padding(4);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(139, 23);
			this->checkBox1->TabIndex = 0;
			this->checkBox1->Text = L"полужирный";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(235, 401);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(883, 28);
			this->textBox1->TabIndex = 7;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(52, 401);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(160, 23);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Введите текст";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radioButton5);
			this->groupBox2->Controls->Add(this->radioButton4);
			this->groupBox2->Controls->Add(this->radioButton3);
			this->groupBox2->Controls->Add(this->radioButton2);
			this->groupBox2->Controls->Add(this->radioButton1);
			this->groupBox2->Location = System::Drawing::Point(56, 299);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(1062, 100);
			this->groupBox2->TabIndex = 9;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Цвет шрифта";
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->BackColor = System::Drawing::Color::Black;
			this->radioButton5->ForeColor = System::Drawing::Color::White;
			this->radioButton5->Location = System::Drawing::Point(925, 41);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(94, 23);
			this->radioButton5->TabIndex = 4;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"черный";
			this->radioButton5->UseVisualStyleBackColor = false;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->BackColor = System::Drawing::Color::Gold;
			this->radioButton4->Location = System::Drawing::Point(712, 41);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(96, 23);
			this->radioButton4->TabIndex = 3;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"желтый";
			this->radioButton4->UseVisualStyleBackColor = false;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->radioButton3->Location = System::Drawing::Point(481, 41);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(102, 23);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"зеленый";
			this->radioButton3->UseVisualStyleBackColor = false;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton3_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->BackColor = System::Drawing::Color::Blue;
			this->radioButton2->ForeColor = System::Drawing::Color::White;
			this->radioButton2->Location = System::Drawing::Point(267, 41);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(81, 23);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"синий";
			this->radioButton2->UseVisualStyleBackColor = false;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->radioButton1->ForeColor = System::Drawing::Color::White;
			this->radioButton1->Location = System::Drawing::Point(42, 41);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(105, 23);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"красный";
			this->radioButton1->UseVisualStyleBackColor = false;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton1_CheckedChanged);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 19);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Info;
			this->ClientSize = System::Drawing::Size(1172, 524);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Form1";
			this->Text = L"Выполнила Кадушкевич А.О., группа КФ-23";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text != "") {
		this->listBox1->Items->Clear();
		this->listBox1->Font = (gcnew System::Drawing::Font(L"Arial",
			14, System::Drawing::FontStyle::Regular, System:: Drawing::GraphicsUnit::Point, static_cast<System :: Byte>(204))); this->listBox1->ForeColor = System:: Drawing::Color :: Black; this->listBox1->Items->Add(this -> textBox1->Text);
		//Устанавливает красный цвет для текста
		if (radioButton1->Checked == true) {
			this->listBox1->ForeColor
				= System::Drawing::Color::Red;
		}
		//Устанавливает синий цвет для текста
		if (radioButton2->Checked == true) {
			this->listBox1->ForeColor
				= System::Drawing::Color::Blue;
		}
		//Устанавливает зеленый цвет для текста
		if (radioButton3->Checked == true) {
			this->listBox1->ForeColor
				= System::Drawing::Color::Green;
		}
		//Устанавливает желтый цвет для текста
		if (radioButton4->Checked == true) {
			this->listBox1->ForeColor
				= System::Drawing::Color::Yellow;
		}
		//Устанавливает черный цвет для текста
		if (radioButton5->Checked == true) {
			this->listBox1->ForeColor =
				System::Drawing::Color::Black;
		}
		//Устанавливает атрибут «жирность» для текста
		if (checkBox1->Checked == true) {
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing:: FontStyle::Bold, System::Drawing::GraphicsUnit::Point,static_cast<System::Byte>(204)));
		}
		//Устанавливает атрибут «курсив» для текста
		if (checkBox2->Checked == true) {
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing:: FontStyle::Italic, System::Drawing::GraphicsUnit::Point,static_cast<System::Byte>(204)));
		}
		//Устанавливает атрибут «подчеркнутый» для текста
		if (checkBox3->Checked == true) {
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing:: FontStyle::Underline, System::Drawing :: GraphicsUnit::Point,static_cast<System::Byte>(204)));
		}
		//Устанавливает атрибут «зачеркнутый» для текста
		if (checkBox4->Checked == true) {
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing:: FontStyle::Strikeout, System::Drawing::GraphicsUnit::Point,static_cast<System::Byte>(204)));
		}
		//Устанавливает атрибуты «жирность», «курсив» для текста
		if ((checkBox1->Checked == true) && (checkBox2->Checked ==
			true)) {
			this->listBox1->Font = (gcnew System::Drawing:: Font(L"Arial", 14, static_cast<System:: Drawing::FontStyle>((System::Drawing::FontStyle::Bold |System::Drawing::FontStyle::Italic)), System::Drawing:: GraphicsUnit::Point, static_cast<System::Byte>(204)));
		}
		//Устанавливает атрибуты «жирность», «курсив» и «подчеркнутый» для текста
			if((checkBox1->Checked == true) && ((checkBox2->Checked ==
			true)) && (checkBox3->Checked == true))this->listBox1->Font =
			(gcnew System::Drawing::Font(L"Arial", 14,static_cast<System::Drawing:: FontStyle>(((System::Drawing::FontStyle::Bold | System:: Drawing::FontStyle::Italic) | System::Drawing::FontStyle:: Underline)), System::Drawing::GraphicsUnit::Point,static_cast<System:: Byte>(204)));
		//Устанавливает атрибуты «жирность», «курсив», «подчеркнутый» и «зачеркнутый» для текста
			if ((checkBox1->Checked == true) && (checkBox2->Checked ==
				true) && (checkBox3->Checked == true) && (checkBox4->Checked ==
					true))this->listBox1->Font = (gcnew System::Drawing:: Font(L"Arial", 14, static_cast<System::Drawing:: FontStyle>(System::Drawing::FontStyle::Bold | System:: Drawing::FontStyle::Italic | System::Drawing :: FontStyle::Underline | System::Drawing :: FontStyle::Strikeout),System::Drawing::GraphicsUnit::Point,static_cast<System::Byte>(204)));
		//Устанавливает атрибуты «курсив», «подчеркнутый» и «зачеркнутый» для текста 
			if((checkBox2->Checked == true) && (checkBox3->Checked ==
			true) && (checkBox4->Checked == true))this->listBox1->Font = (gcnew System::Drawing::Font(L"Arial", 14, static_cast<System:: Drawing::FontStyle>(System::Drawing::FontStyle::Italic |System::Drawing::FontStyle::Underline | System:: Drawing::FontStyle::Strikeout), System::Drawing:: GraphicsUnit::Point, static_cast<System::Byte>(204)));
		//Устанавливает атрибуты «курсив», «подчеркнутый» для текста
		if ((checkBox2->Checked == true) && (checkBox3->Checked ==
			true))this->listBox1->Font = (gcnew System::Drawing:: Font(L"Arial", 14, static_cast<System::Drawing:: FontStyle>(System::Drawing::FontStyle::Italic | System:: Drawing::FontStyle::Underline), System::Drawing:: GraphicsUnit::Point, static_cast<System::Byte>(204)));
		//Устанавливает атрибуты «курсив», «зачеркнутый» для текста
		if ((checkBox2->Checked == true) && (checkBox4->Checked ==
			true))this->listBox1->Font = (gcnew System::Drawing:: Font(L"Arial", 14, static_cast<System:: Drawing::FontStyle>(System::Drawing::FontStyle::Italic |System::Drawing::FontStyle::Strikeout), System::Drawing:: GraphicsUnit::Point, static_cast<System::Byte>(204)));
		//Устанавливает атрибуты «жирность», «подчеркнутый» для текста
		if ((checkBox1->Checked == true) && (checkBox3->Checked ==
			true))this->listBox1->Font = (gcnew System::Drawing:: Font(L"Arial", 14, static_cast<System::Drawing:: FontStyle>(System::Drawing::FontStyle::Bold | System:: Drawing::FontStyle::Underline), System::Drawing:: GraphicsUnit::Point, static_cast<System::Byte>(204)));
		//Устанавливает атрибуты «подчеркнутый», «зачеркнутый» для текста
		if ((checkBox3->Checked == true) && (checkBox4->Checked ==
			true))this->listBox1->Font = (gcnew System::Drawing:: Font(L"Arial", 14, static_cast<System::Drawing:: FontStyle>(System::Drawing::FontStyle::Underline |System::Drawing::FontStyle::Strikeout), System::Drawing:: GraphicsUnit::Point, static_cast<System::Byte>(204)));
		//Устанавливает атрибуты «жирность», «зачеркнутый» для текста
		if ((checkBox1->Checked == true) && (checkBox4->Checked ==
			true))this->listBox1->Font = (gcnew System::Drawing:: Font(L"Arial", 14, static_cast<System::Drawing:: FontStyle>(System::Drawing::FontStyle::Bold |System::Drawing::FontStyle::Strikeout), System::Drawing:: GraphicsUnit::Point, static_cast<System::Byte>(204)));
		//Устанавливает атрибуты «жирность», «подчеркнутый», «зачеркнутый» для текста
		if ((checkBox1->Checked == true) && (checkBox3->Checked ==
			true))this->listBox1->Font = (gcnew System::Drawing:: Font(L"Arial", 14, static_cast<System::Drawing:: FontStyle>(System::Drawing::FontStyle::Bold | System:: Drawing::FontStyle::Underline), System::Drawing:: GraphicsUnit::Point, static_cast<System::Byte>(204)));
		//Устанавливает атрибуты «жирность», «курсив», «зачеркнутый» для текста
		if((checkBox1->Checked == true) && ((checkBox2->Checked == true)) && (checkBox4->Checked == true))this->listBox1->Font = (gcnew System::Drawing::Font(L"Arial", 14, static_cast<System:: Drawing::FontStyle>((System::Drawing::FontStyle::Bold| System::Drawing::FontStyle::Italic | System::Drawing::FontStyle::Strikeout)), System::Drawing::GraphicsUnit::Point,static_cast<System::Byte>(204)));

	}
	else
	{
		MessageBox::Show("Заполните пожалуйста данные", "Ошибка вво-да данных",
			MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Form2^ f = gcnew Form2();
	this->Hide();
	f->ShowDialog();
	this->Show();
}
};
}
