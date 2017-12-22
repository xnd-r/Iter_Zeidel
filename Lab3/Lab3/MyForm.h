#pragma once
#include "Dirihle.h"

#include <msclr\marshal_cppstd.h>
using namespace task_dir;
namespace Lab3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		std::string StringToSt(String ^s)
		{
			msclr::interop::marshal_context context;
			std::string str = context.marshal_as<std::string>(s);
			return str;
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
		int n = 0; int f = 0; int f1 = 0; double p = 0; int ji = 0; int m = 0; int NMAX = 0; double toch = 0;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;











	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(24, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(715, 395);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->Visible = false;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(887, 373);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 22);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Решить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(783, 274);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(110, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Ограничение шагов:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(801, 186);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(124, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Число разбиений по Х:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(801, 217);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(124, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Число разбиений по Y:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(899, 271);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 5;
			this->textBox1->Text = L"45";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(931, 214);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(68, 20);
			this->textBox2->TabIndex = 6;
			this->textBox2->Text = L"4";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(931, 183);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(68, 20);
			this->textBox3->TabIndex = 7;
			this->textBox3->Text = L"4";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(796, 243);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(97, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Точность метода:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(899, 240);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 9;
			this->textBox4->Text = L"1e-12";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(942, 80);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBox5->Size = System::Drawing::Size(57, 20);
			this->textBox5->TabIndex = 10;
			this->textBox5->Text = L"-1";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(942, 106);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(57, 20);
			this->textBox6->TabIndex = 11;
			this->textBox6->Text = L"1";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(942, 129);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(57, 20);
			this->textBox7->TabIndex = 12;
			this->textBox7->Text = L"-1";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(942, 155);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(57, 20);
			this->textBox8->TabIndex = 13;
			this->textBox8->Text = L"1";
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox8_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(920, 158);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(16, 13);
			this->label5->TabIndex = 14;
			this->label5->Text = L"d:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(920, 132);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(16, 13);
			this->label6->TabIndex = 15;
			this->label6->Text = L"c:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(920, 106);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(16, 13);
			this->label7->TabIndex = 16;
			this->label7->Text = L"b:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(920, 82);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(16, 13);
			this->label8->TabIndex = 17;
			this->label8->Text = L"a:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(814, 51);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(99, 13);
			this->label9->TabIndex = 20;
			this->label9->Text = L"u(x,y)= 1 - x^2 - y^2\r\n";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Задача 1", L"Задача 2" });
			this->comboBox1->Location = System::Drawing::Point(817, 12);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(108, 21);
			this->comboBox1->TabIndex = 21;
			this->comboBox1->Text = L"Задача 1";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(895, 321);
			this->textBox9->Name = L"textBox9";
			this->textBox9->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBox9->Size = System::Drawing::Size(104, 20);
			this->textBox9->TabIndex = 22;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(895, 347);
			this->textBox11->Name = L"textBox11";
			this->textBox11->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBox11->Size = System::Drawing::Size(104, 20);
			this->textBox11->TabIndex = 24;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(783, 305);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(170, 13);
			this->label11->TabIndex = 25;
			this->label11->Text = L"Достигнутая точность решения:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(745, 350);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(144, 13);
			this->label12->TabIndex = 26;
			this->label12->Text = L"Число затраченных шагов:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1011, 585);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyForm";
			this->Text = L"Задача Дирихле";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (comboBox1->SelectedItem == "Задача 1")
		{
			dataGridView1->Show();
			if (f) {
				dataGridView1->Rows->Clear();
			}
			f++;
			n = atof(StringToSt(textBox3->Text).c_str());
			m = atof(StringToSt(textBox2->Text).c_str());
			NMAX = atof(StringToSt(textBox1->Text).c_str());
			toch = atof(StringToSt(textBox4->Text).c_str());
			double a1, b1, c1, d1;
			a1 = atof(StringToSt(textBox5->Text).c_str());
			b1 = atof(StringToSt(textBox6->Text).c_str());
			c1 = atof(StringToSt(textBox7->Text).c_str());
			d1 = atof(StringToSt(textBox8->Text).c_str());
			_init(NMAX, a1, b1, c1, d1, n, m, toch);
			
				edge(xni, yni);
		
			zeidel();
			dataGridView1->ColumnCount = (int)n + 1;
			for (int r = 0; r < m + 1; r++)
			{
				DataGridViewRow^ row = gcnew DataGridViewRow;
				row->CreateCells(this->dataGridView1);
				for (int c = 0; c < n + 1; c++)
				{
					row->Cells[c]->Value = get_v(c, r).ToString("0.000");
				}
				dataGridView1->Rows->Add(row);
			}
			textBox11->Text = Convert::ToString(S);
			textBox9->Text = eps_max.ToString("0.000E0");
		}
		
		if (comboBox1->SelectedItem == "Задача 2")
		{
			dataGridView1->Show();
			if (f) {
				dataGridView1->Rows->Clear();
			}
			f++;
			n = atof(StringToSt(textBox3->Text).c_str());
			m = atof(StringToSt(textBox2->Text).c_str());
			NMAX = atof(StringToSt(textBox1->Text).c_str());
			toch = atof(StringToSt(textBox4->Text).c_str());
			double a2, b2, c2, d2;
			a2 = atof(StringToSt(textBox5->Text).c_str());
			b2 = atof(StringToSt(textBox6->Text).c_str());
			c2 = atof(StringToSt(textBox7->Text).c_str());
			d2 = atof(StringToSt(textBox8->Text).c_str());

			_init(NMAX, a2, b2, c2, d2, n, m, toch);
			
			edge_2(xni, yni);
			zeidel();
			
			dataGridView1->ColumnCount = (int)n + 1;
			for (int r = 0; r < m + 1; r++)
			{
				DataGridViewRow^ row = gcnew DataGridViewRow;
				row->CreateCells(this->dataGridView1);
				for (int c = 0; c < n + 1; c++)
				{
					row->Cells[c]->Value = get_v(c, r).ToString("0.000");
				}
				dataGridView1->Rows->Add(row);
			}
			textBox11->Text = Convert::ToString(S);
			textBox9->Text = eps_max.ToString("0.000E0");
		}

	}


private: System::Void textBox8_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (comboBox1->SelectedItem == "Задача 1")
	{
		label9->Text ="u(x, y) = 1 - x ^ 2 - y ^ 2";
		textBox5->Text = "-1";
		textBox6->Text = "1";
		textBox7->Text = "-1";
		textBox8->Text = "1";
	}
	if (comboBox1->SelectedItem == "Задача 2")
	{
		label9->Text = "u(x, y) = 1 - (x - 1) ^ 2 - (y - 0.5) ^ 2";
		textBox5->Text = "0";
		textBox6->Text = "2";
		textBox7->Text = "0";
		textBox8->Text = "1";
	}
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}
private: System::Void label10_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
