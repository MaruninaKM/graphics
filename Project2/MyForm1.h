#pragma once
#include "MyForm2.h"
#include "MyForm3.h"
#include "MyForm4.h"
#include "MyForm5.h"
#include "MyForm6.h"
#include "MyForm7.h"
#include "MyForm8.h"
#include "MyForm9.h"

#include <iostream>
#include <vector>
#include <cmath>
#include <math.h>
#include <vector>
#include <list>
#include <cliext/vector>
#define _USE_MATH_DEFINES

namespace Project2 {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm1
	/// </summary>

/*	public ref class Inizial {
	private:
		cli::array<PointF>^ points; // Массив точек
		 int cols = 2;
		 int rows = 9;
		int matrix[rows][cols] = { {20, 50},{30, 50},{40, 30},{50, 40},{60, 30},{70, 50},{80, 50},{70, 10},{30, 10} };
		
	public:
		// Конструктор класса
		Inizial()
		{
			points = gcnew cli::array<PointF>(rows + 1); // Создаем массив точек с дополнительным местом для замыкания многоугольника

			// Инициализация точек
			for (int i = 0; i < rows; i++) {
				points[i] = PointF(matrix[i][0], matrix[i][1]);
			}
			points[rows] = PointF(matrix[0][0], matrix[0][1]); // Замыкание многоугольника
		}

		// Метод для получения массива точек
		cli::array<PointF>^ GetPoints()
		{
			return points;
		}

		// Метод для получения матрицы
		cli::array<int, 2>^ Matrix()
		{
			cli::array<int, 2>^ matrixArray = gcnew cli::array<int, 2>(rows, cols);
			for (int i = 0; i < rows; i++) {
				for (int j = 0; j < cols; j++) {
					matrixArray[i, j] = matrix[i][j];
				}
			}
			return matrixArray;
		}
	};
*/


	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::TextBox^ textBox3;



