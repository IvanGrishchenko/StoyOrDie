#pragma once

#include "stoy.h"
#include <msclr\marshal_cppstd.h>


namespace StoyOrDie {

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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button2;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(126, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(160, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Проміжок часу";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(33, 56);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Початок";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(201, 56);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(40, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Кінець";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(88, 53);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(247, 53);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 4;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Одновимірна", L"Двовимірна" });
			this->comboBox1->Location = System::Drawing::Point(541, 52);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(400, 47);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(130, 25);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Розмірність";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(31, 137);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(175, 25);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Покази датчиків";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(85, 182);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(67, 13);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Початковий";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(85, 225);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(56, 13);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Крайовий";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Генерація показників", L"З файлу" });
			this->comboBox2->Location = System::Drawing::Point(212, 141);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(135, 21);
			this->comboBox2->TabIndex = 10;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(38, 266);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(168, 13);
			this->label8->TabIndex = 11;
			this->label8->Text = L"Кількість проміжних показників";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(215, 263);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 12;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Присутній", L"Відсутній" });
			this->comboBox3->Location = System::Drawing::Point(194, 179);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(121, 21);
			this->comboBox3->TabIndex = 13;
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Присутній", L"Відсутній" });
			this->comboBox4->Location = System::Drawing::Point(194, 222);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(121, 21);
			this->comboBox4->TabIndex = 14;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(98, 315);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(169, 23);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Сгенерувати показники";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(400, 191);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(110, 25);
			this->label9->TabIndex = 16;
			this->label9->Text = L"Функція L";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(516, 191);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 17;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(516, 352);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(169, 23);
			this->button2->TabIndex = 18;
			this->button2->Text = L"Підтвердити";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(708, 387);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	
		   //Проверка на неправильный ввод или его отсутствие
		   bool Protect() {
			   if ((textBox1->Text->Length == 0) || (textBox2->Text->Length == 0) 
				   || (textBox3->Text->Length == 0) || (textBox4->Text->Length == 0) 
				   || (comboBox1->Text->Length == 0) || (comboBox3->Text->Length == 0) || (comboBox4->Text->Length == 0)) { return false; } //Пустой ввод

			   for (int i = 0; i < textBox1->Text->Length; i++) {
				   if ((textBox1->Text[i] >= '0') && (textBox1->Text[i] >= '9')) {}
				   else { return false; }
			   }
			   for (int i = 0; i < textBox2->Text->Length; i++) {
				   if ((textBox2->Text[i] >= '0') && (textBox2->Text[i] >= '9')) {}
				   else { return false; }
			   }
			   for (int i = 0; i < textBox3->Text->Length; i++) {
				   if ((textBox3->Text[i] >= '0') && (textBox3->Text[i] >= '9')) {}
				   else { return false; }
			   }
			   
		   }

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		if (Protect()) {
			int numOfSensors = 0;
			
			if (comboBox3->SelectedItem == "Присутній") {
				numOfSensors++;
			}
			if (comboBox4->SelectedItem == "Присутній") {
				numOfSensors++;
			}
			numOfSensors += System::Convert::ToInt32(textBox3->Text);
			int* SensorsArray = new int[numOfSensors];
			
			//TODO Генерация показателей через ранд

			s_data Data;
			Data.numOfSensors = numOfSensors;
			Data.sensors = SensorsArray;
		}
	}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Protect()) {
		int dimension, time1, time2, numOfSensors = 0;
		
		if (comboBox3->SelectedItem == "Присутній") {
			numOfSensors++;
		}
		if (comboBox4->SelectedItem == "Присутній") {
			numOfSensors++;
		}
		

		if (comboBox1->Text == "Одновимірна") 
			dimension = 1;
		else if (comboBox1->Text == "Двовимірна")
			dimension = 2;
		
		numOfSensors += System::Convert::ToInt32(textBox3->Text);
		int* SensorsArray = new int[numOfSensors];

		time1 = System::Convert::ToInt32(textBox1->Text);
		time2 = System::Convert::ToInt32(textBox2->Text);
		String^ LfuncS = textBox4->Text;
		std::string Lfunc = msclr::interop::marshal_as<std::string>(LfuncS);

		//TODO Генерация показателей через ранд

		//Генерация идёт на кнопке "подтвердить", а не "сгенерировать"

		s_data Data;
		Data.numOfSensors = numOfSensors;
		Data.sensors = SensorsArray;
		Data.dimension = dimension;
		Data.time1 = time1;
		Data.time2 = time2;
		Data.Lfunc = Lfunc;
	}
}
};
}
