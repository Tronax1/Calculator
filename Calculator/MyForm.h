#pragma once
#include <cmath>

namespace Calculator {

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
			//
			//TODO: Add the constructor code here
			//
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
	private: System::Windows::Forms::Label^  DisplayResult;
	protected:

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Button^  button25;
	private: System::Windows::Forms::Button^  button26;
	private: System::Windows::Forms::Button^  button27;
	private: System::Windows::Forms::Label^  Mode;
	private: System::Windows::Forms::Button^  button28;
	private: System::Windows::Forms::Button^  button29;
	private: System::Windows::Forms::Button^  button30;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->DisplayResult = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->Mode = (gcnew System::Windows::Forms::Label());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// DisplayResult
			// 
			this->DisplayResult->BackColor = System::Drawing::Color::White;
			this->DisplayResult->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->DisplayResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplayResult->Location = System::Drawing::Point(12, 9);
			this->DisplayResult->Name = L"DisplayResult";
			this->DisplayResult->Size = System::Drawing::Size(884, 52);
			this->DisplayResult->TabIndex = 0;
			this->DisplayResult->Text = L"0";
			this->DisplayResult->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::ForestGreen;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(12, 79);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(83, 74);
			this->button1->TabIndex = 1;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::ForestGreen;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(101, 79);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(83, 74);
			this->button2->TabIndex = 2;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::ForestGreen;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(190, 79);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(83, 74);
			this->button3->TabIndex = 3;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::ForestGreen;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(190, 159);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(83, 74);
			this->button4->TabIndex = 6;
			this->button4->Text = L"7";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::ForestGreen;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(101, 159);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(83, 74);
			this->button5->TabIndex = 5;
			this->button5->Text = L"6";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::ForestGreen;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(12, 159);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(83, 74);
			this->button6->TabIndex = 4;
			this->button6->Text = L"5";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::ForestGreen;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(190, 239);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(83, 74);
			this->button7->TabIndex = 9;
			this->button7->Text = L".";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::ForestGreen;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(101, 239);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(83, 74);
			this->button8->TabIndex = 8;
			this->button8->Text = L"0";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::ForestGreen;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(12, 239);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(83, 74);
			this->button9->TabIndex = 7;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::ForestGreen;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(279, 79);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(83, 74);
			this->button10->TabIndex = 10;
			this->button10->Text = L"4";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::ForestGreen;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(279, 159);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(83, 74);
			this->button11->TabIndex = 11;
			this->button11->Text = L"8";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::ForestGreen;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(279, 236);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(83, 74);
			this->button12->TabIndex = 12;
			this->button12->Text = L"=";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::ForestGreen;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(368, 79);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(83, 74);
			this->button13->TabIndex = 13;
			this->button13->Text = L"C";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::ForestGreen;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(368, 159);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(83, 74);
			this->button14->TabIndex = 14;
			this->button14->Text = L"X";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::ForestGreen;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(368, 236);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(83, 74);
			this->button15->TabIndex = 15;
			this->button15->Text = L"/";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::ForestGreen;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(547, 236);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(83, 74);
			this->button16->TabIndex = 18;
			this->button16->Text = L"Deg";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::ForestGreen;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(547, 159);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(83, 74);
			this->button17->TabIndex = 17;
			this->button17->Text = L"sin";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::ForestGreen;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->Location = System::Drawing::Point(547, 79);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(83, 74);
			this->button18->TabIndex = 16;
			this->button18->Text = L"x²\r\n";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::ForestGreen;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->Location = System::Drawing::Point(636, 236);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(83, 74);
			this->button19->TabIndex = 21;
			this->button19->Text = L"Rad";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::ForestGreen;
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->Location = System::Drawing::Point(636, 159);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(83, 74);
			this->button20->TabIndex = 20;
			this->button20->Text = L"cos";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::ForestGreen;
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button21->Location = System::Drawing::Point(636, 79);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(83, 74);
			this->button21->TabIndex = 19;
			this->button21->Text = L"x³";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::ForestGreen;
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button22->Location = System::Drawing::Point(725, 236);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(83, 74);
			this->button22->TabIndex = 24;
			this->button22->Text = L"π";
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::ForestGreen;
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button23->Location = System::Drawing::Point(725, 159);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(83, 74);
			this->button23->TabIndex = 23;
			this->button23->Text = L"tan";
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::ForestGreen;
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button24->Location = System::Drawing::Point(725, 79);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(83, 74);
			this->button24->TabIndex = 22;
			this->button24->Text = L"10^x";
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::ForestGreen;
			this->button25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button25->Location = System::Drawing::Point(814, 236);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(83, 74);
			this->button25->TabIndex = 27;
			this->button25->Text = L"√";
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::ForestGreen;
			this->button26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button26->Location = System::Drawing::Point(814, 159);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(83, 74);
			this->button26->TabIndex = 26;
			this->button26->Text = L"e^​x";
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::button26_Click);
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::Color::ForestGreen;
			this->button27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button27->Location = System::Drawing::Point(814, 79);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(83, 74);
			this->button27->TabIndex = 25;
			this->button27->Text = L"e";
			this->button27->UseVisualStyleBackColor = false;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
			// 
			// Mode
			// 
			this->Mode->AutoSize = true;
			this->Mode->BackColor = System::Drawing::Color::White;
			this->Mode->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Mode->Location = System::Drawing::Point(26, 27);
			this->Mode->Name = L"Mode";
			this->Mode->Size = System::Drawing::Size(0, 24);
			this->Mode->TabIndex = 28;
			this->Mode->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::Color::ForestGreen;
			this->button28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button28->Location = System::Drawing::Point(458, 159);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(83, 74);
			this->button28->TabIndex = 30;
			this->button28->Text = L"-";
			this->button28->UseVisualStyleBackColor = false;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::button28_Click);
			// 
			// button29
			// 
			this->button29->BackColor = System::Drawing::Color::ForestGreen;
			this->button29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button29->Location = System::Drawing::Point(458, 79);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(83, 74);
			this->button29->TabIndex = 29;
			this->button29->Text = L"+";
			this->button29->UseVisualStyleBackColor = false;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm::button29_Click);
			// 
			// button30
			// 
			this->button30->BackColor = System::Drawing::Color::ForestGreen;
			this->button30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button30->Location = System::Drawing::Point(458, 236);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(83, 74);
			this->button30->TabIndex = 31;
			this->button30->Text = L"+/-";
			this->button30->UseVisualStyleBackColor = false;
			this->button30->Click += gcnew System::EventHandler(this, &MyForm::button30_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(912, 322);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->Mode);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->DisplayResult);
			this->Name = L"MyForm";
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		double firstNumber, secondNumber, result;
		char operation;
		bool isDecimal = false, isRad = false;
		const double pi = 3.14159265359;
		const double Euler = 2.71828182846;

