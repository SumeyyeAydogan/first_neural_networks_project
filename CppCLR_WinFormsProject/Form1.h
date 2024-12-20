﻿#pragma once
//#include <Windows.h>
#include "Resource.h"
#include <time.h>
#include <cstdlib>
#include "Process.h"

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			Size = Size1 = Size2 = 0;
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ processToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ initialToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ randomlyToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::CheckBox^ checkClass1;
	private: System::Windows::Forms::CheckBox^ checkClass2;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		Samples* p;
		int Size, Size1, Size2;
		double* w;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ToolStripMenuItem^ perceptionToolStripMenuItem;



		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->processToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->initialToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->randomlyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->checkClass1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkClass2 = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->perceptionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->processToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(757, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// processToolStripMenuItem
			// 
			this->processToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->initialToolStripMenuItem });
			this->processToolStripMenuItem->Name = L"processToolStripMenuItem";
			this->processToolStripMenuItem->Size = System::Drawing::Size(72, 24);
			this->processToolStripMenuItem->Text = L"Process";
			// 
			// initialToolStripMenuItem
			// 
			this->initialToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->randomlyToolStripMenuItem,
					this->perceptionToolStripMenuItem
			});
			this->initialToolStripMenuItem->Name = L"initialToolStripMenuItem";
			this->initialToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->initialToolStripMenuItem->Text = L"initial";
			// 
			// randomlyToolStripMenuItem
			// 
			this->randomlyToolStripMenuItem->Name = L"randomlyToolStripMenuItem";
			this->randomlyToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->randomlyToolStripMenuItem->Text = L"Randomly";
			this->randomlyToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::randomlyToolStripMenuItem_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->pictureBox1->Location = System::Drawing::Point(22, 47);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(576, 410);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::pictureBox1_Paint);
			this->pictureBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::pictureBox1_MouseClick);
			// 
			// checkClass1
			// 
			this->checkClass1->AutoSize = true;
			this->checkClass1->Checked = true;
			this->checkClass1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkClass1->Location = System::Drawing::Point(626, 78);
			this->checkClass1->Name = L"checkClass1";
			this->checkClass1->Size = System::Drawing::Size(70, 20);
			this->checkClass1->TabIndex = 2;
			this->checkClass1->Text = L"Class1";
			this->checkClass1->UseVisualStyleBackColor = true;
			// 
			// checkClass2
			// 
			this->checkClass2->AutoSize = true;
			this->checkClass2->Location = System::Drawing::Point(626, 132);
			this->checkClass2->Name = L"checkClass2";
			this->checkClass2->Size = System::Drawing::Size(70, 20);
			this->checkClass2->TabIndex = 3;
			this->checkClass2->Text = L"Class2";
			this->checkClass2->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(623, 187);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 16);
			this->label1->TabIndex = 4;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(623, 231);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 16);
			this->label2->TabIndex = 5;
			this->label2->Text = L"label2";
			// 
			// perceptionToolStripMenuItem
			// 
			this->perceptionToolStripMenuItem->Name = L"perceptionToolStripMenuItem";
			this->perceptionToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->perceptionToolStripMenuItem->Text = L"Perception";
			this->perceptionToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::perceptronToolStripMenuItem_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(757, 493);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->checkClass2);
			this->Controls->Add(this->checkClass1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		//Ana eksen dogrularini cizdir
		Pen^ pen = gcnew Pen(Color::Black, 3.0f);
		int center_width, center_height;
		center_width = (int)(pictureBox1->Width / 2);
		center_height = (int)(pictureBox1->Height / 2);
		e->Graphics->DrawLine(pen, center_width, 0, center_width, pictureBox1->Height);
		e->Graphics->DrawLine(pen, 0, center_height, pictureBox1->Width, center_height);
	}
	private: System::Void pictureBox1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (checkClass1->Checked || checkClass2->Checked) {
			if (checkClass1->Checked && checkClass2->Checked)
			{
				MessageBox::Show("Her iki sinif turu ayni anda secilemez!");
				checkClass1->Checked = false;
				checkClass2->Checked = false;
			}
			else
			{
				// Hangi sınıfın seçili olduğunu belirle
				int classId = checkClass1->Checked ? CLASS1 : CLASS2;
				Pen^ pen = gcnew Pen(classId == CLASS1 ? Color::Black : Color::Red, 3.0f);

				// Tıklanan noktaları ve koordinatları al
				int temp_x = Convert::ToInt32(e->X);
				int temp_y = Convert::ToInt32(e->Y);
				double x1 = (double)(temp_x - (pictureBox1->Width >> 1));
				double x2 = (double)((pictureBox1->Height >> 1) - temp_y);

				// Örnekler listesi oluşturulmamışsa başlangıç tahsisi
				if (Size == 0) {
					Size = 1;
					if (classId == CLASS1) Size1 = 1;
					else Size2 = 1;

					p = new Samples[1]; // İlk örneği ekle
					p[0].x1 = x1;
					p[0].x2 = x2;
					p[0].id = classId;
				}
				else
				{
					// Geçici bellek yönetimi
					Samples* temp = p;
					Size++; // Toplam boyutu artır

					// Sınıf boyutlarını artır
					if (classId == CLASS1) Size1++;
					else Size2++;

					// Yeni örnekler için belleği yeniden tahsis et
					p = new Samples[Size];
					for (int i = 0; i < Size - 1; i++) {
						p[i] = temp[i]; // Önceki örnekleri kopyala
					}

					// Yeni örneği ekle
					p[Size - 1].x1 = x1;
					p[Size - 1].x2 = x2;
					p[Size - 1].id = classId;

					delete[] temp; // Geçici belleği serbest bırak
				}

				// Koordinatları göster ve "+" çizin
				label1->Text = "x1: " + Convert::ToString(p[Size - 1].x1) + " x2: " + Convert::ToString(p[Size - 1].x2);
				pictureBox1->CreateGraphics()->DrawLine(pen, temp_x - 5, temp_y, temp_x + 5, temp_y);
				pictureBox1->CreateGraphics()->DrawLine(pen, temp_x, temp_y - 5, temp_x, temp_y + 5);
				label2->Text = "Samples Total: " + Convert::ToString(Size) +
					"  Class 1: " + Convert::ToString(Size1) +
					"  Class 2: " + Convert::ToString(Size2);
			}
		}
		else
		{
			MessageBox::Show("Oncelikle orneklerin etiketini belirlemek icin sinif secin");
		}
	}//mouseClick
	private: System::Void randomlyToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Pen^ pen = gcnew Pen(Color::Blue, 3.0f);
		//initial a line is drawn such as: w1*x1 + w2*x2 + w3 = 0
		int min_x, max_x, min_y, max_y;

		int Dim = 2;
		w = new double[Dim + 1];
		srand(time(0));
		for (int i = 0; i < Dim + 1; i++)
			w[i] = ((double)rand() / (RAND_MAX));
		label1->Text = System::String::Concat("w[0]: ", System::Convert::ToString(w[0]),
			" | w[1]: ", System::Convert::ToString(w[1]),
			" | w[2]: ", System::Convert::ToString(w[2]));
		min_x = (this->pictureBox1->Width) / -2;
		min_y = YPoint(min_x, w);
		max_x = (this->pictureBox1->Width) / 2;
		max_y = YPoint(max_x, w);
		pictureBox1->CreateGraphics()->DrawLine(
			pen,
			(pictureBox1->Width / 2) + min_x, (pictureBox1->Height / 2) - min_y,
			(pictureBox1->Width / 2) + max_x, (pictureBox1->Height / 2) - max_y
		);
	}
