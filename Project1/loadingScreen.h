#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;

	/// <summary>
	/// Summary for loadingScreen
	/// </summary>
	public ref class loadingScreen : public System::Windows::Forms::Form
	{
	public:
		loadingScreen(void)
		{
			InitializeComponent();
			progBar->Value = 0;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~loadingScreen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ProgressBar^ progBar;
	private: System::Windows::Forms::Label^ Loading;
	protected:


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(loadingScreen::typeid));
			this->progBar = (gcnew System::Windows::Forms::ProgressBar());
			this->Loading = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// progBar
			// 
			this->progBar->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->progBar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(90)));
			this->progBar->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->progBar->Location = System::Drawing::Point(300, 500);
			this->progBar->Name = L"progBar";
			this->progBar->Size = System::Drawing::Size(500, 20);
			this->progBar->TabIndex = 0;
			// 
			// Loading
			// 
			this->Loading->AutoSize = true;
			this->Loading->BackColor = System::Drawing::Color::Transparent;
			this->Loading->Font = (gcnew System::Drawing::Font(L"Brush Script MT", 25.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Loading->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Loading->Location = System::Drawing::Point(457, 443);
			this->Loading->Name = L"Loading";
			this->Loading->Size = System::Drawing::Size(182, 53);
			this->Loading->TabIndex = 1;
			this->Loading->Text = L"Loading...";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Californian FB", 10.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label2->Location = System::Drawing::Point(444, 569);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(177, 22);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Copyright © team GynTech";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Brush Script MT", 48, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label3->Location = System::Drawing::Point(380, 40);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(348, 98);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Cancer Lab";
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &loadingScreen::timer1_Tick);
			// 
			// loadingScreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1100, 600);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Loading);
			this->Controls->Add(this->progBar);
			this->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"loadingScreen";
			this->Opacity = 0.9;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"loadingScreen";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		progBar->Value += 1;
		Loading->Text = "Loading... " + progBar->Value.ToString() + " %";
		if (progBar->Value==100)
		{
			timer1->Enabled = false;
			this->Close();
			
			//Project1::startScreen obj2;

		}
	}
};
}
