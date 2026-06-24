#pragma once
#include "GraphClasses.h"
#include "FileManager.h"
#include "Localization.h"
#include "UserManager.h"
#include "HelpForm.h"

namespace curs {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			Localization::Initialize();
			graph = gcnew Graph();
			currentTheme = 0;
			InitializeComponent();
			ApplyLocalization();
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		System::Windows::Forms::MenuStrip^ menuStrip1;
		System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
		System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem2;
		System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem3;
		System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem4;
		System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem5;
		System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem6;
		System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem7;
		System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem8;
		System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem9;
		System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem10;
		System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem11;
		System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem12;
		System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem13;
		System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem14;
		System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem15;
		System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem16;
		System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem17;
		Graph^ graph;
		int currentTheme;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ comboBox1;

		   System::ComponentModel::Container^ components;

#pragma region
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			   this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			   this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->toolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->toolStripMenuItem5 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->toolStripMenuItem6 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->toolStripMenuItem7 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->toolStripMenuItem8 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->toolStripMenuItem9 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->toolStripMenuItem10 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->toolStripMenuItem11 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->toolStripMenuItem12 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->toolStripMenuItem13 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->toolStripMenuItem14 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->toolStripMenuItem15 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->toolStripMenuItem16 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->toolStripMenuItem17 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->panel1 = (gcnew System::Windows::Forms::Panel());
			   this->button4 = (gcnew System::Windows::Forms::Button());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			   this->button3 = (gcnew System::Windows::Forms::Button());
			   this->button2 = (gcnew System::Windows::Forms::Button());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			   this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			   this->menuStrip1->SuspendLayout();
			   this->panel1->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // menuStrip1
			   // 
			   this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				   this->toolStripMenuItem1, this->toolStripMenuItem8,
					   this->toolStripMenuItem12, this->toolStripMenuItem16
			   });
			   resources->ApplyResources(this->menuStrip1, L"menuStrip1");
			   this->menuStrip1->Name = L"menuStrip1";
			   // 
			   // toolStripMenuItem1
			   // 
			   this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				   this->toolStripMenuItem2, this->toolStripMenuItem3,
					   this->toolStripMenuItem4, this->toolStripMenuItem5, this->toolStripMenuItem6, this->toolStripMenuItem7
			   });
			   this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			   resources->ApplyResources(this->toolStripMenuItem1, L"toolStripMenuItem1");
			   // 
			   // toolStripMenuItem2
			   // 
			   this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			   resources->ApplyResources(this->toolStripMenuItem2, L"toolStripMenuItem2");
			   this->toolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem2_Click);
			   // 
			   // toolStripMenuItem3
			   // 
			   this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
			   resources->ApplyResources(this->toolStripMenuItem3, L"toolStripMenuItem3");
			   this->toolStripMenuItem3->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem3_Click);
			   // 
			   // toolStripMenuItem4
			   // 
			   this->toolStripMenuItem4->Name = L"toolStripMenuItem4";
			   resources->ApplyResources(this->toolStripMenuItem4, L"toolStripMenuItem4");
			   this->toolStripMenuItem4->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem4_Click);
			   // 
			   // toolStripMenuItem5
			   // 
			   this->toolStripMenuItem5->Name = L"toolStripMenuItem5";
			   resources->ApplyResources(this->toolStripMenuItem5, L"toolStripMenuItem5");
			   this->toolStripMenuItem5->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem5_Click);
			   // 
			   // toolStripMenuItem6
			   // 
			   this->toolStripMenuItem6->Name = L"toolStripMenuItem6";
			   resources->ApplyResources(this->toolStripMenuItem6, L"toolStripMenuItem6");
			   this->toolStripMenuItem6->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem6_Click);
			   // 
			   // toolStripMenuItem7
			   // 
			   this->toolStripMenuItem7->Name = L"toolStripMenuItem7";
			   resources->ApplyResources(this->toolStripMenuItem7, L"toolStripMenuItem7");
			   this->toolStripMenuItem7->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem7_Click);
			   // 
			   // toolStripMenuItem8
			   // 
			   this->toolStripMenuItem8->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				   this->toolStripMenuItem9,
					   this->toolStripMenuItem10, this->toolStripMenuItem11
			   });
			   this->toolStripMenuItem8->Name = L"toolStripMenuItem8";
			   resources->ApplyResources(this->toolStripMenuItem8, L"toolStripMenuItem8");
			   // 
			   // toolStripMenuItem9
			   // 
			   this->toolStripMenuItem9->Name = L"toolStripMenuItem9";
			   resources->ApplyResources(this->toolStripMenuItem9, L"toolStripMenuItem9");
			   this->toolStripMenuItem9->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem9_Click);
			   // 
			   // toolStripMenuItem10
			   // 
			   this->toolStripMenuItem10->Name = L"toolStripMenuItem10";
			   resources->ApplyResources(this->toolStripMenuItem10, L"toolStripMenuItem10");
			   this->toolStripMenuItem10->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem10_Click);
			   // 
			   // toolStripMenuItem11
			   // 
			   this->toolStripMenuItem11->Name = L"toolStripMenuItem11";
			   resources->ApplyResources(this->toolStripMenuItem11, L"toolStripMenuItem11");
			   this->toolStripMenuItem11->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem11_Click);
			   // 
			   // toolStripMenuItem12
			   // 
			   this->toolStripMenuItem12->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				   this->toolStripMenuItem13, this->toolStripMenuItem14,
					   this->toolStripMenuItem15
			   });
			   this->toolStripMenuItem12->Name = L"toolStripMenuItem12";
			   resources->ApplyResources(this->toolStripMenuItem12, L"toolStripMenuItem12");
			   // 
			   // toolStripMenuItem13
			   // 
			   this->toolStripMenuItem13->Name = L"toolStripMenuItem13";
			   resources->ApplyResources(this->toolStripMenuItem13, L"toolStripMenuItem13");
			   this->toolStripMenuItem13->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem13_Click);
			   // 
			   // toolStripMenuItem14
			   // 
			   this->toolStripMenuItem14->Name = L"toolStripMenuItem14";
			   resources->ApplyResources(this->toolStripMenuItem14, L"toolStripMenuItem14");
			   this->toolStripMenuItem14->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem14_Click);
			   // 
			   // toolStripMenuItem15
			   // 
			   this->toolStripMenuItem15->Name = L"toolStripMenuItem15";
			   resources->ApplyResources(this->toolStripMenuItem15, L"toolStripMenuItem15");
			   this->toolStripMenuItem15->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem15_Click);
			   // 
			   // toolStripMenuItem16
			   // 
			   this->toolStripMenuItem16->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripMenuItem17 });
			   this->toolStripMenuItem16->Name = L"toolStripMenuItem16";
			   resources->ApplyResources(this->toolStripMenuItem16, L"toolStripMenuItem16");
			   // 
			   // toolStripMenuItem17
			   // 
			   this->toolStripMenuItem17->Name = L"toolStripMenuItem17";
			   resources->ApplyResources(this->toolStripMenuItem17, L"toolStripMenuItem17");
			   this->toolStripMenuItem17->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem17_Click);
			   // 
			   // panel1
			   // 
			   this->panel1->BackColor = System::Drawing::SystemColors::Control;
			   this->panel1->Controls->Add(this->button4);
			   this->panel1->Controls->Add(this->label4);
			   this->panel1->Controls->Add(this->comboBox1);
			   this->panel1->Controls->Add(this->button3);
			   this->panel1->Controls->Add(this->button2);
			   this->panel1->Controls->Add(this->button1);
			   this->panel1->Controls->Add(this->comboBox3);
			   this->panel1->Controls->Add(this->label3);
			   this->panel1->Controls->Add(this->comboBox2);
			   this->panel1->Controls->Add(this->label2);
			   this->panel1->Controls->Add(this->textBox1);
			   this->panel1->Controls->Add(this->label1);
			   resources->ApplyResources(this->panel1, L"panel1");
			   this->panel1->Name = L"panel1";
			   // 
			   // button4
			   // 
			   this->button4->ForeColor = System::Drawing::Color::Black;
			   resources->ApplyResources(this->button4, L"button4");
			   this->button4->Name = L"button4";
			   this->button4->UseVisualStyleBackColor = true;
			   this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			   // 
			   // label4
			   // 
			   resources->ApplyResources(this->label4, L"label4");
			   this->label4->ForeColor = System::Drawing::Color::Black;
			   this->label4->Name = L"label4";
			   // 
			   // comboBox1
			   // 
			   this->comboBox1->FormattingEnabled = true;
			   resources->ApplyResources(this->comboBox1, L"comboBox1");
			   this->comboBox1->Name = L"comboBox1";
			   this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			   // 
			   // button3
			   // 
			   this->button3->ForeColor = System::Drawing::Color::Black;
			   resources->ApplyResources(this->button3, L"button3");
			   this->button3->Name = L"button3";
			   this->button3->UseVisualStyleBackColor = true;
			   this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			   // 
			   // button2
			   // 
			   this->button2->ForeColor = System::Drawing::Color::Black;
			   resources->ApplyResources(this->button2, L"button2");
			   this->button2->Name = L"button2";
			   this->button2->UseVisualStyleBackColor = true;
			   this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			   // 
			   // button1
			   // 
			   this->button1->ForeColor = System::Drawing::Color::Black;
			   resources->ApplyResources(this->button1, L"button1");
			   this->button1->Name = L"button1";
			   this->button1->UseVisualStyleBackColor = true;
			   this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			   // 
			   // comboBox3
			   // 
			   this->comboBox3->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			   this->comboBox3->FormattingEnabled = true;
			   resources->ApplyResources(this->comboBox3, L"comboBox3");
			   this->comboBox3->Name = L"comboBox3";
			   // 
			   // label3
			   // 
			   resources->ApplyResources(this->label3, L"label3");
			   this->label3->ForeColor = System::Drawing::Color::Black;
			   this->label3->Name = L"label3";
			   // 
			   // comboBox2
			   // 
			   this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			   this->comboBox2->FormattingEnabled = true;
			   resources->ApplyResources(this->comboBox2, L"comboBox2");
			   this->comboBox2->Name = L"comboBox2";
			   // 
			   // label2
			   // 
			   resources->ApplyResources(this->label2, L"label2");
			   this->label2->ForeColor = System::Drawing::Color::Black;
			   this->label2->Name = L"label2";
			   // 
			   // textBox1
			   // 
			   this->textBox1->BackColor = System::Drawing::Color::White;
			   resources->ApplyResources(this->textBox1, L"textBox1");
			   this->textBox1->Name = L"textBox1";
			   // 
			   // label1
			   // 
			   resources->ApplyResources(this->label1, L"label1");
			   this->label1->ForeColor = System::Drawing::Color::Black;
			   this->label1->Name = L"label1";
			   // 
			   // pictureBox1
			   // 
			   this->pictureBox1->BackColor = System::Drawing::Color::White;
			   resources->ApplyResources(this->pictureBox1, L"pictureBox1");
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->TabStop = false;
			   this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox1_Paint);
			   this->pictureBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseClick);
			   // 
			   // listBox1
			   // 
			   resources->ApplyResources(this->listBox1, L"listBox1");
			   this->listBox1->FormattingEnabled = true;
			   this->listBox1->Name = L"listBox1";
			   // 
			   // MyForm
			   // 
			   resources->ApplyResources(this, L"$this");
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::Color::White;
			   this->Controls->Add(this->listBox1);
			   this->Controls->Add(this->panel1);
			   this->Controls->Add(this->menuStrip1);
			   this->Controls->Add(this->pictureBox1);
			   this->ForeColor = System::Drawing::Color::White;
			   this->MainMenuStrip = this->menuStrip1;
			   this->Name = L"MyForm";
			   this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			   this->menuStrip1->ResumeLayout(false);
			   this->menuStrip1->PerformLayout();
			   this->panel1->ResumeLayout(false);
			   this->panel1->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
	private: System::Void toolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
		SaveFileDialog^ dlg = gcnew SaveFileDialog();
		dlg->Filter = "Text files (*.txt)|*.txt";
		dlg->DefaultExt = "txt";
		if (dlg->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			List<String^>^ vLines = gcnew List<String^>();
			List<String^>^ eLines = gcnew List<String^>();
			for (int i = 0; i < graph->Vertices->Count; i++) {
				vLines->Add(graph->Vertices[i]->Name + "," + graph->Vertices[i]->X + "," + graph->Vertices[i]->Y);
			}
			for (int i = 0; i < graph->Edges->Count; i++) {
				eLines->Add(graph->Edges[i]->FromIndex + "," + graph->Edges[i]->ToIndex);
			}
			FileManager::SaveToTXT(dlg->FileName, vLines, eLines);
		}
	}

	private: System::Void toolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
		SaveFileDialog^ dlg = gcnew SaveFileDialog();
		dlg->Filter = "Binary files (*.bin)|*.bin";
		dlg->DefaultExt = "bin";
		if (dlg->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			List<String^>^ vLines = gcnew List<String^>();
			List<String^>^ eLines = gcnew List<String^>();
			for (int i = 0; i < graph->Vertices->Count; i++) {
				vLines->Add(graph->Vertices[i]->Name + "," + graph->Vertices[i]->X + "," + graph->Vertices[i]->Y);
			}
			for (int i = 0; i < graph->Edges->Count; i++) {
				eLines->Add(graph->Edges[i]->FromIndex + "," + graph->Edges[i]->ToIndex);
			}
			FileManager::SaveToBIN(dlg->FileName, vLines, eLines);
		}
	}

	private: System::Void toolStripMenuItem4_Click(System::Object^ sender, System::EventArgs^ e) {
		SaveFileDialog^ dlg = gcnew SaveFileDialog();
		dlg->Filter = "Word documents (*.docx)|*.docx";
		dlg->DefaultExt = "docx";
		if (dlg->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			List<String^>^ vLines = gcnew List<String^>();
			List<String^>^ eLines = gcnew List<String^>();
			for (int i = 0; i < graph->Vertices->Count; i++) {
				vLines->Add(graph->Vertices[i]->Name + "," + graph->Vertices[i]->X + "," + graph->Vertices[i]->Y);
			}
			for (int i = 0; i < graph->Edges->Count; i++) {
				eLines->Add(graph->Edges[i]->FromIndex + "," + graph->Edges[i]->ToIndex);
			}
			FileManager::SaveToDOCX(dlg->FileName, vLines, eLines);
		}
	}

	private: System::Void toolStripMenuItem5_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			OpenFileDialog^ ofg = gcnew OpenFileDialog();
			ofg->Filter = "Text files (*.txt)|*.txt";
			if (ofg->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				List<String^>^ vLines = gcnew List<String^>();
				List<String^>^ eLines = gcnew List<String^>();
				FileManager::LoadFromTXT(ofg->FileName, vLines, eLines);
				graph = gcnew Graph();
				for (int i = 0; i < vLines->Count; i++) {
					String^ line = vLines[i];
					int p1 = line->IndexOf(',');
					int p2 = line->IndexOf(',', p1 + 1);
					if (p1 >= 0 && p2 >= 0) {
						String^ name = line->Substring(0, p1);
						int x = 0, y = 0;
						Int32::TryParse(line->Substring(p1 + 1, p2 - p1 - 1), x);
						Int32::TryParse(line->Substring(p2 + 1), y);
						graph->AddVertex(name, x, y);
					}
				}
				UpdateComboBox();
				for (int i = 0; i < eLines->Count; i++) {
					String^ line = eLines[i];
					int p1 = line->IndexOf(',');
					if (p1 >= 0) {
						int from = 0, to = 0;
						Int32::TryParse(line->Substring(0, p1), from);
						Int32::TryParse(line->Substring(p1 + 1), to);
						graph->AddEdge(from, to);
					}

				}
				UpdateComboBox();
				pictureBox1->Invalidate();
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show(Localization::Get("err_file_load"), Localization::Get("error"), MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void toolStripMenuItem6_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			OpenFileDialog^ ofg = gcnew OpenFileDialog();
			ofg->Filter = "Binary files (*.bin)|*.bin";
			if (ofg->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				List<String^>^ vLines = gcnew List<String^>();
				List<String^>^ eLines = gcnew List<String^>();
				FileManager::LoadFromBIN(ofg->FileName, vLines, eLines);
				graph = gcnew Graph();
				for (int i = 0; i < vLines->Count; i++) {
					String^ line = vLines[i];
					int p1 = line->IndexOf(',');
					int p2 = line->IndexOf(',', p1 + 1);
					if (p1 >= 0 && p2 >= 0) {
						String^ name = line->Substring(0, p1);
						int x = 0, y = 0;
						Int32::TryParse(line->Substring(p1 + 1, p2 - p1 - 1), x);
						Int32::TryParse(line->Substring(p2 + 1), y);
						graph->AddVertex(name, x, y);
					}
				}
				for (int i = 0; i < eLines->Count; i++) {
					String^ line = eLines[i];
					int p1 = line->IndexOf(',');
					if (p1 >= 0) {
						int from = 0, to = 0;
						Int32::TryParse(line->Substring(0, p1), from);
						Int32::TryParse(line->Substring(p1 + 1), to);
						graph->AddEdge(from, to);
					}
				}
				UpdateComboBox();
				pictureBox1->Invalidate();
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show(Localization::Get("err_file_load"), Localization::Get("error"), MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void toolStripMenuItem7_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			OpenFileDialog^ ofg = gcnew OpenFileDialog();
			ofg->Filter = "Word documents (*.docx)|*.docx";
			if (ofg->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				List<String^>^ vLines = gcnew List<String^>();
				List<String^>^ eLines = gcnew List<String^>();
				FileManager::LoadFromDOCX(ofg->FileName, vLines, eLines);
				graph = gcnew Graph();
				for (int i = 0; i < vLines->Count; i++) {
					String^ line = vLines[i];
					int p1 = line->IndexOf(',');
					int p2 = line->IndexOf(',', p1 + 1);
					if (p1 >= 0 && p2 >= 0) {
						String^ name = line->Substring(0, p1);
						int x = 0, y = 0;
						Int32::TryParse(line->Substring(p1 + 1, p2 - p1 - 1), x);
						Int32::TryParse(line->Substring(p2 + 1), y);
						graph->AddVertex(name, x, y);
					}
				}
				UpdateComboBox();
				for (int i = 0; i < eLines->Count; i++) {
					String^ line = eLines[i];
					int p1 = line->IndexOf(',');
					if (p1 >= 0) {
						int from = 0, to = 0;
						Int32::TryParse(line->Substring(0, p1), from);
						Int32::TryParse(line->Substring(p1 + 1), to);
						graph->AddEdge(from, to);
					}
				}
				UpdateComboBox();
				pictureBox1->Invalidate();
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show(Localization::Get("err_file_load"), Localization::Get("error"), MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private:System::Void ApplyLocalization() {
		this->Text = Localization::Get("app_title");
		toolStripMenuItem1->Text = Localization::Get("file");
		toolStripMenuItem2->Text = Localization::Get("save_txt");
		toolStripMenuItem3->Text = Localization::Get("save_bin");
		toolStripMenuItem4->Text = Localization::Get("save_docx");
		toolStripMenuItem5->Text = Localization::Get("load_txt");
		toolStripMenuItem6->Text = Localization::Get("load_bin");
		toolStripMenuItem7->Text = Localization::Get("load_docx");
		toolStripMenuItem8->Text = Localization::Get("language");
		toolStripMenuItem9->Text = Localization::Get("rus");
		toolStripMenuItem10->Text = Localization::Get("eng");
		toolStripMenuItem11->Text = Localization::Get("bel");
		toolStripMenuItem12->Text = Localization::Get("view");
		toolStripMenuItem13->Text = Localization::Get("color1");
		toolStripMenuItem14->Text = Localization::Get("color2");
		toolStripMenuItem15->Text = Localization::Get("color3");
		toolStripMenuItem16->Text = Localization::Get("help");
		toolStripMenuItem17->Text = Localization::Get("about");
		label1->Text = Localization::Get("name") + ":";
		label2->Text = Localization::Get("from") + ":";
		label3->Text = Localization::Get("to") + ":";
		label4->Text = Localization::Get("select_vertex") + ":";
		button1->Text = Localization::Get("add_edge");
		button2->Text = Localization::Get("remove_vertex");
		button3->Text = Localization::Get("clear");
		button4->Text = Localization::Get("run_dfs");
	}

	private: System::Void toolStripMenuItem9_Click(System::Object^ sender, System::EventArgs^ e) {
		Localization::SetLanguage(AppLanguage::Russian);
		ApplyLocalization();
	}

	private: System::Void toolStripMenuItem10_Click(System::Object^ sender, System::EventArgs^ e) {
		Localization::SetLanguage(AppLanguage::English);
		ApplyLocalization();
	}

	private: System::Void toolStripMenuItem11_Click(System::Object^ sender, System::EventArgs^ e) {
		Localization::SetLanguage(AppLanguage::Belarusian);
		ApplyLocalization();
	}

	private: System::Void toolStripMenuItem13_Click(System::Object^ sender, System::EventArgs^ e) {
		currentTheme = 0;
		Color bg = System::Drawing::Color::White;
		Color fg = System::Drawing::Color::Black;
		Color ctrlBg = System::Drawing::Color::FromArgb(224, 224, 224);
		this->BackColor = bg;
		this->ForeColor = fg;
		menuStrip1->BackColor = bg;
		menuStrip1->ForeColor = fg;
		panel1->BackColor = System::Drawing::SystemColors::Control;
		pictureBox1->BackColor = bg;
		listBox1->BackColor = bg;
		listBox1->ForeColor = fg;
		for (int i = 0; i < panel1->Controls->Count; i++) {
			Control^ c = panel1->Controls[i];
			c->ForeColor = fg;
			if (dynamic_cast<Button^>(c)) c->BackColor = System::Drawing::SystemColors::Control;
			else if (dynamic_cast<Label^>(c)) c->BackColor = System::Drawing::SystemColors::Control;
			else if (dynamic_cast<TextBox^>(c)) c->BackColor = ctrlBg;
			else if (dynamic_cast<ComboBox^>(c)) c->BackColor = System::Drawing::SystemColors::Window;
		}
		pictureBox1->Invalidate();
	}
	private: System::Void toolStripMenuItem14_Click(System::Object^ sender, System::EventArgs^ e) {
		currentTheme = 1;
		Color bg = System::Drawing::Color::FromArgb(30, 30, 30);
		Color fg = System::Drawing::Color::White;
		Color ctrlBg = System::Drawing::Color::FromArgb(50, 50, 50);
		Color menuBg = System::Drawing::Color::FromArgb(50, 50, 50);
		this->BackColor = bg;
		this->ForeColor = fg;
		menuStrip1->BackColor = menuBg;
		menuStrip1->ForeColor = fg;
		panel1->BackColor = menuBg;
		pictureBox1->BackColor = System::Drawing::Color::FromArgb(20, 20, 20);
		listBox1->BackColor = ctrlBg;
		listBox1->ForeColor = fg;
		for (int i = 0; i < panel1->Controls->Count; i++) {
			Control^ c = panel1->Controls[i];
			c->ForeColor = fg;
			if (dynamic_cast<Button^>(c)) c->BackColor = ctrlBg;
			else if (dynamic_cast<Label^>(c)) c->BackColor = menuBg;
			else if (dynamic_cast<TextBox^>(c)) c->BackColor = ctrlBg;
			else if (dynamic_cast<ComboBox^>(c)) c->BackColor = ctrlBg;
		}
		pictureBox1->Invalidate();
	}

	private: System::Void toolStripMenuItem15_Click(System::Object^ sender, System::EventArgs^ e) {
		currentTheme = 2;
		Color bg = System::Drawing::Color::FromArgb(200, 220, 240);
		Color fg = System::Drawing::Color::Black;
		Color ctrlBg = System::Drawing::Color::FromArgb(170, 200, 230);
		this->BackColor = bg;
		this->ForeColor = fg;
		menuStrip1->BackColor = ctrlBg;
		menuStrip1->ForeColor = fg;
		panel1->BackColor = ctrlBg;
		pictureBox1->BackColor = System::Drawing::Color::FromArgb(210, 225, 245);
		listBox1->BackColor = System::Drawing::Color::White;
		listBox1->ForeColor = fg;
		for (int i = 0; i < panel1->Controls->Count; i++) {
			Control^ c = panel1->Controls[i];
			c->ForeColor = fg;
			if (dynamic_cast<Button^>(c)) c->BackColor = System::Drawing::Color::FromArgb(180, 210, 235);
			else if (dynamic_cast<Label^>(c)) c->BackColor = ctrlBg;
			else if (dynamic_cast<TextBox^>(c)) c->BackColor = System::Drawing::Color::White;
			else if (dynamic_cast<ComboBox^>(c)) c->BackColor = System::Drawing::Color::White;
		}
		pictureBox1->Invalidate();
	}

	private: System::Void toolStripMenuItem17_Click(System::Object^ sender, System::EventArgs^ e) {
		HelpForm^ dlg = gcnew HelpForm();
		dlg->theme = currentTheme;
		dlg->ApplyTheme();
		dlg->ShowDialog(this);
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			if (graph->Vertices->Count < 2) {
				MessageBox::Show(Localization::Get("err_no_vertices_edge"), Localization::Get("error"), MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}
			if (comboBox2->SelectedIndex < 0 || comboBox3->SelectedIndex < 0) {
				MessageBox::Show(Localization::Get("err_empty_fields"), Localization::Get("error"), MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}
			int resultfrom = comboBox2->SelectedIndex;
			int resultto = comboBox3->SelectedIndex;
			if (resultfrom == resultto) {
				MessageBox::Show(Localization::Get("err_same_vertex"), Localization::Get("error"), MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}
			for (int i = 0; i < graph->Edges->Count; i++) {
				if ((graph->Edges[i]->FromIndex == resultfrom && graph->Edges[i]->ToIndex == resultto) ||
					(graph->Edges[i]->FromIndex == resultto && graph->Edges[i]->ToIndex == resultfrom)) {
					MessageBox::Show(Localization::Get("err_edge_exists"), Localization::Get("error"), MessageBoxButtons::OK, MessageBoxIcon::Warning);
					return;
				}
			}
			auto AE_result = graph->AddEdge(resultfrom, resultto);
			if (!AE_result) {
				MessageBox::Show(Localization::Get("err_add_edge"), Localization::Get("error"), MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}
			pictureBox1->Invalidate();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message, Localization::Get("error"), MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ text_TB1 = this->textBox1->Text;
			if (text_TB1 == "") {
				MessageBox::Show(Localization::Get("err_empty_name"), Localization::Get("error"), MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}
			int index = graph->FindVertexIndex(text_TB1);
			if (index == -1) {
				MessageBox::Show(Localization::Get("err_vertex_not_found"), Localization::Get("error"), MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}
			graph->RemoveVertex(index);
			textBox1->Clear();
			pictureBox1->Invalidate();
			UpdateComboBox();
		}
		catch (Exception^) {}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			graph = gcnew Graph();
			pictureBox1->Invalidate();
			UpdateComboBox();
		}
		catch (Exception^) {}
	}
	private: System::Void pictureBox1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		try {
			if (e->Button == System::Windows::Forms::MouseButtons::Left) {
				String^ name = "V" + (graph->Vertices->Count + 1);
				graph->AddVertex(name, e->X, e->Y);
				pictureBox1->Invalidate();
				UpdateComboBox();
			}
			else if (e->Button == System::Windows::Forms::MouseButtons::Right) {
				if (graph->Vertices->Count == 0) return;
				int bestIdx = -1;
				int bestDist = 1000;
				for (int i = 0; i < graph->Vertices->Count; i++) {
					int dx = graph->Vertices[i]->X - e->X;
					int dy = graph->Vertices[i]->Y - e->Y;
					int dist = dx * dx + dy * dy;
					if (dist < bestDist) {
						bestDist = dist;
						bestIdx = i;
					}
				}
				if (bestIdx >= 0 && bestDist <= 900) {
					graph->RemoveVertex(bestIdx);
					pictureBox1->Invalidate();
					UpdateComboBox();
				}
			}
		}
		catch (Exception^) {}
	}
	private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		try {
			Color edgeColor, vertexFill, vertexBorder, textColor;
			if (currentTheme == 1) {
				edgeColor = Color::FromArgb(100, 200, 255);
				vertexFill = Color::FromArgb(70, 130, 180);
				vertexBorder = Color::FromArgb(100, 200, 255);
				textColor = Color::White;
			}
			else if (currentTheme == 2) {
				edgeColor = Color::FromArgb(80, 80, 120);
				vertexFill = Color::FromArgb(180, 210, 160);
				vertexBorder = Color::FromArgb(80, 80, 120);
				textColor = Color::Black;
			}
			else {
				edgeColor = Color::Black;
				vertexFill = Color::LightBlue;
				vertexBorder = Color::Black;
				textColor = Color::Black;
			}
			Pen^ pen = gcnew Pen(edgeColor, 2);
			Pen^ borderPen = gcnew Pen(vertexBorder, 2);
			SolidBrush^ brush = gcnew SolidBrush(vertexFill);
			SolidBrush^ textBrush = gcnew SolidBrush(textColor);
			System::Drawing::Font^ font = gcnew System::Drawing::Font("Arial", 9);
			for (int i = 0; i < graph->Edges->Count; i++) {
				int from = graph->Edges[i]->FromIndex;
				int to = graph->Edges[i]->ToIndex;
				if (from < 0 || from >= graph->Vertices->Count) continue;
				if (to < 0 || to >= graph->Vertices->Count) continue;
				int x1 = graph->Vertices[from]->X;
				int y1 = graph->Vertices[from]->Y;
				int x2 = graph->Vertices[to]->X;
				int y2 = graph->Vertices[to]->Y;
				e->Graphics->DrawLine(pen, x1, y1, x2, y2);
			}
			for (int i = 0; i < graph->Vertices->Count; i++) {
				int x = graph->Vertices[i]->X;
				int y = graph->Vertices[i]->Y;
				e->Graphics->FillEllipse(brush, x - 15, y - 15, 30, 30);
				e->Graphics->DrawEllipse(borderPen, x - 15, y - 15, 30, 30);
				e->Graphics->DrawString(graph->Vertices[i]->Name, font, textBrush, (float)(x - 10), (float)(y - 8));
			}
			delete pen;
			delete borderPen;
			delete brush;
			delete textBrush;
			delete font;
		}
		catch (Exception^) {}
	}

	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			if (graph->Vertices->Count == 0) {
				MessageBox::Show(Localization::Get("err_no_vertices_dfs"), Localization::Get("error"), MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}
			int idx = comboBox1->SelectedIndex;
			if (idx < 0) {
				MessageBox::Show(Localization::Get("err_select_vertex"), Localization::Get("error"), MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}
			List<int>^ res_DFS = graph->DFS(idx);
			listBox1->Items->Clear();
			listBox1->Items->Add(Localization::Get("result") + ":");
			for (int i = 0; i < res_DFS->Count; i++) {
				int vertexIndex = res_DFS[i];
				String^ vertexName = graph->Vertices[vertexIndex]->Name;
				listBox1->Items->Add(vertexName);
			}
			int count = CountConnectedComponents();
			listBox1->Items->Add(Localization::Get("total_components") + " " + count);
			pictureBox1->Invalidate();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message, Localization::Get("error"), MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private:
		int CountConnectedComponents() {
			try {
				graph->ClearVisited();
				int count = 0;
				for (int i = 0;i < graph->Vertices->Count;i++) {
					if (!graph->Vertices[i]->IsVisited) {
						graph->DFSNoClear(i, gcnew List<int>());
						count++;
					}
				}
				return count;
			}
			catch (Exception^) { return 0; }
		}
	private:
		void UpdateComboBox() {
			try {
				comboBox1->Items->Clear();
				comboBox2->Items->Clear();
				comboBox3->Items->Clear();
				for (int i = 0;i < graph->Vertices->Count;i++) {
					comboBox1->Items->Add(graph->Vertices[i]->Name);
					comboBox2->Items->Add(graph->Vertices[i]->Name);
					comboBox3->Items->Add(graph->Vertices[i]->Name);
				}
				if (comboBox1->Items->Count > 0)
					comboBox1->SelectedIndex = 0;
				if (comboBox2->Items->Count > 0)
					comboBox2->SelectedIndex = 0;
				if (comboBox3->Items->Count > 0)
					comboBox3->SelectedIndex = 0;
			}
			catch (Exception^) {}
		}
	};
}