	private: System::Windows::Forms::Panel^ panel3;



	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::PictureBox^ pictureBox4;

	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox6;

	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox2;







	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::ComponentModel::IContainer^ components;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


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
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel3->SuspendLayout();
			this->panel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->panel7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(66, 93);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(205, 34);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Окружность";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(66, 133);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(205, 34);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Эллипс";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(66, 173);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(205, 34);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Парабола";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(66, 213);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(205, 34);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Гипербола";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm1::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(66, 253);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(205, 34);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Круговая спираль";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm1::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(66, 293);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(205, 34);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Кубический сплайн";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm1::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(66, 333);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(205, 34);
			this->button7->TabIndex = 6;
			this->button7->Text = L"Нормал. кубич. сплайн";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm1::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(66, 373);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(205, 58);
			this->button8->TabIndex = 7;
			this->button8->Text = L"Параболич. интерполяция";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm1::button8_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(112, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(122, 29);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Задача 1";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->button8);
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(328, 497);
			this->panel1->TabIndex = 11;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(62, 41);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(232, 40);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Изучить методы построения \r\nпараметрических кривых.";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->panel2->Controls->Add(this->textBox5);
			this->panel2->Controls->Add(this->textBox6);
			this->panel2->Controls->Add(this->textBox4);
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Controls->Add(this->textBox1);
			this->panel2->Controls->Add(this->panel5);
			this->panel2->Controls->Add(this->panel4);
			this->panel2->Controls->Add(this->textBox3);
			this->panel2->Controls->Add(this->button10);
			this->panel2->Controls->Add(this->button9);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Location = System::Drawing::Point(358, 12);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(696, 497);
			this->panel2->TabIndex = 13;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(251, 354);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox5->Size = System::Drawing::Size(109, 124);
			this->textBox5->TabIndex = 25;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(366, 354);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox6->Size = System::Drawing::Size(109, 124);
			this->textBox6->TabIndex = 24;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(128, 354);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox4->Size = System::Drawing::Size(117, 124);
			this->textBox4->TabIndex = 22;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(481, 354);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox2->Size = System::Drawing::Size(109, 124);
			this->textBox2->TabIndex = 21;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(596, 137);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(80, 341);
			this->textBox1->TabIndex = 18;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::SystemColors::ControlDark;
			this->panel5->Controls->Add(this->pictureBox2);
			this->panel5->Location = System::Drawing::Point(298, 137);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(278, 211);
			this->panel5->TabIndex = 16;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(3, 6);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(261, 202);
			this->pictureBox2->TabIndex = 16;
			this->pictureBox2->TabStop = false;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::ControlDark;
			this->panel4->Controls->Add(this->pictureBox1);
			this->panel4->Location = System::Drawing::Point(13, 137);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(278, 211);
			this->panel4->TabIndex = 14;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(6, 6);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(264, 199);
			this->pictureBox1->TabIndex = 15;
			this->pictureBox1->TabStop = false;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(13, 354);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox3->Size = System::Drawing::Size(109, 124);
			this->textBox3->TabIndex = 20;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(297, 90);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(264, 41);
			this->button10->TabIndex = 14;
			this->button10->Text = L"Система точек + сплайн:";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm1::button10_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(27, 89);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(264, 42);
			this->button9->TabIndex = 13;
			this->button9->Text = L"Система точек:";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm1::button9_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(3, 43);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(573, 40);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Запрограммировать построение кубического сплайна (в 2D) для системы\r\n            "
				L"                                           точек (x,y):";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(238, 12);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(122, 29);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Задача 2";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->panel3->Controls->Add(this->panel6);
			this->panel3->Controls->Add(this->panel7);
			this->panel3->Controls->Add(this->button11);
			this->panel3->Controls->Add(this->button12);
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->label6);
			this->panel3->Location = System::Drawing::Point(242, 529);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(591, 366);
			this->panel3->TabIndex = 24;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::SystemColors::ControlDark;
			this->panel6->Controls->Add(this->pictureBox4);
			this->panel6->Location = System::Drawing::Point(298, 137);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(278, 211);
			this->panel6->TabIndex = 16;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Location = System::Drawing::Point(3, 6);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(264, 199);
			this->pictureBox4->TabIndex = 15;
			this->pictureBox4->TabStop = false;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::SystemColors::ControlDark;
			this->panel7->Controls->Add(this->pictureBox3);
			this->panel7->Location = System::Drawing::Point(13, 137);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(278, 211);
			this->panel7->TabIndex = 14;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(14, 6);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(261, 202);
			this->pictureBox3->TabIndex = 16;
			this->pictureBox3->TabStop = false;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(298, 91);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(264, 41);
			this->button11->TabIndex = 14;
			this->button11->Text = L"Нормализ. аппроксимация:";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm1::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(28, 90);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(264, 42);
			this->button12->TabIndex = 13;
			this->button12->Text = L"Хордовая аппроксимация:";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm1::button12_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(91, 42);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(409, 40);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Изменить алгоритм для случия нормализованной и \r\n                       хордовой "
				L"аппроксимации:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(239, 13);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(122, 29);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Задача 3";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1066, 907);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel6->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->panel7->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		
		cli::array<PointF>^ Spline(Graphics^ g, cli::array<PointF>^ points) {
			int n = points->Length;
			// Разности h
			cli::array<double>^ h = gcnew cli::array<double>(n); // разности или массив поддиагональных элементов
			// Вычисление коэффициентов alpha
			cli::array<double>^ alpha = gcnew cli::array<double>(n);
			// Прямой ход метода прогонки
			cli::array<double>^ diagonal = gcnew cli::array<double>(n); // массив элементов главной диагонали
			cli::array<double>^ over_diagonal = gcnew cli::array<double>(n); // массив элементов над диагонали
			cli::array<double>^ z = gcnew cli::array<double>(n); //
		
			// Вычисление разностей h
			for (int i = 1; i < n; i++) {
				h[i] = points[i].X - points[i - 1].X;
			}
			// Добавление разности h для замыкающегося сплайна
			h[n - 1] = points[0].X - points[n - 2].X;

			// Вычисление коэффициентов alpha
			for (int i = 1; i < n - 1; i++) {
				if (h[i] < 0)
					alpha[i] = 3.0 * ((points[i + 1].Y - points[i].Y) / fabs(h[i + 1]) - (points[i].Y - points[i - 1].Y) / fabs(h[i]));
				else alpha[i] = 3.0 * ((points[i + 1].Y - points[i].Y) / h[i + 1] - (points[i].Y - points[i - 1].Y) / h[i]);

				if (h[i + 1] * h[i] < 0)
					alpha[i] = alpha[i] * (-1);
			}

			// Добавление коэффициентов alpha для замыкающегося сплайна	
			alpha[0] = 3.0 * ((points[1].Y - points[0].Y) / fabs(h[1]) - (points[0].Y - points[n - 2].Y) / fabs(h[n - 1]));
			alpha[n - 1] = 3.0 * ((points[1].Y - points[n - 1].Y) / fabs(h[1]) - (points[n - 1].Y - points[n - 2].Y) / fabs(h[n - 1]));

			// Прямой ход метода прогонки
			diagonal[0] = 2.0 * (fabs(h[0]) + fabs(h[n - 1])); // Используем функцию fabs для получения абсолютного значения разностей h
			over_diagonal[0] = 0.5;
			z[0] = alpha[0] / diagonal[0];

			for (int i = 1; i < n - 1; i++) {
				diagonal[i] = 2.0 * (fabs(h[i]) + fabs(h[i + 1])) - fabs(h[i]) * over_diagonal[i - 1];
				over_diagonal[i] = fabs(h[i + 1]) / diagonal[i];
				z[i] = (alpha[i] - fabs(h[i]) * z[i - 1]) / diagonal[i];
			}

			diagonal[n - 1] = fabs(h[n - 1]) * (2.0 - over_diagonal[n - 2]);
			z[n - 1] = (alpha[n - 1] - fabs(h[n - 1]) * z[n - 2]) / diagonal[n - 1];

			// Обратный ход метода прогонки
			cli::array<double>^ c = gcnew cli::array<double>(n);
			cli::array<double>^ b = gcnew cli::array<double>(n);
			cli::array<double>^ d = gcnew cli::array<double>(n);

			c[0] = 0;		// Граничное условие второй производной в начальной точке
			c[n - 2] = 0;	// Граничное условие второй производной в конечной точке

			// Обратный ход метода прогонки
			for (int j = n - 2; j >= 0; j--) {
				c[j] = z[j] - over_diagonal[j] * c[j + 1];

				if (j == 0) {
					b[j] = (points[j + 1].Y - points[j].Y) / h[j + 1] - (h[j + 1] / 3.0) * (c[j + 1] + 2.0 * c[j]);
					d[j] = (c[j + 1] - c[j]) / (3.0 * h[j + 1]);
				}
				else {
					b[j] = (points[j + 1].Y - points[j].Y) / h[j + 1] - (h[j + 1] / 3.0) * (c[j + 1] + 2.0 * c[j]);
					d[j] = (c[j + 1] - c[j]) / (3.0 * h[j + 1]);
				}
			}
			// Проверка непрерывности первой и второй производных
			double epsilon = 1e-6; // Погрешность сравнения вещественных чисел

			for (int i = 0; i < n - 1; i++) {
				double x0 = points[i].X;
				double x1 = points[i + 1].X;
				double h_i = x1 - x0;
				double Psplin1 = b[i] + 2 * c[i] * (x0 + h_i) + 3 * d[i] * (x0 + h_i) * (x0 + h_i);
				double Psplin2 = b[i + 1] + 2 * c[i + 1] * x0 + 3 * d[i + 1] * x0 * x0;
				double PPsplin1 = 2 * c[i] + 6 * d[i] * (x0 + h_i);
				double PPsplin2 = 2 * c[i + 1] + 6 * d[i + 1] * x0;

				if ((Math::Abs(Psplin1 - Psplin2) > epsilon) || (Math::Abs(PPsplin1 - PPsplin2) > epsilon)) {
					float y0 = (float)(points[i].Y + b[i] * h_i + c[i] * h_i * h_i + d[i] * h_i * h_i * h_i);
					float y1 = (float)(points[(i + 1) % n].Y + 0);
					g->DrawLine(Pens::Blue, (float)x0, y0, (float)x0, y1);
				}
			}
			// Вывод значений  
			textBox3->Text = "Массив h:\r\n";
			for (int i = 0; i < n; i++) {
				textBox3->Text += Math::Round(h[i], 4).ToString() + "\r\n";
			}
			textBox4->Text += "Массив alpha:\r\n";
			for (int i = 0; i < n; i++) {
				textBox4->Text += Math::Round(alpha[i], 4).ToString() + "\r\n";
			}
			textBox5->Text += "Массив c:\r\n ";
			for (int i = 0; i < n; i++) {
				textBox5->Text += Math::Round(c[i], 4).ToString() + "\r\n";
			}
			textBox6->Text += "Массив b:\r\n ";
			for (int i = 0; i < n; i++) {
				textBox6->Text += Math::Round(b[i], 4).ToString() + "\r\n";
			}
			textBox2->Text += "Массив d:\r\n ";
			for (int i = 0; i < n; i++) {
				textBox2->Text += Math::Round(d[i], 4).ToString() + "\r\n";
			}
			System::Collections::Generic::List<PointF>^ spisok = gcnew System::Collections::Generic::List<PointF>(); //коллекция точек графика
			int count = 0;
			//cli::array<PointF>^ def = gcnew cli::array<PointF>(n);
			// Построение сплайна
			for (int j = 0; j < n; j++) {
				double x0 = points[j].X;
				double x1 = points[(j + 1) % n].X;
				double xi = points[j].X;

				for (double tpar = 0; tpar <= 1; tpar += 0.01) {
					double x = x0 + (x1 - x0) * tpar;
					double t = (x - xi);
					double y = points[j].Y + b[j] * t + c[j] * pow(t, 2) + d[j] * pow(t, 3);

					//def[j] = PointF(x, y);
					spisok->Add(PointF(x, y)); //добавляем точку в коллекцию. 
					//count++;
					g->FillRectangle(Brushes::Black, (float)x, (float)y, 2.0f, 2.0f);
				}
			}
			cli::array<PointF>^ def = gcnew cli::array<PointF>(25);
			
			int defIndex = 0;
			for (int p = 0; p < spisok->Count; p = p + 52) {
				def[defIndex] = spisok[p];
				defIndex++;
			}
			
			return def;
		}


