#pragma once
#include <cmath>
#include <vector>

//using namespace std;

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::TextBox^  textBox1;
	protected:
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::DataGridView^  dataGridView1;



	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;






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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(131, 51);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"4";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(280, 51);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 1;
			this->textBox2->Text = L"-7";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(429, 49);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 2;
			this->textBox3->Text = L"8";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(578, 49);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 3;
			this->textBox4->Text = L"-23";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(131, 123);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 4;
			this->textBox5->Text = L"2";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(280, 121);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 22);
			this->textBox6->TabIndex = 5;
			this->textBox6->Text = L"-4";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(429, 121);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 22);
			this->textBox7->TabIndex = 6;
			this->textBox7->Text = L"5";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(578, 121);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 22);
			this->textBox8->TabIndex = 7;
			this->textBox8->Text = L"-13";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(131, 202);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 22);
			this->textBox9->TabIndex = 8;
			this->textBox9->Text = L"-3";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(280, 202);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 22);
			this->textBox10->TabIndex = 9;
			this->textBox10->Text = L"11";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(429, 199);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(100, 22);
			this->textBox11->TabIndex = 10;
			this->textBox11->Text = L"1";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(578, 197);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(100, 22);
			this->textBox12->TabIndex = 11;
			this->textBox12->Text = L"16";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(53, 283);
			this->textBox13->Multiline = true;
			this->textBox13->Name = L"textBox13";
			this->textBox13->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox13->Size = System::Drawing::Size(678, 531);
			this->textBox13->TabIndex = 12;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(281, 243);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(253, 34);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Розв\'язати першим методом";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Enabled = false;
			this->checkBox1->Location = System::Drawing::Point(1167, 76);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(135, 21);
			this->checkBox1->TabIndex = 14;
			this->checkBox1->Text = L"Не округлювати";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(237, 56);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 17);
			this->label1->TabIndex = 15;
			this->label1->Text = L"X1 +";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(386, 54);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 17);
			this->label2->TabIndex = 16;
			this->label2->Text = L"X2 +";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(535, 54);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 17);
			this->label3->TabIndex = 17;
			this->label3->Text = L"X3 =";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(237, 126);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(37, 17);
			this->label4->TabIndex = 18;
			this->label4->Text = L"X1 +";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(386, 121);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(37, 17);
			this->label5->TabIndex = 19;
			this->label5->Text = L"X2 +";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(535, 126);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(37, 17);
			this->label6->TabIndex = 20;
			this->label6->Text = L"X3 =";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(237, 202);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(37, 17);
			this->label7->TabIndex = 21;
			this->label7->Text = L"X1 +";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(386, 197);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(37, 17);
			this->label8->TabIndex = 22;
			this->label8->Text = L"X2 +";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(535, 205);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(37, 17);
			this->label9->TabIndex = 23;
			this->label9->Text = L"X3 =";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToOrderColumns = true;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Column1 });
			this->dataGridView1->Location = System::Drawing::Point(735, 68);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(599, 155);
			this->dataGridView1->TabIndex = 24;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			this->dataGridView1->DoubleClick += gcnew System::EventHandler(this, &MyForm::dataGridView1_DoubleClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"x1";
			this->Column1->Name = L"Column1";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(867, 31);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(100, 22);
			this->textBox14->TabIndex = 25;
			this->textBox14->Leave += gcnew System::EventHandler(this, &MyForm::textBox14_Leave);
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(1202, 31);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(100, 22);
			this->textBox15->TabIndex = 26;
			this->textBox15->Leave += gcnew System::EventHandler(this, &MyForm::textBox15_Leave);
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(747, 283);
			this->textBox16->Multiline = true;
			this->textBox16->Name = L"textBox16";
			this->textBox16->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox16->Size = System::Drawing::Size(599, 531);
			this->textBox16->TabIndex = 27;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(969, 243);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(253, 34);
			this->button2->TabIndex = 28;
			this->button2->Text = L"Розв\'язати другим методом";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(738, 34);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(123, 17);
			this->label10->TabIndex = 29;
			this->label10->Text = L"Кількість рівнянь:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(1057, 34);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(139, 17);
			this->label11->TabIndex = 30;
			this->label11->Text = L"Кількість невідомих:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1358, 873);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"Рішення системи лінійних алгебраїчних рівнянь методом Жордана - Гаусса";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		void VivodYravn(std::vector<double> &m1, std::vector<double> &m2, std::vector<double> &m3) {
			textBox13->Text += " | " + round(m1[0] * 100) / 100 + " " + round(m1[1] * 100) / 100 +
				" " + round(m1[2] * 100) / 100 + " " + " | " + round(m1[3] * 100) / 100 + "\r\n";

			textBox13->Text += " | " + round(m2[0] * 100) / 100 + " " + round(m2[1] * 100) / 100 +
				" " + round(m2[2] * 100) / 100 + " " + " | " + round(m2[3] * 100) / 100 + "\r\n";

			textBox13->Text += " | " + round(m3[0] * 100) / 100 + " " + round(m3[1] * 100) / 100 +
				" " + round(m3[2] * 100) / 100 + " " + " | " + round(m3[3] * 100) / 100 + "\r\n";

		}

		void VivodYravn2(std::vector<std::vector<double> > &mas4) {

			for (int i = 0; i < dataGridView1->RowCount; i++) {
				textBox16->Text += "| ";

				for (int j = 0; j < dataGridView1->ColumnCount; j++) {
					if (j == dataGridView1->ColumnCount - 1) {
						textBox16->Text += "| ";
					}
					textBox16->Text += mas4[i][j] + "  ";
				}
				textBox16->Text += "\r\n";
			}
			textBox16->Text += "\r\n";

		}

		void delMas(std::vector<double> &masiv, double delitel) {

			for (size_t i = 0; i <= masiv.size() - 1; i++) {
					masiv[i] = masiv[i] / delitel;
			}
		}

		void delMas2(std::vector<std::vector<double> > &mas4, int chislo) {

			std::vector<double> mas5(dataGridView1->RowCount);

			for (int i = 0; i < dataGridView1->RowCount; i++) {
				mas5[i] = mas4[i][chislo - 1];
			}

			double now = mas5[chislo - 1];
			textBox16->Text += "Ділимо " + chislo + " рядок на " + now + "\r\n" + "\r\n";

			for (int i = 0; i < dataGridView1->ColumnCount; i++) {
				mas4[chislo - 1][i] = mas4[chislo - 1][i] / now;
			}

			VivodYravn2(mas4);
		}

		void minysMas(std::vector<double> &massiv2, std::vector<double> &massiv1, double chislo) {
			for (size_t i = 0; i <= massiv1.size() - 1; i++) {
					massiv2[i] = massiv2[i] - (massiv1[i] * chislo);
			}
		}

		void minysMas2(std::vector<std::vector<double> > &mas4, int chislo) {

			std::vector<double> mas5(dataGridView1->RowCount);

			for (int i = 0; i < dataGridView1->RowCount; i++) {
				mas5[i] = mas4[i][chislo - 1];
			}

			double now = mas5[chislo - 1];

			for (int i = 0; i < dataGridView1->RowCount; i++) {
				if (i == (chislo - 1)) { continue; }
				else {
					textBox16->Text += "З " + (i+1) + " рядка віднімаємо відповідні елементи " + chislo + " рядка, помножені на " + mas5[i] + "\r\n" + "\r\n";
					for (int j = 0; j < dataGridView1->ColumnCount; j++) {
						mas4[i][j] = mas4[i][j] - (mas5[i] * mas4[chislo - 1][j]);
					}
					VivodYravn2(mas4);
				}
			}
		}


		void perestanovka(std::vector<double> &m1, std::vector<double> &m2, std::vector<double> &m3, int chislo) {
			double x1 = abs(m1[chislo-1]);
			double x2 = abs(m2[chislo-1]);
			double x3 = abs(m3[chislo-1]);
			if (chislo == 1) {
				if (x2 < x1) {
					textBox13->Text += "\r\n" + "Так як другий елемент першого стовпця ближче до 0, то міняємо місцями перший та другий рядки" + "\r\n" + "\r\n";
					m1.swap(m2);
					VivodYravn(m1, m2, m3);
				}
				else if (x3 < x1) {
					textBox13->Text += "\r\n" + "Так як третій елемент першого стовпця ближче до 0, то міняємо місцями перший та третій рядки" + "\r\n" + "\r\n";
					m1.swap(m3);
					VivodYravn(m1, m2, m3);
				}
				else {
					textBox13->Text += "\r\n" + "Перестановка не потрібна" + "\r\n";
				}
			}
			else if (chislo == 2) {
				if (x3 < x2) {
					textBox13->Text += "\r\n" + "Так як третій елемент другого стовпця ближче до 0, то міняємо місцями другий та третій рядки" + "\r\n" + "\r\n";
					m2.swap(m3);
					VivodYravn(m1, m2, m3);
				}
			}
		}

		void perestanovka2(std::vector<std::vector<double> > &mas4, int chislo) {

			std::vector<double> mas5(dataGridView1->RowCount);

			for (int i = 0; i < dataGridView1->RowCount; i++) {
				mas5[i] = mas4[i][chislo - 1]; 
			}

			double now = abs(mas5[chislo - 1]);
			int counter = -1;

			for (size_t i = (chislo - 1); i < mas5.size(); i++) {
				if ((abs(mas5[i]) < now) && (i != (chislo - 1))) {
					now = abs(mas5[i]);
					counter = i;
				}
			}

			if (counter != -1) {
				textBox16->Text += "Так як " + (counter + 1) + " елемент " + counter + " рядка ближче до 0, то міняємо місцями "
					+ chislo + " та " + (counter + 1) + " рядки." + "\r\n" + "\r\n";

				std::vector<double> mas6(dataGridView1->ColumnCount);
				for (size_t i = 0; i < mas6.size(); i++) {
					mas6[i] = mas4[counter][i];
				}

				for (int i = 0; i < dataGridView1->ColumnCount; i++) {
					mas4[counter][i] = mas4[chislo - 1][i];
				}

				for (int i = 0; i < dataGridView1->ColumnCount; i++) {
					mas4[chislo - 1][i] = mas6[i];
				}
				
				VivodYravn2(mas4);
			}
			else {
				textBox16->Text += "Перестановка не потрібна." + "\r\n" + "\r\n";
			}
		}

			void gayss3() {
				std::vector<double> mas1{ System::Convert::ToDouble(textBox1->Text), System::Convert::ToDouble(textBox2->Text), System::Convert::ToDouble(textBox3->Text), System::Convert::ToDouble(textBox4->Text) };
				std::vector<double> mas2{ System::Convert::ToDouble(textBox5->Text), System::Convert::ToDouble(textBox6->Text), System::Convert::ToDouble(textBox7->Text), System::Convert::ToDouble(textBox8->Text) };
				std::vector<double> mas3{ System::Convert::ToDouble(textBox9->Text), System::Convert::ToDouble(textBox10->Text), System::Convert::ToDouble(textBox11->Text), System::Convert::ToDouble(textBox12->Text) };

				for (size_t i = 0; i < mas1.size()-1; i++) {
					if (mas1[i] == 0 || mas2[i] == 0 || mas3[i] == 0) {
						exit(1);
					}
				}

				textBox13->Text = "На данний момент матриця має вигляд:" + "\r\n";

				VivodYravn(mas1, mas2, mas3);

				perestanovka(mas1, mas2, mas3, 1);

				textBox13->Text += "\r\n" + "Ділимо 1 рядок на " + mas1[0] + "\r\n" + "\r\n";

				delMas(mas1, mas1[0]);

				VivodYravn(mas1, mas2, mas3);

				textBox13->Text += "\r\n" + "Нулюемо всі елементи(крім першого) 1 стовпця:";
				textBox13->Text += "\r\n" + "З другого рядка віднімаємо відповідні елементи першого рядка, помножені на " + mas2[0] + "\r\n" + "\r\n";

				minysMas(mas2, mas1, mas2[0]);

				VivodYravn(mas1, mas2, mas3);

				textBox13->Text += "\r\n" + "З третього рядка віднімаємо відповідні елементи першого рядка, помножені на " + mas3[0] + "\r\n" + "\r\n";

				minysMas(mas3, mas1, mas3[0]);

				VivodYravn(mas1, mas2, mas3);

				perestanovka(mas1, mas2, mas3, 2);

				textBox13->Text += "\r\n" + "Ділимо 2 рядок на " + mas2[1] + "\r\n" + "\r\n";

				delMas(mas2, mas2[1]);

				VivodYravn(mas1, mas2, mas3);

				textBox13->Text += "\r\n" + "Нулюемо всі елементи(крім другого) 2 стовпця:";
				textBox13->Text += "\r\n" + "З першого рядка віднімаємо відповідні елементи другого рядка, помножені на " + mas1[1] + "\r\n" + "\r\n";

				minysMas(mas1, mas2, mas1[1]);

				VivodYravn(mas1, mas2, mas3);

				textBox13->Text += "\r\n" + "З третього рядка віднімаємо відповідні елементи другого рядка, помножені на " + mas3[1] + "\r\n" + "\r\n";

				minysMas(mas3, mas2, mas3[1]);

				VivodYravn(mas1, mas2, mas3);

				textBox13->Text += "\r\n" + "Ділимо 3 рядок на " + mas3[2] + "\r\n" + "\r\n";

				delMas(mas3, mas3[2]);

				VivodYravn(mas1, mas2, mas3);

				textBox13->Text += "\r\n" + "Нулюемо всі елементи(крім третього) 3 стовпця:";
				textBox13->Text += "\r\n" + "З першого рядка віднімаємо відповідні елементи третього рядка, помножені на " + mas1[2] + "\r\n" + "\r\n";

				minysMas(mas1, mas3, mas1[2]);

				VivodYravn(mas1, mas2, mas3);

				textBox13->Text += "\r\n" + "З другого рядка віднімаємо відповідні елементи третього рядка, помножені на " + mas2[2] + "\r\n" + "\r\n";

				minysMas(mas2, mas3, mas2[2]);

				VivodYravn(mas1, mas2, mas3);

				textBox13->Text += "\r\n" + "Відповіді: " + "\r\n" + "\r\n";

				textBox13->Text += " X1 = " + round(mas1[3] * 100) / 100 + "\r\n";

				textBox13->Text += " X2 = " + round(mas2[3] * 100) / 100 + "\r\n";

				//int f1 = mas1[3];
				//int c1 = mas1[2];
				//int x3 = mas3[3];
				//int b1 = mas1[1];
				//int x2 = mas2[3] - mas3[3] * mas2[2];
				//int x1 = f1 - c1 * x3 - b1 * x2;

				textBox13->Text += " X3 = " + round(mas3[3] * 100) / 100 + "\r\n";
			}
