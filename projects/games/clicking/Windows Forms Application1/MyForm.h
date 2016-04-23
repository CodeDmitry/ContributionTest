#pragma once

namespace Project2 
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
            btnClickMe1->Enabled = false;
            btnClickMe2->Enabled = false;  
            txtNumClicks->Text = "0";          
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
    private:
        System::Windows::Forms::Label^  lblNumClicks;
        System::Windows::Forms::TextBox^  txtNumClicks;

        System::Windows::Forms::Button^  btnClickMe1;
        System::Windows::Forms::Button^  btnClickMe2;
        System::Windows::Forms::Button^  btnStart;
        System::Windows::Forms::Button^  btnExit;
	
		/// <summary>
		/// Required designer variable.
		/// </summary>
        Int32 nClicks;
        Int32 nTimerTicks;
        System::Windows::Forms::Timer^  timer1;
        System::ComponentModel::IContainer^  components;



#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
        this->components = (gcnew System::ComponentModel::Container());
        this->lblNumClicks = (gcnew System::Windows::Forms::Label());
        this->txtNumClicks = (gcnew System::Windows::Forms::TextBox());
        this->btnClickMe1 = (gcnew System::Windows::Forms::Button());
        this->btnClickMe2 = (gcnew System::Windows::Forms::Button());
        this->btnStart = (gcnew System::Windows::Forms::Button());
        this->btnExit = (gcnew System::Windows::Forms::Button());
        this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
        this->SuspendLayout();
        // 
        // lblNumClicks
        // 
        this->lblNumClicks->AutoSize = true;
        this->lblNumClicks->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
            static_cast<System::Byte>(0)));
        this->lblNumClicks->Location = System::Drawing::Point(158, 34);
        this->lblNumClicks->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
        this->lblNumClicks->Name = L"lblNumClicks";
        this->lblNumClicks->Size = System::Drawing::Size(116, 15);
        this->lblNumClicks->TabIndex = 0;
        this->lblNumClicks->Text = L"Number of Clicks";
        // 
        // txtNumClicks
        // 
        this->txtNumClicks->Enabled = false;
        this->txtNumClicks->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
            static_cast<System::Byte>(0)));
        this->txtNumClicks->Location = System::Drawing::Point(161, 53);
        this->txtNumClicks->Margin = System::Windows::Forms::Padding(4);
        this->txtNumClicks->Name = L"txtNumClicks";
        this->txtNumClicks->Size = System::Drawing::Size(113, 20);
        this->txtNumClicks->TabIndex = 1;
        // 
        // btnClickMe1
        // 
        this->btnClickMe1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
            static_cast<System::Byte>(0)));
        this->btnClickMe1->Location = System::Drawing::Point(12, 83);
        this->btnClickMe1->Name = L"btnClickMe1";
        this->btnClickMe1->Size = System::Drawing::Size(80, 35);
        this->btnClickMe1->TabIndex = 2;
        this->btnClickMe1->Text = L"Click Me!";
        this->btnClickMe1->UseVisualStyleBackColor = true;
        this->btnClickMe1->Click += gcnew System::EventHandler(this, &MyForm::btnClickMe1_Click);
        // 
        // btnClickMe2
        // 
        this->btnClickMe2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
            static_cast<System::Byte>(0)));
        this->btnClickMe2->Location = System::Drawing::Point(332, 83);
        this->btnClickMe2->Name = L"btnClickMe2";
        this->btnClickMe2->Size = System::Drawing::Size(80, 35);
        this->btnClickMe2->TabIndex = 3;
        this->btnClickMe2->Text = L"Click Me!";
        this->btnClickMe2->UseVisualStyleBackColor = true;
        this->btnClickMe2->Click += gcnew System::EventHandler(this, &MyForm::btnClickMe2_Click);
        // 
        // btnStart
        // 
        this->btnStart->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
            static_cast<System::Byte>(0)));
        this->btnStart->Location = System::Drawing::Point(161, 206);
        this->btnStart->Name = L"btnStart";
        this->btnStart->Size = System::Drawing::Size(113, 35);
        this->btnStart->TabIndex = 4;
        this->btnStart->Text = L"Start Game";
        this->btnStart->UseVisualStyleBackColor = true;
        this->btnStart->Click += gcnew System::EventHandler(this, &MyForm::btnStart_Click);
        // 
        // btnExit
        // 
        this->btnExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
            static_cast<System::Byte>(0)));
        this->btnExit->Location = System::Drawing::Point(161, 247);
        this->btnExit->Name = L"btnExit";
        this->btnExit->Size = System::Drawing::Size(113, 35);
        this->btnExit->TabIndex = 5;
        this->btnExit->Text = L"Exit";
        this->btnExit->UseVisualStyleBackColor = true;
        this->btnExit->Click += gcnew System::EventHandler(this, &MyForm::btnExit_Click);
        // 
        // timer1
        // 
        this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
        // 
        // MyForm
        // 
        this->AutoScaleDimensions = System::Drawing::SizeF(9, 16);
        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
        this->ClientSize = System::Drawing::Size(424, 292);
        this->Controls->Add(this->btnExit);
        this->Controls->Add(this->btnStart);
        this->Controls->Add(this->btnClickMe2);
        this->Controls->Add(this->btnClickMe1);
        this->Controls->Add(this->txtNumClicks);
        this->Controls->Add(this->lblNumClicks);
        this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
            static_cast<System::Byte>(0)));
        this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
        this->Margin = System::Windows::Forms::Padding(4);
        this->MaximizeBox = false;
        this->Name = L"MyForm";
        this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
        this->Text = L"Click Race Game";
        this->ResumeLayout(false);
        this->PerformLayout();

            }
#pragma endregion
private:
        System::Void btnClickMe1_Click(System::Object^  sender, System::EventArgs^  e) 
        {
            btnClickMe1->Enabled = false;
            btnClickMe2->Enabled = true;
            ++nClicks;
            txtNumClicks->Text = nClicks.ToString();
        }
        
        System::Void btnClickMe2_Click(System::Object^  sender, System::EventArgs^  e) 
        {
            btnClickMe2->Enabled = false;
            btnClickMe1->Enabled = true;
            ++nClicks;
            txtNumClicks->Text = nClicks.ToString();
        }

        System::Void btnStart_Click(System::Object^  sender, System::EventArgs^  e) 
        {
            nClicks = 0;
            nTimerTicks = 0;
            btnClickMe1->Enabled = true;
            timer1->Enabled = true;
        }
        
        System::Void btnExit_Click(System::Object^  sender, System::EventArgs^  e) 
        {
            Close();
        }

        System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) 
        {
            if ((nTimerTicks * timer1->Interval) >= (10 * 1000)) {
                btnClickMe1->Enabled = false;
                btnClickMe2->Enabled = false;
                timer1->Enabled = false;
            }

            ++nTimerTicks;
        }
};
}
