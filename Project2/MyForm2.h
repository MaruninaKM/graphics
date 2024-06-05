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
	/// Сводка для MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
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
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;


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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->Location = System::Drawing::Point(444, 185);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(105, 35);
			this->button1->TabIndex = 1;
			this->button1->Text = L"График";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			this->button1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm2::button1_KeyPress);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(478, 79);
			this->textBox1->MaxLength = 3;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(71, 26);
			this->textBox1->TabIndex = 2;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm2::textBox1_KeyPress);
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
			this->textBox2->Location = System::Drawing::Point(478, 111);
			this->textBox2->MaxLength = 3;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(71, 26);
			this->textBox2->TabIndex = 4;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm2::textBox2_KeyPress);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(478, 143);
			this->textBox3->MaxLength = 3;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(71, 26);
			this->textBox3->TabIndex = 5;
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm2::textBox3_KeyPress);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(20, 59);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(418, 307);
			this->panel1->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->label4->Location = System::Drawing::Point(16, 36);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(20, 20);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Y";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->label5->Location = System::Drawing::Point(444, 346);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(20, 20);
			this->label5->TabIndex = 11;
			this->label5->Text = L"X";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(444, 85);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(33, 20);
			this->label1->TabIndex = 7;
			this->label1->Text = L"X0:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(444, 120);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(33, 20);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Y0:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(447, 149);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(25, 20);
			this->label3->TabIndex = 9;
			this->label3->Text = L"R:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(156, 15);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(170, 29);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Окружность:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(441, 234);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(159, 80);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Где X0, Y0 - \r\nкоординаты \r\nцентра окружности.\r\nR - радиус.";
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(607, 383);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
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
			this->Name = L"MyForm2";
			this->Text = L"Окружность";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
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
				if (textBox3->Text[0] == '0')
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
		String^ radiusStr;
		radiusStr = textBox3->Text;
		int del = 0;
		int d = 0;
		int centerX = Int32::Parse(centerXStr);
		int centerY = Int32::Parse(centerYStr);
		int radius = Int32::Parse(radiusStr);

		if (fabs(centerX) >= fabs(centerY))	{
			del = (fabs(centerX) + radius);
		}
		else { 
			del = (fabs(centerY) + radius);
		}
		while (del > 0) { 
			del = del / 10; 
			++d;
		}

		int unit = 13-d*4;
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
		
		//точка в центре
		g->DrawLine(Pens::Black, (centerX - radius/4)*unit, centerY * unit, (centerX + radius/4) * unit, centerY * unit);
		g->DrawLine(Pens::Black, centerX * unit, (centerY - radius/4) * unit, centerX * unit, (centerY + radius/4) * unit);

		// Уравнение окружности: (x - centerX)^2 + (y - centerY)^2 = radius^2 в декартовых координатах
		int startX = unit * (centerX - radius);
		int startY = unit * (centerY - radius);
		int width = unit * (2 * radius);
		int height = unit * (2 * radius);

		g->DrawEllipse(Pens::Red, startX, startY, width, height);

		delete g;
		this->pictureBox1->Image = img;
		
		}
		else { 
			MessageBox::Show("Неверный ввод" + "\t");
		}
	}

	private: System::Void button1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
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
		if ((e->KeyChar < 48 || e->KeyChar > 57) && e->KeyChar != '\b')
			e->Handled = true;

		if ((textBox1->Text->Length != 0) && (textBox2->Text->Length != 0) && (textBox3->Text->Length != 0))
			button1->Enabled = true;
		else button1->Enabled = false;

	}
};
}
