#pragma once
#define _USE_MATH_DEFINES
#include <cmath>
#include <math.h>
#include <iostream>
namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm5
	/// </summary>
	public ref class MyForm5 : public System::Windows::Forms::Form
	{
	public:
		MyForm5(void)
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
		~MyForm5()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label9;
	protected:
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
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;


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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(489, 229);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(148, 80);
			this->label9->TabIndex = 51;
			this->label9->Text = L"Где A, B, K - \r\nкоэффициенты\r\nполинома: \r\nx^2/a^2-y^2/b^2 = 1.\r\n";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(178, 25);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(157, 29);
			this->label8->TabIndex = 50;
			this->label8->Text = L"Гипербола:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->label5->Location = System::Drawing::Point(497, 342);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(20, 20);
			this->label5->TabIndex = 42;
			this->label5->Text = L"X";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->label4->Location = System::Drawing::Point(32, 34);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(20, 20);
			this->label4->TabIndex = 40;
			this->label4->Text = L"Y";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(495, 113);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(22, 20);
			this->label2->TabIndex = 48;
			this->label2->Text = L"b:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(495, 83);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(22, 20);
			this->label1->TabIndex = 47;
			this->label1->Text = L"a:";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(36, 65);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(424, 400);
			this->panel1->TabIndex = 46;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(388, 375);
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
			this->label6->Location = System::Drawing::Point(3, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(23, 25);
			this->label6->TabIndex = 20;
			this->label6->Text = L"↑";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(12, 5);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(400, 385);
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(523, 107);
			this->textBox2->MaxLength = 4;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(71, 26);
			this->textBox2->TabIndex = 44;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm5::textBox2_KeyPress);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(523, 75);
			this->textBox1->MaxLength = 4;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(71, 26);
			this->textBox1->TabIndex = 43;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm5::textBox1_KeyPress);
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->Location = System::Drawing::Point(489, 181);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(105, 35);
			this->button1->TabIndex = 41;
			this->button1->Text = L"График";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm5::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(495, 145);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(21, 20);
			this->label3->TabIndex = 53;
			this->label3->Text = L"k:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(523, 139);
			this->textBox3->MaxLength = 4;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(71, 26);
			this->textBox3->TabIndex = 52;
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm5::textBox3_KeyPress);
			// 
			// textBox4
			// 
			this->textBox4->Enabled = false;
			this->textBox4->Location = System::Drawing::Point(489, 313);
			this->textBox4->MaxLength = 3;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(130, 26);
			this->textBox4->TabIndex = 54;
			// 
			// MyForm5
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(663, 480);
			this->Controls->Add(this->textBox4);
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
			this->Name = L"MyForm5";
			this->Text = L"MyForm5";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
		int MyForm5::GetLogicY(int x) //получает логическую(пиксельную) координату из реального значения функции
		{
			int k = 1;
			int segmentsX = 20;
			int segmentsY = 20;
			int maxLogicSizeX = pictureBox1->Size.Width;
			int maxLogicSizeY = pictureBox1->Size.Height;
			double realX = (double)x / maxLogicSizeX * segmentsX - segmentsX / 2;
			double realY = k / pow(realX, 2);
			return maxLogicSizeY / 2 - maxLogicSizeY / segmentsY * realY;
		}


