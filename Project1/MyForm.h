#pragma comment(lib, "winmm.lib")
#include<Windows.h>


namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace System::IO;

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
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ nrmBtn;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ exitBtn;




	private: System::Windows::Forms::Button^ threshBtn;



	private: System::Windows::Forms::Button^ gryBtn;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ lfBtn;

	private: System::Windows::Forms::Button^ startBtn;
	private: System::Windows::Forms::Button^ rtBtn;


	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ txtBtn;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->exitBtn = (gcnew System::Windows::Forms::Button());
			this->txtBtn = (gcnew System::Windows::Forms::Button());
			this->threshBtn = (gcnew System::Windows::Forms::Button());
			this->gryBtn = (gcnew System::Windows::Forms::Button());
			this->nrmBtn = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->lfBtn = (gcnew System::Windows::Forms::Button());
			this->startBtn = (gcnew System::Windows::Forms::Button());
			this->rtBtn = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel5->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->panel1->Controls->Add(this->exitBtn);
			this->panel1->Controls->Add(this->txtBtn);
			this->panel1->Controls->Add(this->threshBtn);
			this->panel1->Controls->Add(this->gryBtn);
			this->panel1->Controls->Add(this->nrmBtn);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(229, 600);
			this->panel1->TabIndex = 0;
			// 
			// exitBtn
			// 
			this->exitBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->exitBtn->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->exitBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->exitBtn->Font = (gcnew System::Drawing::Font(L"Brush Script MT", 24, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->exitBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->exitBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"exitBtn.Image")));
			this->exitBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->exitBtn->Location = System::Drawing::Point(0, 542);
			this->exitBtn->Name = L"exitBtn";
			this->exitBtn->Size = System::Drawing::Size(229, 58);
			this->exitBtn->TabIndex = 1;
			this->exitBtn->Text = L"Exit";
			this->exitBtn->UseVisualStyleBackColor = false;
			this->exitBtn->Click += gcnew System::EventHandler(this, &MyForm::exitBtn_Click);
			// 
			// txtBtn
			// 
			this->txtBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->txtBtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->txtBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->txtBtn->Font = (gcnew System::Drawing::Font(L"Brush Script MT", 24, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->txtBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"txtBtn.Image")));
			this->txtBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->txtBtn->Location = System::Drawing::Point(0, 309);
			this->txtBtn->Name = L"txtBtn";
			this->txtBtn->Size = System::Drawing::Size(229, 58);
			this->txtBtn->TabIndex = 1;
			this->txtBtn->Text = L"Text";
			this->txtBtn->UseVisualStyleBackColor = false;
			this->txtBtn->Click += gcnew System::EventHandler(this, &MyForm::txtBtn_Click);
			// 
			// threshBtn
			// 
			this->threshBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->threshBtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->threshBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->threshBtn->Font = (gcnew System::Drawing::Font(L"Brush Script MT", 24, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->threshBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->threshBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"threshBtn.Image")));
			this->threshBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->threshBtn->Location = System::Drawing::Point(0, 251);
			this->threshBtn->Name = L"threshBtn";
			this->threshBtn->Size = System::Drawing::Size(229, 58);
			this->threshBtn->TabIndex = 1;
			this->threshBtn->Text = L"Threshold";
			this->threshBtn->UseVisualStyleBackColor = false;
			this->threshBtn->Click += gcnew System::EventHandler(this, &MyForm::threshBtn_Click);
			// 
			// gryBtn
			// 
			this->gryBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->gryBtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->gryBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->gryBtn->Font = (gcnew System::Drawing::Font(L"Brush Script MT", 24, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gryBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->gryBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gryBtn.Image")));
			this->gryBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->gryBtn->Location = System::Drawing::Point(0, 193);
			this->gryBtn->Name = L"gryBtn";
			this->gryBtn->Size = System::Drawing::Size(229, 58);
			this->gryBtn->TabIndex = 1;
			this->gryBtn->Text = L"Grayscale";
			this->gryBtn->UseVisualStyleBackColor = false;
			this->gryBtn->Click += gcnew System::EventHandler(this, &MyForm::gryBtn_Click);
			// 
			// nrmBtn
			// 
			this->nrmBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->nrmBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->nrmBtn->Dock = System::Windows::Forms::DockStyle::Top;
			this->nrmBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->nrmBtn->Font = (gcnew System::Drawing::Font(L"Brush Script MT", 24, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nrmBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(210)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->nrmBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"nrmBtn.Image")));
			this->nrmBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->nrmBtn->Location = System::Drawing::Point(0, 135);
			this->nrmBtn->Name = L"nrmBtn";
			this->nrmBtn->Size = System::Drawing::Size(229, 58);
			this->nrmBtn->TabIndex = 1;
			this->nrmBtn->Text = L"Normal";
			this->nrmBtn->UseVisualStyleBackColor = false;
			this->nrmBtn->Click += gcnew System::EventHandler(this, &MyForm::nrmBtn_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(229, 135);
			this->panel2->TabIndex = 0;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(43)));
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(229, 135);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->lfBtn);
			this->panel3->Controls->Add(this->startBtn);
			this->panel3->Controls->Add(this->rtBtn);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel3->Location = System::Drawing::Point(229, 526);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(871, 74);
			this->panel3->TabIndex = 1;
			// 
			// lfBtn
			// 
			this->lfBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->lfBtn->Dock = System::Windows::Forms::DockStyle::Right;
			this->lfBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lfBtn->Font = (gcnew System::Drawing::Font(L"Brush Script MT", 24, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lfBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->lfBtn->Location = System::Drawing::Point(796, 0);
			this->lfBtn->Name = L"lfBtn";
			this->lfBtn->Size = System::Drawing::Size(75, 74);
			this->lfBtn->TabIndex = 0;
			this->lfBtn->Text = L">";
			this->lfBtn->UseVisualStyleBackColor = false;
			this->lfBtn->Visible = false;
			this->lfBtn->Click += gcnew System::EventHandler(this, &MyForm::lfBtn_Click);
			// 
			// startBtn
			// 
			this->startBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->startBtn->Dock = System::Windows::Forms::DockStyle::Fill;
			this->startBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->startBtn->Font = (gcnew System::Drawing::Font(L"Brush Script MT", 24, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->startBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->startBtn->Location = System::Drawing::Point(75, 0);
			this->startBtn->Name = L"startBtn";
			this->startBtn->Size = System::Drawing::Size(796, 74);
			this->startBtn->TabIndex = 0;
			this->startBtn->Text = L"Start";
			this->startBtn->UseVisualStyleBackColor = false;
			this->startBtn->Click += gcnew System::EventHandler(this, &MyForm::startBtn_Click);
			// 
			// rtBtn
			// 
			this->rtBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->rtBtn->Dock = System::Windows::Forms::DockStyle::Left;
			this->rtBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->rtBtn->Font = (gcnew System::Drawing::Font(L"Brush Script MT", 24, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rtBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->rtBtn->Location = System::Drawing::Point(0, 0);
			this->rtBtn->Name = L"rtBtn";
			this->rtBtn->Size = System::Drawing::Size(75, 74);
			this->rtBtn->TabIndex = 0;
			this->rtBtn->Text = L"<";
			this->rtBtn->UseVisualStyleBackColor = false;
			this->rtBtn->Visible = false;
			this->rtBtn->Click += gcnew System::EventHandler(this, &MyForm::rtBtn_Click);
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->textBox1);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel4->Location = System::Drawing::Point(229, 476);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(871, 50);
			this->panel4->TabIndex = 2;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->textBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Bell MT", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->textBox1->Location = System::Drawing::Point(0, 0);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(871, 50);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"BOMBOANA 12 07 2007 1";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->pictureBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox2->Location = System::Drawing::Point(0, 0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(871, 476);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->panel5->Controls->Add(this->textBox2);
			this->panel5->Controls->Add(this->pictureBox2);
			this->panel5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel5->Location = System::Drawing::Point(229, 0);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(871, 476);
			this->panel5->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->textBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Bell MT", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->textBox2->Location = System::Drawing::Point(0, 0);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(871, 476);
			this->textBox2->TabIndex = 1;
			this->textBox2->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(10)),
				static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->ClientSize = System::Drawing::Size(1100, 600);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->ResumeLayout(false);

		}
		
		
#pragma endregion
		
		String^ ext = L".jpg";
		String^ path = L"res/mamo/mamo/";
		String^ path2 = L"res/proc/";

		String^ file = L"res/sani.txt";

		String^ Thresh = L"_Thresh";
		String^ Gray = L"_Gray_blur";
		String^ none = L"";

		int pos = 0,casasin=0;

		array< String^ >^ vals = gcnew array< String^ >(98);

		array<String^>^ Test0() {
			int i;
			array< String^ >^ local = gcnew array< String^ >(98);
			StreamReader^ din = File::OpenText(file);
			String^ str;
			int count = 0;
			while ((str = din->ReadLine()) != nullptr)
			{
				local[count] = str;
				count++;
				Console::WriteLine("line {0}: {1}", count, str);
			}
			return local;
		}

	private: System::Void exitBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox2->Clear();
		this->Close();
	}
		   void doSth(String^ anything)
		   {
			   textBox2->Clear();
			   textBox1->Clear();
			   textBox1->AppendText(vals[pos]);
			   if (casasin==0)
			   {
				   pictureBox2->Image = System::Drawing::Image::FromFile(path + vals[pos] + anything + ext);
			   }
			   else
			   {
				   pictureBox2->Image = System::Drawing::Image::FromFile(path2 + vals[pos] + anything + ext);
			   }
			   
		   }
	
private: System::Void nrmBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureBox2->Image = System::Drawing::Image::FromFile(path + vals[pos] + ext);
	textBox2->Visible = false;
	textBox2->Clear();
	casasin = 0;
}
private: System::Void gryBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox2->Visible = false;
	textBox2->Clear();
	casasin = 2;
	doSth(Gray);
}
private: System::Void threshBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox2->Visible = false;
	textBox2->Clear();
	casasin = 1;
	doSth(Thresh);
}
private: System::Void txtBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox2->Visible = true;
	textBox2->AppendText("There has been created a file named answers.txt");
}
private: System::Void startBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	vals = Test0();
	startBtn->Visible = false;
	lfBtn->Visible = true; 
	rtBtn->Visible = true;
	rtBtn->Width = 330;
	lfBtn->Width = 330;
	doSth(none);
}
private: System::Void rtBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	pos--;
	if (pos<0)
	{
		pos = 97;
	}
	switch (casasin)
	{
	case 1:
		doSth(Thresh);
		break;
	case 2:
		doSth(Gray);
		break;
	default:
		doSth(none);
		break;
	}
}
private: System::Void lfBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	pos++;
	if (pos >97)
	{
		pos = 0;
	}
	switch (casasin)
	{
	case 1:
		doSth(Thresh);
		break;
	case 2:
		doSth(Gray);
		break;
	default:
		doSth(none);
		break;
	}
}
};
}