#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->BackColor = System::Drawing::Color::Aqua;
		if (DisplayResult->Text == "0") {
			DisplayResult->Text = "1";
		}
		else {
			DisplayResult->Text = DisplayResult->Text + "1";
		}
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	this->BackColor = System::Drawing::Color::Aqua;
	if (DisplayResult->Text == "0") {
		DisplayResult->Text = "2";
	}
	else {
		DisplayResult->Text = DisplayResult->Text + "2";
	}
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	this->BackColor = System::Drawing::Color::Aqua;
	if (DisplayResult->Text == "0") {
		DisplayResult->Text = "3";
	}
	else {
		DisplayResult->Text = DisplayResult->Text + "3";
	}
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	this->BackColor = System::Drawing::Color::Aqua;
	if (DisplayResult->Text == "0") {
		DisplayResult->Text = "4";
	}
	else {
		DisplayResult->Text = DisplayResult->Text + "4";
	}
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	this->BackColor = System::Drawing::Color::Aqua;
	if (DisplayResult->Text == "0") {
		DisplayResult->Text = "5";
	}
	else {
		DisplayResult->Text = DisplayResult->Text + "5";
	}
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	this->BackColor = System::Drawing::Color::Aqua;
	if (DisplayResult->Text == "0") {
		DisplayResult->Text = "6";
	}
	else {
		DisplayResult->Text = DisplayResult->Text + "6";
	}
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	this->BackColor = System::Drawing::Color::Aqua;
	if (DisplayResult->Text == "0") {
		DisplayResult->Text = "7";
	}
	else {
		DisplayResult->Text = DisplayResult->Text + "7";
	}
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
	this->BackColor = System::Drawing::Color::Aqua;
	if (DisplayResult->Text == "0") {
		DisplayResult->Text = "8";
	}
	else {
		DisplayResult->Text = DisplayResult->Text + "8";
	}
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	this->BackColor = System::Drawing::Color::Aqua;
	if (DisplayResult->Text == "0") {
		DisplayResult->Text = "9";
	}
	else {
		DisplayResult->Text = DisplayResult->Text + "9";
	}
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	this->BackColor = System::Drawing::Color::Aqua;
	if (DisplayResult->Text == "0") {
		DisplayResult->Text = "0";
	}
	else {
		DisplayResult->Text = DisplayResult->Text + "0";
	}
}
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
	this->BackColor = System::Drawing::Color::Aqua;
	if (!isDecimal) {
		firstNumber = Convert::ToDouble(DisplayResult->Text);
		DisplayResult->Text = "0";
		operation = '/';
	}
	else {
		firstNumber = Convert::ToDouble(DisplayResult->Text)/10; //Cause the calculator will refuse to convert to double :p
		DisplayResult->Text = "0";
		operation = '/';
		isDecimal = false;
	}
}
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
	this->BackColor = System::Drawing::Color::Aqua;
	if (!isDecimal) {
		firstNumber = Convert::ToDouble(DisplayResult->Text);
		DisplayResult->Text = "0";
		operation = 'X';
	}
	else {
		firstNumber = Convert::ToDouble(DisplayResult->Text)/10;
		DisplayResult->Text = "0";
		operation = 'X';
		isDecimal = false;
	}
}
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
	this->BackColor = System::Drawing::Color::Aqua;
	double temp;
	if (!isDecimal) {
		temp = Convert::ToDouble(DisplayResult->Text);
		DisplayResult->Text = Convert::ToString(pow(temp, 2));
	}
	else {
		temp = Convert::ToDouble(DisplayResult->Text)/10;
		DisplayResult->Text = Convert::ToString(pow(temp, 2));
		isDecimal = false;
	}
	
}
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
	this->BackColor = System::Drawing::Color::Aqua;
	double temp;
	if (!isDecimal) {
		temp = Convert::ToDouble(DisplayResult->Text);
		if (isRad) {
			DisplayResult->Text = Convert::ToString(sin(temp));
		}
		else {
			DisplayResult->Text = Convert::ToString(sin((temp*pi)/180));
		}
	}
	else {
		temp = Convert::ToDouble(DisplayResult->Text) / 10;
		if (isRad) {
			DisplayResult->Text = Convert::ToString(sin(temp));
		}
		else {
			DisplayResult->Text = Convert::ToString(sin((temp*pi)/180));
		}
		isDecimal = false;
	}
}
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
	Mode->Text = "";
	isRad = false;
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	this->BackColor = System::Drawing::Color::Aqua;
	if (isDecimal == false) {
		DisplayResult->Text = DisplayResult->Text + ".";
		isDecimal = true;
	}
}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
	this->BackColor = System::Drawing::Color::Aqua;
	if (!isDecimal) {
		secondNumber = Convert::ToDouble(DisplayResult->Text);
	}
	else {
		secondNumber = Convert::ToDouble(DisplayResult->Text)/10;
	}
	
	switch (operation) {
		case 'X': 
			result = firstNumber * secondNumber;
			DisplayResult->Text = System::Convert::ToString(result);
			isDecimal = false;
			break;
		case '+':
			result = firstNumber + secondNumber;
			DisplayResult->Text = System::Convert::ToString(result);
			isDecimal = false;
			break;
		case '-':
			result = firstNumber - secondNumber;
			DisplayResult->Text = System::Convert::ToString(result);
			isDecimal = false;
			break;
		case '/':
			result = firstNumber / secondNumber;
			DisplayResult->Text = System::Convert::ToString(result);
			isDecimal = false;
			break;
		case '%':
			result = (firstNumber / secondNumber)*100;
			DisplayResult->Text = System::Convert::ToString(result);
			isDecimal = false;
			break;
	}
}
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
	this->BackColor = System::Drawing::Color::Aqua;
	DisplayResult->Text = "0";
	isDecimal = false;
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button29_Click(System::Object^  sender, System::EventArgs^  e) {
	this->BackColor = System::Drawing::Color::Aqua;
	if (!isDecimal) {
		firstNumber = Convert::ToDouble(DisplayResult->Text);
		DisplayResult->Text = "0";
		operation = '+';
	}
	else {
		firstNumber = Convert::ToDouble(DisplayResult->Text) / 10;
		DisplayResult->Text = "0";
		operation = '+';
		isDecimal = false;
	}
}
private: System::Void button28_Click(System::Object^  sender, System::EventArgs^  e) {
	this->BackColor = System::Drawing::Color::Aqua;
	if (!isDecimal) {
		firstNumber = Convert::ToDouble(DisplayResult->Text);
		DisplayResult->Text = "0";
		operation = '-';
	}
	else {
		firstNumber = Convert::ToDouble(DisplayResult->Text) / 10;
		DisplayResult->Text = "0";
		operation = '-';
		isDecimal = false;
	}
}
private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
	this->BackColor = System::Drawing::Color::Aqua;
	double temp;
	if (!isDecimal) {
		temp = Convert::ToDouble(DisplayResult->Text);
		DisplayResult->Text = Convert::ToString(pow(temp, 3));
	}
	else {
		firstNumber = Convert::ToDouble(DisplayResult->Text) / 10;
		DisplayResult->Text = Convert::ToString(pow(temp, 3));
		isDecimal = false;
	}
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e) {
	this->BackColor = System::Drawing::Color::Aqua;
	double temp;
	if (!isDecimal) {
		temp = Convert::ToDouble(DisplayResult->Text);
		DisplayResult->Text = Convert::ToString(pow(10, temp));
	}
	else {
		temp = Convert::ToDouble(DisplayResult->Text) / 10;
		DisplayResult->Text = Convert::ToString(pow(10, temp));
		isDecimal = false;
	}
}
private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
	Mode->Text = "Rad";
	isRad = true;
}
private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
	this->BackColor = System::Drawing::Color::Aqua;
	double temp;
	if (!isDecimal) {
		temp = Convert::ToDouble(DisplayResult->Text);
		if (isRad) {
			DisplayResult->Text = Convert::ToString(cos(temp));
		}
		else {
			if (temp == 90) {
				DisplayResult->Text = "0";
			}
			else {
				DisplayResult->Text = Convert::ToString(cos((temp*pi) / 180));
			}
		}
	}
	else {
		temp = Convert::ToDouble(DisplayResult->Text) / 10;
		if (isRad) {
			DisplayResult->Text = Convert::ToString(cos(temp));
		}
		else {
			DisplayResult->Text = Convert::ToString(cos((temp*pi) / 180));
		}
		isDecimal = false;
	}
}
private: System::Void button23_Click(System::Object^  sender, System::EventArgs^  e) {
	this->BackColor = System::Drawing::Color::Aqua;
	double temp;
	if (!isDecimal) {
		temp = Convert::ToDouble(DisplayResult->Text);
		if (isRad) {
			DisplayResult->Text = Convert::ToString(tan(temp));
		}
		else {
			if (temp == 90) {
				DisplayResult->Text = "Undefined";
			}
			else {
				DisplayResult->Text = Convert::ToString(tan((temp*pi) / 180));
			}
			
		}
	}
	else {
		temp = Convert::ToDouble(DisplayResult->Text) / 10;
		if (isRad) {
			DisplayResult->Text = Convert::ToString(tan(temp));
		}
		else {
			DisplayResult->Text = Convert::ToString(tan((temp*pi) / 180));
		}
		isDecimal = false;
	}
}
private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
	DisplayResult->Text = Convert::ToString(pi);
}
private: System::Void button27_Click(System::Object^  sender, System::EventArgs^  e) {
	DisplayResult->Text = Convert::ToString(Euler);
}
private: System::Void button26_Click(System::Object^  sender, System::EventArgs^  e) {
	this->BackColor = System::Drawing::Color::Aqua;
	double temp;
	if (!isDecimal) {
		temp = Convert::ToDouble(DisplayResult->Text);
		DisplayResult->Text = Convert::ToString(pow(Euler, temp));
	}
	else {
		temp = Convert::ToDouble(DisplayResult->Text) / 10;
		DisplayResult->Text = Convert::ToString(pow(Euler, temp));
		isDecimal = false;
	}
}
private: System::Void button25_Click(System::Object^  sender, System::EventArgs^  e) {
	this->BackColor = System::Drawing::Color::Aqua;
	double temp;
	if (!isDecimal) {
		temp = Convert::ToDouble(DisplayResult->Text);
		DisplayResult->Text = Convert::ToString(sqrt(temp));
	}
	else {
		temp = Convert::ToDouble(DisplayResult->Text) / 10;
		DisplayResult->Text = Convert::ToString(sqrt(temp));
		isDecimal = false;
	}
}
private: System::Void button30_Click(System::Object^  sender, System::EventArgs^  e) {
	double temp;
	temp = Convert::ToDouble(DisplayResult->Text);
	if (temp > 0) {
		DisplayResult->Text = Convert::ToString(temp*-1);
	}
	else {
		DisplayResult->Text = Convert::ToString(temp*-1);
	}
}
};
}