void Hord_Spline(Graphics^ g, cli::array<PointF>^ points) {
	int numSegments = 2; // Количество сегментов на каждой хорде
	System::Collections::Generic::List<PointF>^ spisok = gcnew System::Collections::Generic::List<PointF>(); //коллекция точек графика
	cli::array<PointF>^ def = gcnew cli::array<PointF>(49);
	// Построение сплайна с использованием хордовой аппроксимации
	for (int i = 0; i < points->Length - 1; i++) {
		PointF P1 = points[i];
		PointF P2 = points[i + 1];

		double slope = (P2.Y - P1.Y) / (P2.X - P1.X);

		for (int j = 0; j < numSegments-1; j++) {
			double t = static_cast<double>(j) / numSegments;

			double x = P1.X + t * (P2.X - P1.X);
			double y = P1.Y + slope * (x - P1.X);
			spisok->Add(PointF(x, y)); //добавляем точку в коллекцию. 
			g->FillRectangle(Brushes::Red, (float)x, (float)y, 3.0f, 3.0f);
		}
		int defIndex = 0;
		for (int p = 1; p < spisok->Count; p++) {
			def[defIndex] = spisok[p];
			defIndex++;
		}
	}
	//points[def->Length-1] = def[0]; // первую точку в конец массива
	g->DrawLines(Pens::Yellow, def);
}

