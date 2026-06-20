#pragma once
#include "Core/GraphClasses.h"
#include "Core/FileManager.h"
#include "Services/Localization.h"
#include "Services/UserManager.h"
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
		System::Windows::Forms::ToolStripMenuItem^ miFile;
		System::Windows::Forms::ToolStripMenuItem^ miSaveTxt;
		System::Windows::Forms::ToolStripMenuItem^ miSaveBin;
		System::Windows::Forms::ToolStripMenuItem^ miLoadTxt;
		System::Windows::Forms::ToolStripMenuItem^ miLoadBin;
		System::Windows::Forms::ToolStripMenuItem^ miLanguage;
		System::Windows::Forms::ToolStripMenuItem^ miLangRu;
		System::Windows::Forms::ToolStripMenuItem^ miLangEn;
		System::Windows::Forms::ToolStripMenuItem^ miLangBe;
		System::Windows::Forms::ToolStripMenuItem^ miView;
		System::Windows::Forms::ToolStripMenuItem^ miColor1;
		System::Windows::Forms::ToolStripMenuItem^ miColor2;
		System::Windows::Forms::ToolStripMenuItem^ miColor3;
		System::Windows::Forms::ToolStripMenuItem^ miHelp;
		System::Windows::Forms::ToolStripMenuItem^ miAbout;
		Graph^ graph;
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->miFile = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->miSaveTxt = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->miSaveBin = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->miLoadTxt = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->miLoadBin = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->miLanguage = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->miLangRu = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->miLangEn = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->miLangBe = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->miView = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->miColor1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->miColor2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->miColor3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->miHelp = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->miAbout = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->miFile, this->miLanguage,
					this->miView, this->miHelp
			});
			resources->ApplyResources(this->menuStrip1, L"menuStrip1");
			this->menuStrip1->Name = L"menuStrip1";
			// 
			// miFile
			// 
			this->miFile->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->miSaveTxt, this->miSaveBin,
					this->miLoadTxt, this->miLoadBin
			});
			this->miFile->Name = L"miFile";
			resources->ApplyResources(this->miFile, L"miFile");
			// 
			// miSaveTxt
			// 
			this->miSaveTxt->Name = L"miSaveTxt";
			resources->ApplyResources(this->miSaveTxt, L"miSaveTxt");
			this->miSaveTxt->Click += gcnew System::EventHandler(this, &MyForm::miSaveTxt_Click);
			// 
			// miSaveBin
			// 
			this->miSaveBin->Name = L"miSaveBin";
			resources->ApplyResources(this->miSaveBin, L"miSaveBin");
			this->miSaveBin->Click += gcnew System::EventHandler(this, &MyForm::miSaveBin_Click);
			// 
			// miLoadTxt
			// 
			this->miLoadTxt->Name = L"miLoadTxt";
			resources->ApplyResources(this->miLoadTxt, L"miLoadTxt");
			this->miLoadTxt->Click += gcnew System::EventHandler(this, &MyForm::miLoadTxt_Click);
			// 
			// miLoadBin
			// 
			this->miLoadBin->Name = L"miLoadBin";
			resources->ApplyResources(this->miLoadBin, L"miLoadBin");
			this->miLoadBin->Click += gcnew System::EventHandler(this, &MyForm::miLoadBin_Click);
			// 
			// miLanguage
			// 
			this->miLanguage->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->miLangRu,
					this->miLangEn, this->miLangBe
			});
			this->miLanguage->Name = L"miLanguage";
			resources->ApplyResources(this->miLanguage, L"miLanguage");
			// 
			// miLangRu
			// 
			this->miLangRu->Name = L"miLangRu";
			resources->ApplyResources(this->miLangRu, L"miLangRu");
			this->miLangRu->Click += gcnew System::EventHandler(this, &MyForm::miLangRu_Click);
			// 
			// miLangEn
			// 
			this->miLangEn->Name = L"miLangEn";
			resources->ApplyResources(this->miLangEn, L"miLangEn");
			this->miLangEn->Click += gcnew System::EventHandler(this, &MyForm::miLangEn_Click);
			// 
			// miLangBe
			// 
			this->miLangBe->Name = L"miLangBe";
			resources->ApplyResources(this->miLangBe, L"miLangBe");
			this->miLangBe->Click += gcnew System::EventHandler(this, &MyForm::miLangBe_Click);
			// 
			// miView
			// 
			this->miView->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->miColor1, this->miColor2,
					this->miColor3
			});
			this->miView->Name = L"miView";
			resources->ApplyResources(this->miView, L"miView");
			// 
			// miColor1
			// 
			this->miColor1->Name = L"miColor1";
			resources->ApplyResources(this->miColor1, L"miColor1");
			this->miColor1->Click += gcnew System::EventHandler(this, &MyForm::miColor1_Click);
			// 
			// miColor2
			// 
			this->miColor2->Name = L"miColor2";
			resources->ApplyResources(this->miColor2, L"miColor2");
			this->miColor2->Click += gcnew System::EventHandler(this, &MyForm::miColor2_Click);
			// 
			// miColor3
			// 
			this->miColor3->Name = L"miColor3";
			resources->ApplyResources(this->miColor3, L"miColor3");
			this->miColor3->Click += gcnew System::EventHandler(this, &MyForm::miColor3_Click);
			// 
			// miHelp
			// 
			this->miHelp->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->miAbout });
			this->miHelp->Name = L"miHelp";
			resources->ApplyResources(this->miHelp, L"miHelp");
			// 
			// miAbout
			// 
			this->miAbout->Name = L"miAbout";
			resources->ApplyResources(this->miAbout, L"miAbout");
			this->miAbout->Click += gcnew System::EventHandler(this, &MyForm::miAbout_Click);
			// 
			// MyForm
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->Controls->Add(this->menuStrip1);
			this->ForeColor = System::Drawing::Color::White;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void miSaveTxt_Click(System::Object^ sender, System::EventArgs^ e) {
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

	private: System::Void miSaveBin_Click(System::Object^ sender, System::EventArgs^ e) {
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

	private: System::Void miLoadTxt_Click(System::Object^ sender, System::EventArgs^ e) {
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
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void miLoadBin_Click(System::Object^ sender, System::EventArgs^ e) {
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
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void ApplyLocalization() {
		this->Text = Localization::Get("app_title");
		miFile->Text = Localization::Get("file");
		miSaveTxt->Text = Localization::Get("save_txt");
		miSaveBin->Text = Localization::Get("save_bin");
		miLoadTxt->Text = Localization::Get("load_txt");
		miLoadBin->Text = Localization::Get("load_bin");
		miLanguage->Text = Localization::Get("language");
		miLangRu->Text = Localization::Get("rus");
		miLangEn->Text = Localization::Get("eng");
		miLangBe->Text = Localization::Get("bel");
		miView->Text = Localization::Get("view");
		miColor1->Text = Localization::Get("color1");
		miColor2->Text = Localization::Get("color2");
		miColor3->Text = Localization::Get("color3");
		miHelp->Text = Localization::Get("help");
		miAbout->Text = Localization::Get("about");
	}

	private: System::Void miLangRu_Click(System::Object^ sender, System::EventArgs^ e) {
		Localization::SetLanguage(AppLanguage::Russian);
		ApplyLocalization();
	}

	private: System::Void miLangEn_Click(System::Object^ sender, System::EventArgs^ e) {
		Localization::SetLanguage(AppLanguage::English);
		ApplyLocalization();
	}

	private: System::Void miLangBe_Click(System::Object^ sender, System::EventArgs^ e) {
		Localization::SetLanguage(AppLanguage::Belarusian);
		ApplyLocalization();
	}

	private: System::Void miColor1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void miColor2_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void miColor3_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void miAbout_Click(System::Object^ sender, System::EventArgs^ e) {
		HelpForm^ dlg = gcnew HelpForm();
		dlg->ShowDialog(this);
	}
	};
}
