#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for StartForm
	/// </summary>
	public ref class StartForm : public System::Windows::Forms::Form
	{
	public:
		StartForm(void)
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
		~StartForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ StartBtn;

	private: System::Windows::Forms::Button^ AbtBtn;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ BackBtn;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StartForm::typeid));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->StartBtn = (gcnew System::Windows::Forms::Button());
			this->AbtBtn = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->BackBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Brush Script MT", 48, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label3->Location = System::Drawing::Point(360, 18);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(348, 98);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Cancer Lab";
			// 
			// StartBtn
			// 
			this->StartBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->StartBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->StartBtn->Font = (gcnew System::Drawing::Font(L"Brush Script MT", 24, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StartBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->StartBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->StartBtn->Location = System::Drawing::Point(435, 258);
			this->StartBtn->Name = L"StartBtn";
			this->StartBtn->Size = System::Drawing::Size(229, 58);
			this->StartBtn->TabIndex = 3;
			this->StartBtn->Text = L"Start";
			this->StartBtn->UseVisualStyleBackColor = false;
			this->StartBtn->Click += gcnew System::EventHandler(this, &StartForm::StartBtn_Click);
			// 
			// AbtBtn
			// 
			this->AbtBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->AbtBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AbtBtn->Font = (gcnew System::Drawing::Font(L"Brush Script MT", 24, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AbtBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->AbtBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->AbtBtn->Location = System::Drawing::Point(435, 334);
			this->AbtBtn->Name = L"AbtBtn";
			this->AbtBtn->Size = System::Drawing::Size(229, 58);
			this->AbtBtn->TabIndex = 3;
			this->AbtBtn->Text = L"About";
			this->AbtBtn->UseVisualStyleBackColor = false;
			this->AbtBtn->Click += gcnew System::EventHandler(this, &StartForm::AbtBtn_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->textBox1->Cursor = System::Windows::Forms::Cursors::Default;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->textBox1->Location = System::Drawing::Point(0, 119);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(1100, 417);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = resources->GetString(L"textBox1.Text");
			this->textBox1->Visible = false;
			// 
			// BackBtn
			// 
			this->BackBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->BackBtn->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->BackBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BackBtn->Font = (gcnew System::Drawing::Font(L"Brush Script MT", 28.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BackBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->BackBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->BackBtn->Location = System::Drawing::Point(0, 542);
			this->BackBtn->Name = L"BackBtn";
			this->BackBtn->Size = System::Drawing::Size(1100, 58);
			this->BackBtn->TabIndex = 3;
			this->BackBtn->Text = L"Back";
			this->BackBtn->UseVisualStyleBackColor = false;
			this->BackBtn->Visible = false;
			this->BackBtn->Click += gcnew System::EventHandler(this, &StartForm::BackBtn_Click);
			// 
			// StartForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1100, 600);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->AbtBtn);
			this->Controls->Add(this->BackBtn);
			this->Controls->Add(this->StartBtn);
			this->Controls->Add(this->label3);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"StartForm";
			this->Opacity = 0.9;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"StartForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void AbtBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Visible = true;
	BackBtn->Visible = true;
}

private: System::Void StartBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}

private: System::Void BackBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Visible = false;
	BackBtn->Visible = false;
}

};
}
