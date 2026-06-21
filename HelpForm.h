#pragma once
#include "Services/Localization.h"

namespace curs {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class HelpForm : public System::Windows::Forms::Form
	{
	public:
		int theme;
		HelpForm(void)
		{
			theme = 0;
			Localization::Initialize();
			InitializeComponent();
			ApplyLocalization();
		}

	protected:
		~HelpForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(HelpForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(185, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"О программе:";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(12, 62);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(370, 327);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = Localization::Get("help_text");
			// 
			// HelpForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(394, 401);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"HelpForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Справка";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ApplyLocalization() {
		this->Text = Localization::Get("help");
		label1->Text = Localization::Get("about") + ":";
		textBox1->Text = Localization::Get("help_text");
		ApplyTheme();
	}
	private: System::Void ApplyTheme() {
		if (theme == 0) {
			this->BackColor = Color::White;
			this->ForeColor = Color::Black;
			label1->ForeColor = Color::Black;
			textBox1->BackColor = Color::FromArgb(224, 224, 224);
			textBox1->ForeColor = Color::Black;
		}
		else if (theme == 1) {
			this->BackColor = Color::FromArgb(30, 30, 30);
			this->ForeColor = Color::White;
			label1->ForeColor = Color::White;
			textBox1->BackColor = Color::FromArgb(50, 50, 50);
			textBox1->ForeColor = Color::White;
		}
		else if (theme == 2) {
			this->BackColor = Color::FromArgb(200, 220, 240);
			this->ForeColor = Color::Black;
			label1->ForeColor = Color::Black;
			textBox1->BackColor = Color::White;
			textBox1->ForeColor = Color::Black;
		}
	}
	};
}