void Normal_Spline(Graphics^ g, cli::array<PointF>^ points) {
	int numSegments = 10; // Количество сегментов для интерполяции

	// Проверка на количество точек
	if (points->Length < 2) {
		// Недостаточно точек для построения сплайна
		return;
	}
	// Создание коллекции точек сплайна
	System::Collections::Generic::List<PointF>^ splinePoints = gcnew System::Collections::Generic::List<PointF>();

	// Построение сплайна
	for (int i = 0; i < points->Length - 1; i++) {
		PointF P1 = points[i];
		PointF P2 = points[i + 1];

		double dx = (P2.X - P1.X) / numSegments;

		for (int j = 0; j < numSegments; j++) {
			double x = P1.X + j * dx;
			double t = (x - P1.X) / (P2.X - P1.X);

			double h00 = 2 * pow(t, 3) - 3 * pow(t, 2) + 1;
			double h10 = pow(t, 3) - 2 * pow(t, 2) + t;
			double h01 = -2 * pow(t, 3) + 3 * pow(t, 2);
			double h11 = pow(t, 3) - pow(t, 2);

			double y = h00 * P1.Y + h10 * (P2.X - P1.X) * P1.Y + h01 * P2.Y + h11 * (P2.X - P1.X) * P2.Y;
			splinePoints->Add(PointF((float)x, (float)y));
			g->FillRectangle(Brushes::Red, (float)x, (float)y, 2.0f, 2.0f);
		}
	}
	// Добавление последней точки для замыкания сплайна
	splinePoints->Add(points[points->Length - 1]);
	// Отрисовка сплайна
	if (splinePoints->Count > 1) {
		cli::array<PointF>^ splineArray = splinePoints->ToArray();
	//	g->DrawLines(Pens::Blue, splineArray);
	}
}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm2^ f2 = gcnew MyForm2();
		f2->ShowDialog();
		//this->Hide();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm3^ f2 = gcnew MyForm3();
		f2->ShowDialog();
		//this->Hide();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm4^ f2 = gcnew MyForm4();
		f2->ShowDialog();
		//this->Hide();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm5^ f2 = gcnew MyForm5();
		f2->ShowDialog();
		//this->Hide();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm6^ f2 = gcnew MyForm6();
		f2->ShowDialog();
		//this->Hide();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	
		MyForm7^ f2 = gcnew MyForm7();
		f2->ShowDialog();
		//this->Hide();
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	
		MyForm8^ f2 = gcnew MyForm8();
		f2->ShowDialog();
		//this->Hide();
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm9^ f2 = gcnew MyForm9();
		f2->ShowDialog();
		//this->Hide();
}