#pragma endregion
	
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		gayss3();
	}	
private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}
private: System::Void dataGridView1_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void textBox15_Leave(System::Object^  sender, System::EventArgs^  e) {

	while (1 != dataGridView1->ColumnCount) {
		dataGridView1->Columns->RemoveAt(0);
	}

	for (int i = 0; i < System::Convert::ToInt32(textBox15->Text)-1; i++) {
		if (dataGridView1->ColumnCount == System::Convert::ToInt32(textBox15->Text)-1) {
			dataGridView1->Columns->Add("", "Права частина");
		}
		else {
			dataGridView1->Columns->Add("", "x" + (i + 2));
		}
	}
}

private: System::Void textBox14_Leave(System::Object^  sender, System::EventArgs^  e) {

	dataGridView1->Rows->Add("", "");

	while (1 != dataGridView1->RowCount) {
		dataGridView1->Rows->RemoveAt(0);
	}

	for (int i = 0; i < System::Convert::ToInt32(textBox14->Text) - 1; i++) {
			dataGridView1->Rows->Add("", "");
	}
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

	textBox16->Text = "";

	std::vector<std::vector<double> > mas4;
	mas4.resize(dataGridView1->RowCount);

	for (int i = 0; i < dataGridView1->RowCount; ++i) {
		mas4[i].resize(dataGridView1->ColumnCount);

		for (int j = 0; j < dataGridView1->ColumnCount; j++) {
			mas4[i][j] = System::Convert::ToDouble(dataGridView1->Rows[i]->Cells[j]->Value);
		}
	}

	VivodYravn2(mas4);

	for (int i = 1; i <= dataGridView1->RowCount; i++) {
		perestanovka2(mas4, i);
		delMas2(mas4, i);
		minysMas2(mas4, i);
		textBox16->Text += "//-----------------------------------------------------------------------------------------------------------------------" + "\r\n" + "\r\n";
	}

	textBox16->Text += "Відповіді:" + "\r\n" + "\r\n";

	for (int i = 0; i < dataGridView1->RowCount; i++) {
		textBox16->Text += "X" + (i + 1) + " = " + mas4[i][mas4.size()] + "\r\n";
	}
}

};
	}
