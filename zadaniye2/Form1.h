#pragma once
#include <cmath>
#include <string.h>
namespace zadaniye2 {

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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(105, 447);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(150, 55);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Расчет";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(410, 447);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(141, 55);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Выход";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(139, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(381, 27);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Вычисление значения функции";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 307);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(179, 21);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Введите значение А";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(12, 354);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(176, 21);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Введите значение X";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(12, 395);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(199, 21);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Значение функции Y=";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(231, 308);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(381, 22);
			this->textBox1->TabIndex = 6;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			this->textBox1->Enter += gcnew System::EventHandler(this, &Form1::textBox1_Enter);
			this->textBox1->Leave += gcnew System::EventHandler(this, &Form1::textBox1_Leave);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(231, 353);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(381, 22);
			this->textBox2->TabIndex = 7;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_TextChanged);
			this->textBox2->Enter += gcnew System::EventHandler(this, &Form1::textBox2_Enter);
			this->textBox2->Leave += gcnew System::EventHandler(this, &Form1::textBox2_Leave);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(231, 396);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(381, 22);
			this->textBox3->TabIndex = 8;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(16, 86);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(596, 165);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Info;
			this->ClientSize = System::Drawing::Size(636, 514);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"Form1";
			this->Text = L"Выполнил студент группы КФ-23 Кадушкевич А.О. Задание 2";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		double y, x, a;
		//Проверка, что данные для х и а введены
		if ((textBox1->Text != "") && (textBox2->Text != ""))
		{
		//Преобразование из текста в дробное число х и а a =
			Convert::ToDouble(textBox1->Text);
			x = Convert::ToDouble(textBox2->Text);
			if (x <= 0)
				y = (pow(fabs(x)+2,1/3)-1);
				else
			if (x > 0 && x <= a) 
			{ 
				y = sin(pow(x,3))+pow(x,1/2); 
			}
				else
				{
					y = pow(log(x),2)+pow(x,1/2);
				};
		//Вывод в компоненте ТextBox3 преобразованного в текст значения у
			textBox3->Text = Convert::ToString(y);
		}

		else

		//Вывод окна с сообщением, если не введены данные в компоненты ТextBox1 и ТextBox2
		{
			MessageBox::Show("Введите пожалуйста данные А и Х", "Ошибка ввода данных", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void textBox1_Leave(System::Object^ sender, System::EventArgs^ e) {
	int l, t, k; 
	bool a = true; 
	String^ str; 
	str = textBox1->Text;
	l = str->Length;
	//индекс символа, с которым работаем
	t=0;
	//колличество запятых в строке (дабы избежать варианта 0, 2384, 1254, 1251 – это не число)
	k = 0;
	//двигаем индексатор, если наше число отрицательное
		if(str[t]=='-') t++;
	//число не может начинаться с запятой
		if(str[t]==',') a=false; while(t<l)
	{
		if (str[t] == ',')
	//если запятая стоит последним символом или запятая уже была найдена
		{
		if (t == l - 1 || k > 0) 
			a = false; k++;

		}

	//если t-ый символ не лежит в диапазоне от '0' до '9' 
		else if(str[t]<'0' || str[t] > '9') 
			a = false;t++;
}
	if (a == false)
	{
		MessageBox::Show("параметр А не является числом", "Ошибка ввода данных",MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	//возврат фокуса текстовому полю 
		this->textBox1->Focus();
	}
}
private: System::Void textBox2_Leave(System::Object^ sender, System::EventArgs^ e) {
	int l, t, k;
	bool a = true; 
	String^ str; 
	str = textBox2->Text;
	l = str->Length;
	//индекс символа, с которым работаем
	t=0;
	//колличество запятых в строке (дабы избежать варианта 0, 2384, 1254, 1251 – это не число)
	k = 0;
	//двигаем индексатор, если наше число отрицательное
	if(str[t]=='-') t++;
	//число не может начинаться с запятой
	if(str[t]==',') 
		a=false; 
	while(t<l)
	{
		if (str[t] == ',')
		//если запятая стоит последним символом или запятая уже была найдена
		{
			if (t == l - 1 || k > 0) a = false; k++;
		}
		//если t-ый символ не лежит в диапазоне от '0' до '9'
		else if (str[t] < '0' || str[t]>'9') 
			a = false; 
			t++;
	}
	if (a == false)
	{
		MessageBox::Show("параметр Х не является числом", "Ошибка ввода данных", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		//возврат фокуса текстовому полю 
		this->textBox2->Focus();
	}
}
private: System::Void textBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	textBox3->Text = "";
}
private: System::Void textBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
	textBox3->Text = "";
}
};
}