private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {

	const int cols = 2, rows = 9;
	int matrix[rows][cols] = { {20, 50},{30, 50},{40, 30},{50, 40},{60, 30},{70, 50},{80, 50},{70, 10},{30, 10} };
	//"X: 20, 30, 40, 50, 60, 70, 80, 70, 30, 20 Y: 50, 50, 30, 40, 30, 50, 50, 10, 10, 50";

	textBox1->Text = "";
	textBox1->Text = "Точки:\r\n";
	for (auto& subnumbers : matrix) {
		for (int number: subnumbers) {
			textBox1->Text += Convert::ToString(number) + " ";
		}
		textBox1->Text += "" + "\r\n";
	}
		int unit = 10;
		int pW = pictureBox1->Width;
		int pH = pictureBox1->Height;
		Bitmap^ img = gcnew Bitmap(pW, pH); //создаем поверхность для рисования (изображение) с размером элемента управления PictureBox
		Graphics^ g = Graphics::FromImage(img); //создаем устройство для рисования на поверхности

		//рисуем сетку
		for (int i = 0; i < pW; i += unit)
			g->DrawLine(Pens::Aqua, i, 0, i, pH);
		for (int i = 0; i < pH; i += unit)
			g->DrawLine(Pens::Aqua, 0, i, pW, i);

		//линии осей с масштабированием 
		int mX = int(pW / 4 - pW / 4 % unit);
		int mY = int(pH * 3 / 4 - pH *3 / 4 % unit);

		g->DrawLine(Pens::Black, mX, 0, mX, pH); // Ось X
		g->DrawLine(Pens::Black, 0, mY, pW, mY); // Ось Y

		g->ScaleTransform(1, -1); //переворачиваем ось Y 
		g->TranslateTransform((double)mX, -(double)mY); //смещаем нулевую координату на пересечение осей
		
		// Задаем точки многоугольника
		cli::array<PointF>^ points = gcnew cli::array<PointF>(rows + 1);

		for (int i = 0; i < rows; i++) {
			points[i] = PointF(matrix[i][0], matrix[i][1]);
		}

		points[rows] = PointF(matrix[0][0], matrix[0][1]);

		g->DrawLines(Pens::Black, points);
		g->ScaleTransform(1,-1); //переворачиваем ось Y для удобства восприятия

		this->pictureBox1->Image = img;
}
	
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {

	const int cols = 2, rows = 12;
	int matrix[rows][cols] = { {20, 50},{30, 50},{40, 30},{50, 40},{60, 30},{70, 50},{80, 50},{70, 10},{60, 10},{50, 10}, {40, 10} ,{30, 10} };
	//const int cols = 2, rows = 9;
	//int matrix[rows][cols] = { {20, 50},{30, 50},{40, 30},{50, 40},{60, 30},{70, 50},{80, 50},{70, 10},{30, 10} };
	int unit = 10;
	int pW = pictureBox1->Width;
	int pH = pictureBox1->Height;
	Bitmap^ img = gcnew Bitmap(pW, pH); //создаем поверхность для рисования (изображение) с размером элемента управления PictureBox
	Graphics^ g = Graphics::FromImage(img); //создаем устройство для рисования на поверхности

	//рисуем сетку
	for (int i = 0; i < pW; i += unit)
		g->DrawLine(Pens::Aqua, i, 0, i, pH);
	for (int i = 0; i < pH; i += unit)
		g->DrawLine(Pens::Aqua, 0, i, pW, i);

	//линии осей с масштабированием 
	int mX = int(pW / 4 - pW / 4 % unit);
	int mY = int(pH * 3 / 4 - pH * 3 / 4 % unit);

	g->DrawLine(Pens::Black, mX, 0, mX, pH); // Ось X
	g->DrawLine(Pens::Black, 0, mY, pW, mY); // Ось Y

	g->ScaleTransform(1, -1); //переворачиваем ось Y 
	g->TranslateTransform((double)mX, -(double)mY); //смещаем нулевую координату на пересечение осей

	// Задаем точки многоугольника
	cli::array<PointF>^ points = gcnew cli::array<PointF>(rows + 1);

	for (int i = 0; i < rows; i++) {
		points[i] = PointF(matrix[i][0], matrix[i][1]);
	}

	points[rows] = PointF(matrix[0][0], matrix[0][1]);

	cli::array<PointF>^ poi = gcnew cli::array<PointF>(25);
	poi = Spline(g, points);
	g->ScaleTransform(1, -1); //переворачиваем ось Y для удобства восприятия
	delete g; //освобождение ресурсов устройства рисования
	this->pictureBox2->Image = img;
} 


