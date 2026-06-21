#pragma once
#include "Services/UserManager.h"
#include "Services/Localization.h"
namespace curs {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
		{
			InitializeComponent();
			UserManager::Initialize();
			ApplyLocalization();
		}
		property bool IsAuth {
			bool get() { return auth; }
		}
	protected:
		~LoginForm()
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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ComboBox^ langCombo;

	private:
		bool auth;
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->langCombo = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(125, 94);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(78, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Login";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(58, 166);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(58, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Username:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(58, 243);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(56, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Password:";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->textBox1->Location = System::Drawing::Point(61, 197);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(307, 20);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->textBox2->Location = System::Drawing::Point(61, 273);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(307, 20);
			this->textBox2->TabIndex = 4;
			this->textBox2->UseSystemPasswordChar = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(61, 330);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(131, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &LoginForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(237, 330);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(131, 23);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Register";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &LoginForm::button2_Click);
			// 
			// langCombo
			// 
			this->langCombo->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->langCombo->FormattingEnabled = true;
			this->langCombo->Items->AddRange(gcnew cli::array<System::Object^>(3) { L"RU", L"EN", L"BE" });
			this->langCombo->Location = System::Drawing::Point(365, 12);
			this->langCombo->Name = L"langCombo";
			this->langCombo->Size = System::Drawing::Size(50, 21);
			this->langCombo->TabIndex = 7;
			this->langCombo->SelectedIndex = 0;
			this->langCombo->SelectedIndexChanged += gcnew System::EventHandler(this, &LoginForm::langCombo_SelectedIndexChanged);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(429, 397);
			this->Controls->Add(this->langCombo);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"LoginForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Login";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ApplyLocalization() {
		this->Text = Localization::Get("login");
		label1->Text = Localization::Get("login");
		label2->Text = Localization::Get("username") + ":";
		label3->Text = Localization::Get("password") + ":";
		button1->Text = Localization::Get("enter");
		button2->Text = Localization::Get("register_new");
	}
	private: System::Void langCombo_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (langCombo->SelectedIndex == 0) Localization::SetLanguage(AppLanguage::Russian);
		else if (langCombo->SelectedIndex == 1) Localization::SetLanguage(AppLanguage::English);
		else Localization::SetLanguage(AppLanguage::Belarusian);
		ApplyLocalization();
	}
	private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ user_login = textBox1->Text->Trim();
			String^ user_password = textBox2->Text->Trim();
			if (user_login == "" || user_password == "") {
				MessageBox::Show(Localization::Get("wrong_login"), Localization::Get("error"), MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}
			bool us_log = UserManager::Login(user_login, user_password);
			if (us_log) { auth = true; this->Close(); }
			else {
				MessageBox::Show(Localization::Get("wrong_login"), Localization::Get("error"), MessageBoxButtons::OK, MessageBoxIcon::Error);
				this->textBox2->Clear();
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message, Localization::Get("error"), MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ user_login = textBox1->Text->Trim();
			String^ user_password = textBox2->Text->Trim();
			if (user_login == "" || user_password == "") {
				MessageBox::Show(Localization::Get("wrong_login"), Localization::Get("error"), MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}
			bool us_reg = UserManager::Register(user_login, user_password);
			if (us_reg) {
				MessageBox::Show(Localization::Get("registered"), Localization::Get("success"), MessageBoxButtons::OK, MessageBoxIcon::None);
				this->textBox1->Clear();
				this->textBox2->Clear();
			}
			else { MessageBox::Show(Localization::Get("user_exists"), Localization::Get("error"), MessageBoxButtons::OK, MessageBoxIcon::Error); }
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message, Localization::Get("error"), MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	};
}
