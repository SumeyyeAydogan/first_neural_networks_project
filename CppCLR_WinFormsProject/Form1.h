#pragma once
//#include <Windows.h>
#include "Resource.h"
#include <time.h>
#include <cstdlib>
#include "Process.h"
#include <array>

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
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ToolStripMenuItem^ manuallyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ trainingToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ binaryToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ continousToolStripMenuItem;
	private: System::Windows::Forms::CheckBox^ normalizeData;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ToolStripMenuItem^ saveDataToolStripMenuItem;




		/// </summary>
		System::ComponentModel::Container^ components;
		// Renk paleti tanımlayın
		System::Drawing::Color GetColorForCycle(int cycle) {
			// Palet olarak bir dizi tanımlayabiliriz
			array<System::Drawing::Color>^ colors = gcnew array<System::Drawing::Color> {
				System::Drawing::Color::Red,
					System::Drawing::Color::Blue,
					System::Drawing::Color::Green,
					System::Drawing::Color::Orange,
					System::Drawing::Color::Purple,
					System::Drawing::Color::Brown,
					System::Drawing::Color::Pink
			};

			// Döngü sayısına göre renk seç (paleti döngüsel kullan)
			return colors[cycle % colors->Length];
		}
		void ClearGraphics() {
			// Burada sadece eski çizgiyi silin, veriler silinmesin
			pictureBox1->CreateGraphics()->Clear(pictureBox1->BackColor);
		}

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
			this->manuallyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->trainingToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->binaryToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->continousToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->checkClass1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkClass2 = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->normalizeData = (gcnew System::Windows::Forms::CheckBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->saveDataToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->processToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->initialToolStripMenuItem,
					this->exitToolStripMenuItem, this->trainingToolStripMenuItem, this->saveDataToolStripMenuItem
			});
			this->processToolStripMenuItem->Name = L"processToolStripMenuItem";
			this->processToolStripMenuItem->Size = System::Drawing::Size(72, 24);
			this->processToolStripMenuItem->Text = L"Process";
			// 
			// initialToolStripMenuItem
			// 
			this->initialToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->randomlyToolStripMenuItem,
					this->manuallyToolStripMenuItem
			});
			this->initialToolStripMenuItem->Name = L"initialToolStripMenuItem";
			this->initialToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->initialToolStripMenuItem->Text = L"Initializing";
			// 
			// randomlyToolStripMenuItem
			// 
			this->randomlyToolStripMenuItem->Name = L"randomlyToolStripMenuItem";
			this->randomlyToolStripMenuItem->Size = System::Drawing::Size(159, 26);
			this->randomlyToolStripMenuItem->Text = L"Randomly";
			this->randomlyToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::randomlyToolStripMenuItem_Click);
			// 
			// manuallyToolStripMenuItem
			// 
			this->manuallyToolStripMenuItem->Name = L"manuallyToolStripMenuItem";
			this->manuallyToolStripMenuItem->Size = System::Drawing::Size(159, 26);
			this->manuallyToolStripMenuItem->Text = L"Manually";
			this->manuallyToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::manuallyToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->exitToolStripMenuItem->Text = L"Exit";
			// 
			// trainingToolStripMenuItem
			// 
			this->trainingToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->binaryToolStripMenuItem,
					this->continousToolStripMenuItem
			});
			this->trainingToolStripMenuItem->Name = L"trainingToolStripMenuItem";
			this->trainingToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->trainingToolStripMenuItem->Text = L"Training";
			// 
			// binaryToolStripMenuItem
			// 
			this->binaryToolStripMenuItem->Name = L"binaryToolStripMenuItem";
			this->binaryToolStripMenuItem->Size = System::Drawing::Size(158, 26);
			this->binaryToolStripMenuItem->Text = L"Binary";
			this->binaryToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::binaryToolStripMenuItem_Click);
			// 
			// continousToolStripMenuItem
			// 
			this->continousToolStripMenuItem->Name = L"continousToolStripMenuItem";
			this->continousToolStripMenuItem->Size = System::Drawing::Size(158, 26);
			this->continousToolStripMenuItem->Text = L"Continous";
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
			this->label1->Location = System::Drawing::Point(623, 239);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 16);
			this->label1->TabIndex = 4;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(623, 280);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 16);
			this->label2->TabIndex = 5;
			this->label2->Text = L"label2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(623, 318);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 16);
			this->label3->TabIndex = 5;
			this->label3->Text = L"label3";
			// 
			// normalizeData
			// 
			this->normalizeData->AutoSize = true;
			this->normalizeData->Location = System::Drawing::Point(626, 183);
			this->normalizeData->Name = L"normalizeData";
			this->normalizeData->Size = System::Drawing::Size(122, 20);
			this->normalizeData->TabIndex = 6;
			this->normalizeData->Text = L"Normalize Data";
			this->normalizeData->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(623, 369);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(44, 16);
			this->label4->TabIndex = 7;
			this->label4->Text = L"label4";
			// 
			// saveDataToolStripMenuItem
			// 
			this->saveDataToolStripMenuItem->Name = L"saveDataToolStripMenuItem";
			this->saveDataToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->saveDataToolStripMenuItem->Text = L"SaveData";
			this->saveDataToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::saveDataToolStripMenuItem_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(757, 493);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->normalizeData);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label3);
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
		// Ana eksen doğrularını çizdir
		Pen^ pen = gcnew Pen(Color::Black, 3.0f);
		int center_width, center_height;
		center_width = (int)(pictureBox1->Width / 2);
		center_height = (int)(pictureBox1->Height / 2);
		e->Graphics->DrawLine(pen, center_width, 0, center_width, pictureBox1->Height);
		e->Graphics->DrawLine(pen, 0, center_height, pictureBox1->Width, center_height);

		// Çizilen noktalar ve karar sınırları burada çizilecek
		if (Size > 0) {
			Pen^ penClass1 = gcnew Pen(Color::Black, 3.0f); // Sınıf 1 için siyah
			Pen^ penClass2 = gcnew Pen(Color::Red, 3.0f);   // Sınıf 2 için kırmızı

			for (int i = 0; i < Size; i++) {
				int x = Convert::ToInt32(p[i].x1 + (pictureBox1->Width / 2));
				int y = Convert::ToInt32((pictureBox1->Height / 2) - p[i].x2);

				// Sınıf 1 için siyah, sınıf 2 için kırmızı
				if (p[i].id == CLASS1) {
					e->Graphics->DrawLine(penClass1, x - 5, y, x + 5, y);
					e->Graphics->DrawLine(penClass1, x, y - 5, x, y + 5);
				}
				else if (p[i].id == CLASS2) {
					e->Graphics->DrawLine(penClass2, x - 5, y, x + 5, y);
					e->Graphics->DrawLine(penClass2, x, y - 5, x, y + 5);
				}
			}

			// Decision boundary çizimi (Perceptron sonrası çizgi)
			if (w != nullptr) {
				Pen^ penLine = gcnew Pen(Color::Green, 2.0f); // Karar sınırı için yeşil renk

				// Çizim için 2 nokta alalım: min_x ve max_x
				int min_x = (this->pictureBox1->Width) / -2;
				int max_x = (this->pictureBox1->Width) / 2;

				// w[0] * x1 + w[1] * x2 + w[2] = 0 denklemiyle y'yi hesapla
				int min_y = YPoint(min_x, w);
				int max_y = YPoint(max_x, w);

				// Çizgiyi çiz
				e->Graphics->DrawLine(penLine,
					(pictureBox1->Width / 2) + min_x, (pictureBox1->Height / 2) - min_y,
					(pictureBox1->Width / 2) + max_x, (pictureBox1->Height / 2) - max_y
				);
			}
		}
	}

	private: System::Void pictureBox1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (checkClass1->Checked || checkClass2->Checked) {
			if (checkClass1->Checked && checkClass2->Checked) {
				MessageBox::Show("Her iki sinif turu ayni anda secilemez!");
				checkClass1->Checked = false;
				checkClass2->Checked = false;
			}
			else {
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
				else {
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
				label3->Text = "x1: " + Convert::ToString(p[Size - 1].x1) + " x2: " + Convert::ToString(p[Size - 1].x2);
				label2->Text = "Samples Total: " + Convert::ToString(Size) +
					"  Class 1: " + Convert::ToString(Size1) +
					"  Class 2: " + Convert::ToString(Size2);

				// Ekranı yenile ve yeni veriyi göster
				pictureBox1->Invalidate(); // Ekranı yenileyerek tekrar çiz
			}
		}
		else {
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

	   // Perceptron işlemi (manuallyToolStripMenuItem_Click'teki)
private: System::Void manuallyToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
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

	int final_epoch = 0; // Kaç cycle'da doğru ayrımı bulduğunu takip edin

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

		if (!updated) {
			final_epoch = epoch + 1;
			break;
		}

		// Ekranı yenileyin, çizgiyi yeniden çizin
		pictureBox1->Invalidate(); // Yeni çizim yapılacak

		label4->Text = "Epoch: " + Convert::ToString(epoch + 1);
	}

	// Final ağırlıklarını göster
	label1->Text = System::String::Concat("Final Weights: w0 = ", Convert::ToString(w[0]),
		" | w1 = ", Convert::ToString(w[1]),
		" | w2 = ", Convert::ToString(w[2]));
	label4->Text += " | Final Epoch Count: " + final_epoch.ToString();
}


private: System::Void binaryToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void saveDataToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	SaveFileDialog^ saveFileDialog = gcnew SaveFileDialog();
	saveFileDialog->Filter = "Text Files (*.txt)|*.txt";
	saveFileDialog->Title = "Save Data File";

	if (saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		System::IO::StreamWriter^ file = gcnew System::IO::StreamWriter(saveFileDialog->FileName);

		for (int i = 0; i < Size; i++) {
			file->WriteLine(p[i].x1 + "," + p[i].x2 + "," + p[i].id);  // Verileri doğru şekilde yazdır
		}

		file->Close();
		MessageBox::Show("Data successfully saved.");
	}
}


};
}