private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	//const int cols = 2, rows = 12;
	//int matrix[rows][cols] = { {20, 50},{30, 50},{40, 30},{50, 40},{60, 30},{70, 50},{80, 50},{70, 10},{60, 10},{50, 10}, {40, 10} ,{30, 10} };
	const int cols = 2, rows = 9;
	int matrix[rows][cols] = { {20, 50},{30, 50},{40, 30},{50, 40},{60, 30},{70, 50},{80, 50},{70, 10},{30, 10} };
	int unit = 10;
	int pW = pictureBox1->Width;
	int pH = pictureBox1->Height;
	Bitmap^ img = gcnew Bitmap(pW, pH); //создаем поверхность для рисования (изображение) с размером элемента управления PictureBox
	Graphics^ g = Graphics::FromImage(img); //создаем устройство для рисования на поверхности

	//рисуем сетку
	for (int i = 0; i < pW; i += unit)
		g->DrawLine(Pens::Aqua, i, 0, i, pH);
	for (int i = 0; i < pH; i += unit)
		g->DrawLine(Pens::Aqua, 0, i, pW, i);

	//линии осей с масштабированием 
	int mX = int(pW / 4 - pW / 4 % unit);
	int mY = int(pH * 3 / 4 - pH * 3 / 4 % unit);

	g->DrawLine(Pens::Black, mX, 0, mX, pH); // Ось X
	g->DrawLine(Pens::Black, 0, mY, pW, mY); // Ось Y

	g->ScaleTransform(1, -1); //переворачиваем ось Y 
	g->TranslateTransform((double)mX, -(double)mY); //смещаем нулевую координату на пересечение осей

	// Задаем точки многоугольника
	cli::array<PointF>^ points = gcnew cli::array<PointF>(rows + 1);

	for (int i = 0; i < rows; i++) {
		points[i] = PointF(matrix[i][0], matrix[i][1]);
	}
	points[rows] = PointF(matrix[0][0], matrix[0][1]);

	cli::array<PointF>^ poi = gcnew cli::array<PointF>(25);
	poi = Spline(g, points);

	Hord_Spline(g, poi);
	g->ScaleTransform(1, -1); //переворачиваем ось Y для удобства восприятия
	delete g; //освобождение ресурсов устройства рисования
	this->pictureBox3->Image = img;

}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	//const int cols = 2, rows = 12;
	//int matrix[rows][cols] = { {20, 50},{30, 50},{40, 30},{50, 40},{60, 30},{70, 50},{80, 50},{70, 10},{60, 10},{50, 10}, {40, 10} ,{30, 10} };
	const int cols = 2, rows = 9;
	int matrix[rows][cols] = { {20, 50},{30, 50},{40, 30},{50, 40},{60, 30},{70, 50},{80, 50},{70, 10},{30, 10} };
	int unit = 10;
	int pW = pictureBox1->Width;
	int pH = pictureBox1->Height;
	Bitmap^ img = gcnew Bitmap(pW, pH); //создаем поверхность для рисования (изображение) с размером элемента управления PictureBox
	Graphics^ g = Graphics::FromImage(img); //создаем устройство для рисования на поверхности

	//рисуем сетку
	for (int i = 0; i < pW; i += unit)
		g->DrawLine(Pens::Aqua, i, 0, i, pH);
	for (int i = 0; i < pH; i += unit)
		g->DrawLine(Pens::Aqua, 0, i, pW, i);

	//линии осей с масштабированием 
	int mX = int(pW / 4 - pW / 4 % unit);
	int mY = int(pH * 3 / 4 - pH * 3 / 4 % unit);

	g->DrawLine(Pens::Black, mX, 0, mX, pH); // Ось X
	g->DrawLine(Pens::Black, 0, mY, pW, mY); // Ось Y

	g->ScaleTransform(1, -1); //переворачиваем ось Y 
	g->TranslateTransform((double)mX, -(double)mY); //смещаем нулевую координату на пересечение осей

	// Задаем точки многоугольника
	cli::array<PointF>^ points = gcnew cli::array<PointF>(rows + 1);

	for (int i = 0; i < rows; i++) {
		points[i] = PointF(matrix[i][0], matrix[i][1]);
	}
	points[rows] = PointF(matrix[0][0], matrix[0][1]);

	cli::array<PointF>^ poi = gcnew cli::array<PointF>(50);
	poi = Spline(g, points);

	//Hord_Spline(g, poi);
	Normal_Spline(g, points);
	g->ScaleTransform(1, -1); //переворачиваем ось Y для удобства восприятия
	delete g; //освобождение ресурсов устройства рисования
	this->pictureBox4->Image = img;
}
};
}
