﻿#pragma once
#include "math.h"
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
	/// Сводка для MyForm6
	/// </summary>
	public ref class MyForm6 : public System::Windows::Forms::Form
	{
	public:
		MyForm6(void)
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
		~MyForm6()
		{
			if (components)
			{
				delete components;
			}
		}



	private: System::Windows::Forms::Label^ label9;
	protected:
	protected: System::Windows::Forms::Label^ label8;
	private:
	protected: System::Windows::Forms::Label^ label5;
	protected: System::Windows::Forms::Label^ label4;
	protected: System::Windows::Forms::Label^ label3;
	protected: System::Windows::Forms::Label^ label2;
	protected: System::Windows::Forms::Label^ label1;
	protected: System::Windows::Forms::Panel^ panel1;
	protected: System::Windows::Forms::Label^ label7;
	protected: System::Windows::Forms::Label^ label6;
	protected: System::Windows::Forms::PictureBox^ pictureBox1;
	protected: System::Windows::Forms::TextBox^ textBox3;
	protected: System::Windows::Forms::TextBox^ textBox2;
	protected: System::Windows::Forms::TextBox^ textBox1;
	protected: System::Windows::Forms::Button^ button1;
	protected: System::Windows::Forms::Label^ label10;
	protected: System::Windows::Forms::TextBox^ textBox4;

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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
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
			this->label9->Location = System::Drawing::Point(434, 224);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(233, 100);
			this->label9->TabIndex = 55;
			this->label9->Text = L"Где X0, Y0 - \r\nкоординаты центра \r\nспирали.\r\nk - сдвиг точки по лучу.\r\nOb - интер"
				L"вал вращения в pi. ";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(110, 9);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(245, 29);
			this->label8->TabIndex = 54;
			this->label8->Text = L"Круговая спираль:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->label5->Location = System::Drawing::Point(442, 337);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(20, 20);
			this->label5->TabIndex = 46;
			this->label5->Text = L"X";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->label4->Location = System::Drawing::Point(6, 27);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(20, 20);
			this->label4->TabIndex = 44;
			this->label4->Text = L"Y";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(438, 118);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(22, 20);
			this->label3->TabIndex = 53;
			this->label3->Text = L"a:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(438, 86);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 20);
			this->label2->TabIndex = 52;
			this->label2->Text = L"y0:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(438, 54);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 20);
			this->label1->TabIndex = 51;
			this->label1->Text = L"x0:";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(10, 50);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(418, 307);
			this->panel1->TabIndex = 50;
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
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(472, 112);
			this->textBox3->MaxLength = 4;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(71, 26);
			this->textBox3->TabIndex = 49;
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm6::textBox3_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(472, 80);
			this->textBox2->MaxLength = 4;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(71, 26);
			this->textBox2->TabIndex = 48;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm6::textBox2_KeyPress);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(472, 48);
			this->textBox1->MaxLength = 4;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(71, 26);
			this->textBox1->TabIndex = 47;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm6::textBox1_KeyPress);
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->Location = System::Drawing::Point(438, 186);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(105, 35);
			this->button1->TabIndex = 45;
			this->button1->Text = L"График";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm6::button1_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(438, 150);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(34, 20);
			this->label10->TabIndex = 60;
			this->label10->Text = L"Ob:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(472, 144);
			this->textBox4->MaxLength = 4;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(71, 26);
			this->textBox4->TabIndex = 59;
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm6::textBox4_KeyPress);
			// 
			// MyForm6
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(666, 377);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm6";
			this->Text = L"MyForm6";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private:
			//---проверка на верный ввод символов-------------------------
			bool proverka() {
				int  pos1 = 0, pos2 = 0;
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

				for (int i = 0; i < textBox3->Text->Length; i++) {
					if ((textBox3->Text[0] == '0') || (textBox4->Text[0] == '0'))
						return false;
				}
				return true;
			}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (proverka()) {
			String^ centerXStr;
			centerXStr = textBox1->Text;
			String^ centerYStr;
			centerYStr = textBox2->Text;
			String^ k;
			k = textBox3->Text;
			String^ ob;
			ob = textBox4->Text;

			int del = 0;
			int d = 0;
			int centerX = Int32::Parse(centerXStr);
			int centerY = Int32::Parse(centerYStr);
			int ks = Int32::Parse(k);
			int obs = Int32::Parse(ob);

			if (fabs(centerX) >= fabs(centerY)) {
				del = (fabs(centerX) + ks);
			}
			else {
				del = (fabs(centerY) + ks);
			}
			while (del > 0) {
				del = del / 10;
				++d;
			}
			int unit = 13 - d * 4;
			//int unit = 10;
			int pW = pictureBox1->Width;
			int pH = pictureBox1->Height;
			//textBox4->Text = Convert::ToString(unit);
			Bitmap^ img = gcnew Bitmap(pW, pH); //создаем поверхность для рисования (изображение) с размером элемента управления PictureBox
			Graphics^ g = Graphics::FromImage(img); //создаем устройство для рисования на поверхности

			//рисуем сетку
			for (int i = 0; i < pW; i += unit)
				g->DrawLine(Pens::Aqua, i, 0, i, pH);
			for (int i = 0; i < pH; i += unit)
				g->DrawLine(Pens::Aqua, 0, i, pW, i);

			//линии осей
			int mX = int(pW / 2 - pW / 2 % unit);
			int mY = int(pH / 2 - pH / 2 % unit);

			g->DrawLine(Pens::Black, mX, 0, mX, pH);// Ось X
			g->DrawLine(Pens::Black, 0, mY, pW, mY);// Ось Y

			g->ScaleTransform(1, -1); //переворачиваем ось Y для удобства восприятия
			g->TranslateTransform((double)mX, -(double)mY); //смещаем нулевую координату на пересечение осей

			//точка в центре
			g->DrawLine(Pens::Black, (centerX - ks / 4) * unit, centerY * unit, (centerX + ks / 4) * unit, centerY * unit);
			g->DrawLine(Pens::Black, centerX * unit, (centerY - ks / 4) * unit, centerX * unit, (centerY + ks / 4) * unit);

			//уравнение круговой спирали ρ = (a/(2π))·φ в полярных координатах
			for (double theta = 0; theta <= 2 * Math::PI*obs; theta += 0.01) {
				double r = ks*theta;
				double x = (centerX + r * Math::Cos(theta));
				double y = (centerY + r * Math::Sin(theta));
				g->FillRectangle(Brushes::Red, (double)(x * unit), (double)(y * unit), 1, 1); // рисуем точку эллипса
			}
			delete g;
			this->pictureBox1->Image = img;
		}
		else MessageBox::Show("Неверный ввод" + "\t");

	}
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

		if ((textBox1->Text->Length != 0) && (textBox2->Text->Length != 0) && (textBox3->Text->Length != 0))
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

		if ((textBox1->Text->Length != 0) && (textBox2->Text->Length != 0) && (textBox3->Text->Length != 0))
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

		if ((textBox1->Text->Length != 0) && (textBox2->Text->Length != 0) && (textBox3->Text->Length != 0))
			button1->Enabled = true;
		else button1->Enabled = false;
	}
	private: System::Void textBox4_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if ((e->KeyChar < 48 || e->KeyChar > 57) && e->KeyChar != '\b')
			e->Handled = true;

		String^ text = textBox4->Text;
		// запрет последовательного ввода после имеющегося нуля
		if (text == "0" && e->KeyChar != 8)
			e->Handled = true;
		// запрет на ввод нуля при перемещении курсора в начало
		if (e->KeyChar == 48 && textBox3->SelectionStart == 0 && text != "")
			e->Handled = true;

		if ((textBox1->Text->Length != 0) && (textBox2->Text->Length != 0) && (textBox3->Text->Length != 0) && (textBox4->Text->Length != 0))
			button1->Enabled = true;
		else button1->Enabled = false;
	}
};
}
