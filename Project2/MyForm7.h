#include <iostream>
#include <vector>
#include <cmath>
#include <math.h>
#include <vector>

#include <cliext/vector>
#define _USE_MATH_DEFINES

#pragma once

namespace Project2 {
	
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm7
	/// </summary>
	public ref class MyForm7 : public System::Windows::Forms::Form
	{
	public:
		MyForm7(void)
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
		~MyForm7()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;




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
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(444, 235);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(172, 60);
			this->label9->TabIndex = 52;
			this->label9->Text = L"Где X, Y- \r\nкоординаты точек.\r\nn - количество точек.\r\n";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(98, 19);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(266, 29);
			this->label8->TabIndex = 51;
			this->label8->Text = L"Кубический сплайн:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->label5->Location = System::Drawing::Point(452, 348);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(20, 20);
			this->label5->TabIndex = 43;
			this->label5->Text = L"X";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->label4->Location = System::Drawing::Point(16, 38);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(20, 20);
			this->label4->TabIndex = 41;
			this->label4->Text = L"Y";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(448, 119);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(24, 20);
			this->label2->TabIndex = 49;
			this->label2->Text = L"Y:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(448, 84);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(24, 20);
			this->label1->TabIndex = 48;
			this->label1->Text = L"X:";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(20, 61);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(418, 307);
			this->panel1->TabIndex = 47;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(385, 287);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(33, 25);
			this->label7->TabIndex = 19;
			this->label7->Text = L"→";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(-7, -3);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(23, 25);
			this->label6->TabIndex = 20;
			this->label6->Text = L"↑";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(3, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(412, 301);
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(474, 113);
			this->textBox2->MaxLength = 15;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(130, 26);
			this->textBox2->TabIndex = 45;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm7::textBox2_KeyPress);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(474, 81);
			this->textBox1->MaxLength = 15;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(130, 26);
			this->textBox1->TabIndex = 44;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm7::textBox1_KeyPress);
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->Location = System::Drawing::Point(444, 187);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(154, 35);
			this->button1->TabIndex = 42;
			this->button1->Text = L"График";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm7::button1_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(474, 145);
			this->textBox3->MaxLength = 15;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(130, 26);
			this->textBox3->TabIndex = 53;
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm7::textBox3_KeyPress);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(448, 151);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(22, 20);
			this->label3->TabIndex = 54;
			this->label3->Text = L"n:";
			// 
			// MyForm7
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(616, 382);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm7";
			this->Text = L"Кубический сплайн";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		void Spline(Graphics^ g, cli::array<PointF>^ points) {
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

			// Построение сплайна
			for (int j = 0; j < n; j++) {
				double x0 = points[j].X;
				double x1 = points[(j + 1) % n].X;
				double xi = points[j].X;

				for (double tpar = 0; tpar <= 1; tpar += 0.01) {
					double x = x0 + (x1 - x0) * tpar;
					double t = (x - xi);
					double y = points[j].Y + b[j] * t + c[j] * pow(t, 2) + d[j] * pow(t, 3);

					g->FillRectangle(Brushes::Black, (float)x, (float)y, 2.0f, 2.0f);
				}
			}
		}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		

		int n = Int32::Parse(textBox3->Text);
		int sum = 0;
		cli::array<String^>^ sNums1 = textBox1->Text->Split(' ');
		cli::array<int>^ nums1 = gcnew cli::array<int>(n);
		cli::array<String^>^ sNums2 = textBox2->Text->Split(' ');
		cli::array<int>^ nums2 = gcnew cli::array<int>(n);
		
		
		


		for (int i = 0;i < n;i++)
			
			
			nums1[i] = Int32::Parse(sNums1[i]);

		for (int i = 0;i < n;i++)
			nums2[i] = Int32::Parse(sNums2[i]);
	
	


		const int cols = 2, rows = 12;
		int matrix[rows][cols] = { {20, 50},{30, 50},{40, 30},{50, 40},{60, 30},{70, 50},{80, 50},{70, 10},{60, 10},{50, 10}, {40, 10} ,{30, 10} };

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
		int mX = int(pW / 2 - pW / 2 % unit);
		int mY = int(pH / 2 - pH / 2 % unit);

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

		Spline(g, points);
		g->ScaleTransform(1, -1); //переворачиваем ось Y для удобства восприятия
		delete g; //освобождение ресурсов устройства рисования
		this->pictureBox1->Image = img;
	}
private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if ((e->KeyChar < 48 || e->KeyChar > 57) && (e->KeyChar != 45) && (e->KeyChar != 32) && e->KeyChar != '\b')
		e->Handled = true;

	String^ text = textBox1->Text;
	// запрет последовательного ввода после имеющегося нуля
	if (text == "0" && e->KeyChar != 8)
		e->Handled = true;
	// запрет на ввод нуля при перемещении курсора в начало
	if (e->KeyChar == 48 && textBox1->SelectionStart == 0 && text != "")
		e->Handled = true;

	if ((textBox1->Text->Length != 0) && (textBox2->Text->Length != 0))
		button1->Enabled = true;
	else button1->Enabled = false;
}
private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if ((e->KeyChar < 48 || e->KeyChar > 57) && (e->KeyChar != 45) && (e->KeyChar != 32) && e->KeyChar != '\b')
		e->Handled = true;

	String^ text = textBox1->Text;
	// запрет последовательного ввода после имеющегося нуля
	if (text == "0" && e->KeyChar != 8)
		e->Handled = true;
	// запрет на ввод нуля при перемещении курсора в начало
	if (e->KeyChar == 48 && textBox1->SelectionStart == 0 && text != "")
		e->Handled = true;

	if ((textBox1->Text->Length != 0) && (textBox2->Text->Length != 0) )
		button1->Enabled = true;
	else button1->Enabled = false;
}

private: System::Void textBox3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if ((e->KeyChar < 48 || e->KeyChar > 57)  && e->KeyChar != '\b')
		e->Handled = true;

	String^ text = textBox1->Text;
	// запрет последовательного ввода после имеющегося нуля
	if (text == "0" && e->KeyChar != 8)
		e->Handled = true;
	// запрет на ввод нуля при перемещении курсора в начало
	if (e->KeyChar == 48 && textBox1->SelectionStart == 0 && text != "")
		e->Handled = true;

	if ((textBox1->Text->Length != 0) && (textBox2->Text->Length != 0))
		button1->Enabled = true;
	else button1->Enabled = false;
}
};
}
