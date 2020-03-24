#pragma once

namespace Crawler007 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SplashPage
	/// </summary>
	public ref class SplashPage : public System::Windows::Forms::Form
	{
	public:
		SplashPage(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SplashPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SplashPage::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 9.857143F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(373, 502);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(277, 66);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Start Application";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SplashPage::click_Splash);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->label1->Font = (gcnew System::Drawing::Font(L"Bauhaus 93", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(279, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(481, 79);
			this->label1->TabIndex = 1;
			this->label1->Text = L"ICT1009 C++";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ControlDark;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.857143F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(288, 372);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(161, 29);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Ong Chen Yi";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.857143F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(288, 228);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(147, 29);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Jerone Poh";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.857143F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(288, 419);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(124, 29);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Shawn Ni";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.857143F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(288, 277);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(145, 29);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Ng Kah Hui";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.857143F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(288, 327);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(189, 29);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Nicholas Wong";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.857143F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(620, 228);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(111, 29);
			this->label7->TabIndex = 7;
			this->label7->Text = L"1902606";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.857143F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(620, 372);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(111, 29);
			this->label8->TabIndex = 8;
			this->label8->Text = L"1902189";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.857143F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(620, 277);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(111, 29);
			this->label9->TabIndex = 9;
			this->label9->Text = L"1902187";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.857143F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(620, 327);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(111, 29);
			this->label10->TabIndex = 10;
			this->label10->Text = L"1902638";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.857143F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(620, 419);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(111, 29);
			this->label11->TabIndex = 11;
			this->label11->Text = L"1902112";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->label12->Font = (gcnew System::Drawing::Font(L"Bauhaus 93", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(359, 127);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(300, 79);
			this->label12->TabIndex = 12;
			this->label12->Text = L"TEAM 15";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// SplashPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1045, 618);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"SplashPage";
			this->Text = L"SplashPage";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void click_Splash(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Crawler007::second_form object_name_second;
		object_name_second.ShowDialog();
		this->Show();
	}
	};
}