private:
		//---проверка на верный ввод символов-------------------------
		bool proverka() {
			int  pos1 = 0, pos2 = 0, pos3 = 0;
			for (int i = 0; i < textBox1->Text->Length; i++) {
				if (textBox1->Text[i] == '-')
					pos1 = i;
			}
			if (pos1 != 0)
				return false;

			for (int i = 0; i < textBox2->Text->Length; i++) {
				if (textBox2->Text[i] == '-')
					pos2 = i;
			}
			if (pos2 != 0)
				return false;

			for (int i = 0; i < textBox2->Text->Length; i++) {
				if (textBox2->Text[i] == '-')
					pos3 = i;
			}
			if (pos3 != 0)
				return false;

			return true;
		}
	public:
			int i, x2, y2, y, yc;
			Graphics^ g;
			Pen^ p;
			int unit = 10; //шаг в пискелах
			delegate double DelegatePtr(double); //тип функции для рисования
	private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if ((e->KeyChar < 48 || e->KeyChar > 57) && (e->KeyChar != 45) && e->KeyChar != '\b')
			e->Handled = true;

		String^ text = textBox1->Text;
		// запрет последовательного ввода после имеющегося нуля
		if (text == "0" && e->KeyChar != 8)
			e->Handled = true;
		// запрет на ввод нуля при перемещении курсора в начало
		if (e->KeyChar == 48 && textBox3->SelectionStart == 0 && text != "")
			e->Handled = true;

		if ((textBox1->Text->Length != 0) && (textBox2->Text->Length != 0) )
			button1->Enabled = true;
		else button1->Enabled = false;
	}

	private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if ((e->KeyChar < 48 || e->KeyChar > 57) && (e->KeyChar != 45) && e->KeyChar != '\b')
			e->Handled = true;

		String^ text = textBox2->Text;
		// запрет последовательного ввода после имеющегося нуля
		if (text == "0" && e->KeyChar != 8)
			e->Handled = true;
		// запрет на ввод нуля при перемещении курсора в начало
		if (e->KeyChar == 48 && textBox3->SelectionStart == 0 && text != "")
			e->Handled = true;

		if ((textBox1->Text->Length != 0) && (textBox2->Text->Length != 0) )
			button1->Enabled = true;
		else button1->Enabled = false;
	}
	private: System::Void textBox3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if ((e->KeyChar < 48 || e->KeyChar > 57) && (e->KeyChar != 45) && e->KeyChar != '\b')
			e->Handled = true;

		String^ text = textBox3->Text;
		// запрет последовательного ввода после имеющегося нуля
		if (text == "0" && e->KeyChar != 8)
			e->Handled = true;
		// запрет на ввод нуля при перемещении курсора в начало
		if (e->KeyChar == 48 && textBox3->SelectionStart == 0 && text != "")
			e->Handled = true;

		if ((textBox1->Text->Length != 0) && (textBox2->Text->Length != 0))
			button1->Enabled = true;
		else button1->Enabled = false;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (proverka()) {
			String^ a;
			a = textBox1->Text;
			String^ b;
			b = textBox2->Text;
			String^ k;
			k = textBox3->Text;
			int del = 0;
			int d = 0;
			double ap = double::Parse(a);
			double bp = double::Parse(b);
			double kp = double::Parse(k);

			int pW = pictureBox1->Width;
			int pH = pictureBox1->Height;

			Bitmap^ img = gcnew Bitmap(pW, pH); // создаем поверхность для рисования (изображение) с размером элемента управления PictureBox
			Graphics^ g = Graphics::FromImage(img); // создаем устройство для рисования на поверхности

			// рисуем сетку
			for (int i = 0; i < pW; i += unit)
				g->DrawLine(Pens::Aqua, i, 0, i, pH);
			for (int i = 0; i < pH; i += unit)
				g->DrawLine(Pens::Aqua, 0, i, pW, i);

			// линии осей
			int mX = int(pW / 2 - pW / 2 % unit);
			int mY = int(pH / 2 - pH / 2 % unit);

			g->DrawLine(Pens::Black, mX, 0, mX, pH); // Ось X
			g->DrawLine(Pens::Black, 0, mY, pW, mY); // Ось Y

			g->ScaleTransform(1, -1); // переворачиваем ось Y для удобства восприятия
			g->TranslateTransform((double)mX, -(double)mY); // смещаем нулевую координату на пересечение осей

			double x1 = -20.0, x2 = 20.0, s = 0.2;
			double x = x1;
			double y1, y2;

			System::Collections::Generic::List<PointF>^ points1 = gcnew System::Collections::Generic::List<PointF>(); // коллекция точек первой кривой
			System::Collections::Generic::List<PointF>^ points2 = gcnew System::Collections::Generic::List<PointF>(); // коллекция точек второй кривой

			while (x < x2)
			{
				y1 = bp * sqrt((kp + (x * x) / (ap * ap)));
				y2 = -y1;

				points1->Add(PointF(x * (double)unit, y1 * (double)unit)); // добавляем точку первой кривой
				points2->Add(PointF(x * (double)unit, y2 * (double)unit)); // добавляем точку второй кривой

				x += s;
			}

			g->DrawLines(Pens::Red, points1->ToArray()); // рисование первой кривой
			g->DrawLines(Pens::Blue, points2->ToArray()); // рисование второй кривой

			delete g; // освобождение ресурсов устройства рисования

			this->pictureBox1->Image = img;
		}
		else MessageBox::Show("Неверный ввод" + "\t");
	
	}
		  
};
}
