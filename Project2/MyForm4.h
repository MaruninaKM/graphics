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
	/// Сводка для MyForm4
	/// </summary>
	public ref class MyForm4 : public System::Windows::Forms::Form
	{
	public:
		MyForm4(void)
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
		~MyForm4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label5;
	protected:
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;


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
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->label5->Location = System::Drawing::Point(460, 347);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(20, 20);
			this->label5->TabIndex = 30;
			this->label5->Text = L"X";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->label4->Location = System::Drawing::Point(24, 37);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(20, 20);
			this->label4->TabIndex = 28;
			this->label4->Text = L"Y";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(458, 150);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(21, 20);
			this->label3->TabIndex = 37;
			this->label3->Text = L"c:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(458, 118);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(22, 20);
			this->label2->TabIndex = 36;
			this->label2->Text = L"b:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(458, 88);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(22, 20);
			this->label1->TabIndex = 35;
			this->label1->Text = L"a:";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(28, 60);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(418, 307);
			this->panel1->TabIndex = 34;
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
			this->textBox3->Location = System::Drawing::Point(486, 144);
			this->textBox3->MaxLength = 4;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(71, 26);
			this->textBox3->TabIndex = 33;
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm4::textBox3_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(486, 112);
			this->textBox2->MaxLength = 4;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(71, 26);
			this->textBox2->TabIndex = 32;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm4::textBox2_KeyPress);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(486, 80);
			this->textBox1->MaxLength = 4;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(71, 26);
			this->textBox1->TabIndex = 31;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm4::textBox1_KeyPress);
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->Location = System::Drawing::Point(452, 186);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(105, 35);
			this->button1->TabIndex = 29;
			this->button1->Text = L"График";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm4::button1_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(178, 17);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(141, 29);
			this->label8->TabIndex = 38;
			this->label8->Text = L"Парабола:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(452, 234);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(130, 80);
			this->label9->TabIndex = 39;
			this->label9->Text = L"Где A, B, C - \r\nкоэффициенты\r\nполинома: \r\ny = ax^2+bx+c.\r\n";
			// 
			// MyForm4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(587, 394);
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
			this->Name = L"MyForm4";
			this->Text = L"Парабола";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:	
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
			for (int i = 0; i < textBox3->Text->Length; i++) {
				if (textBox3->Text[i] == '-')
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
	
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (proverka()) {
			//считываем коэффициенты 
			String^ a;
			a = textBox1->Text;
			String^ b;
			b = textBox2->Text;
			String^ c;
			c = textBox3->Text;
			int del = 0;
			int d = 0;
			double ap = double::Parse(a);
			double bp = double::Parse(b);
			double cp = double::Parse(c);

			int pW = pictureBox1->Width;
			int pH = pictureBox1->Height;

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

			double x1 = -10.0f, x2 = 10.0f, s = 0.2f;
			double x = x1; 
			double y;

			System::Collections::Generic::List<PointF>^ ponts = gcnew System::Collections::Generic::List<PointF>(); //коллекция точек графика

			while (x < x2)
			{
				y = ap * x * x + bp * x + cp;
				ponts->Add(PointF(x * (double)unit, y * (double)unit)); //добавляем точку в коллекцию. (Полученные координаты сразу переводим в экранные единицы)
				x += s;
			}
			g->DrawLines(Pens::Red, ponts->ToArray()); //рисование линий графика
			delete g; //освобождение ресурсов устройства рисования
			this->pictureBox1->Image = img; //присвоение и отображение изображения в PictureBox
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
};
}