private: System::Void perceptronToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Size < 2) {
		MessageBox::Show("Sınıflar için yeterli örnek yok!");
		return;
	}

	// Perceptron öğrenme algoritması
	double learning_rate = 0.1;
	int max_epochs = 1000;
	double threshold = 0.0;
	int Dim = 2;

	// Ağırlıkları sıfırla
	w = new double[Dim + 1] { 0.0, 0.0, 0.0 };

	for (int epoch = 0; epoch < max_epochs; epoch++) {
		bool updated = false;
		for (int i = 0; i < Size; i++) {
			// Örneklerin sınıfını kontrol et
			double x1 = p[i].x1, x2 = p[i].x2;
			int target = (p[i].id == CLASS1) ? 1 : -1;

			// Aktivasyon hesaplama
			double activation = w[0] * x1 + w[1] * x2 + w[2];
			int prediction = (activation >= threshold) ? 1 : -1;

			// Eğer tahmin yanlışsa ağırlıkları güncelle
			if (prediction != target) {
				w[0] += learning_rate * target * x1;
				w[1] += learning_rate * target * x2;
				w[2] += learning_rate * target;
				updated = true;
			}
		}
		// Eğer güncelleme yapılmadıysa öğrenme tamamlandı
		if (!updated) break;
	}

	// Ayrım çizgisini çiz
	Pen^ pen = gcnew Pen(Color::Green, 3.0f);
	int min_x = -pictureBox1->Width / 2;
	int max_x = pictureBox1->Width / 2;

	int min_y = YPoint(min_x, w);
	int max_y = YPoint(max_x, w);

	pictureBox1->CreateGraphics()->DrawLine(
		pen,
		(pictureBox1->Width / 2) + min_x, (pictureBox1->Height / 2) - min_y,
		(pictureBox1->Width / 2) + max_x, (pictureBox1->Height / 2) - max_y
	);

	label1->Text = System::String::Concat("Perceptron Weights: w0 = ", System::Convert::ToString(w[0]),
		" | w1 = ", System::Convert::ToString(w[1]),
		" | w2 = ", System::Convert::ToString(w[2]));
}

};
}
