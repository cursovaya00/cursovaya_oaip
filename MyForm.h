#pragma once
#include "Core/GraphClasses.h"
#include "Core/FileManager.h"
#include "Services/Localization.h"
#include "Services/UserManager.h"

namespace curs {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			graph = gcnew Graph();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ôàéëToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñîõğàíèòüÊàêTXTToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñîõğàíèòüÊàêBINToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ çàãğóçèòüÈçTXTToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ çàãğóçèòüÈçBINToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ÿçûêToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ğóññêèéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ englishToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ áåëîğóññêèéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âèäToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñâåòëàÿÒåìàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ò¸ìíàÿÒåìàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ãîëóáàÿÒåìàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñïğàâêàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ îÏğîãğàììåToolStripMenuItem;
	protected:

	private:
		Graph^ graph;
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ôàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîõğàíèòüÊàêTXTToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîõğàíèòüÊàêBINToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çàãğóçèòüÈçTXTToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çàãğóçèòüÈçBINToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ÿçûêToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ğóññêèéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->englishToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->áåëîğóññêèéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âèäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñâåòëàÿÒåìàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ò¸ìíàÿÒåìàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ãîëóáàÿÒåìàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñïğàâêàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îÏğîãğàììåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->ôàéëToolStripMenuItem,
					this->ÿçûêToolStripMenuItem, this->âèäToolStripMenuItem, this->ñïğàâêàToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(554, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ôàéëToolStripMenuItem
			// 
			this->ôàéëToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->ñîõğàíèòüÊàêTXTToolStripMenuItem,
					this->ñîõğàíèòüÊàêBINToolStripMenuItem, this->çàãğóçèòüÈçTXTToolStripMenuItem, this->çàãğóçèòüÈçBINToolStripMenuItem
			});
			this->ôàéëToolStripMenuItem->Name = L"ôàéëToolStripMenuItem";
			this->ôàéëToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->ôàéëToolStripMenuItem->Text = L"Ôàéë";
			// 
			// ñîõğàíèòüÊàêTXTToolStripMenuItem
			// 
			this->ñîõğàíèòüÊàêTXTToolStripMenuItem->Name = L"ñîõğàíèòüÊàêTXTToolStripMenuItem";
			this->ñîõğàíèòüÊàêTXTToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->ñîõğàíèòüÊàêTXTToolStripMenuItem->Text = L"Ñîõğàíèòü êàê TXT";
			this->ñîõğàíèòüÊàêTXTToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ñîõğàíèòüÊàêTXTToolStripMenuItem_Click);
			// 
			// ñîõğàíèòüÊàêBINToolStripMenuItem
			// 
			this->ñîõğàíèòüÊàêBINToolStripMenuItem->Name = L"ñîõğàíèòüÊàêBINToolStripMenuItem";
			this->ñîõğàíèòüÊàêBINToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->ñîõğàíèòüÊàêBINToolStripMenuItem->Text = L"Ñîõğàíèòü êàê BIN";
			this->ñîõğàíèòüÊàêBINToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ñîõğàíèòüÊàêBINToolStripMenuItem_Click);
			// 
			// çàãğóçèòüÈçTXTToolStripMenuItem
			// 
			this->çàãğóçèòüÈçTXTToolStripMenuItem->Name = L"çàãğóçèòüÈçTXTToolStripMenuItem";
			this->çàãğóçèòüÈçTXTToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->çàãğóçèòüÈçTXTToolStripMenuItem->Text = L"Çàãğóçèòü èç TXT";
			this->çàãğóçèòüÈçTXTToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::çàãğóçèòüÈçTXTToolStripMenuItem_Click);
			// 
			// çàãğóçèòüÈçBINToolStripMenuItem
			// 
			this->çàãğóçèòüÈçBINToolStripMenuItem->Name = L"çàãğóçèòüÈçBINToolStripMenuItem";
			this->çàãğóçèòüÈçBINToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->çàãğóçèòüÈçBINToolStripMenuItem->Text = L"Çàãğóçèòü èç BIN";
			this->çàãğóçèòüÈçBINToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::çàãğóçèòüÈçBINToolStripMenuItem_Click);
			// 
			// ÿçûêToolStripMenuItem
			// 
			this->ÿçûêToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ğóññêèéToolStripMenuItem,
					this->englishToolStripMenuItem, this->áåëîğóññêèéToolStripMenuItem
			});
			this->ÿçûêToolStripMenuItem->Name = L"ÿçûêToolStripMenuItem";
			this->ÿçûêToolStripMenuItem->Size = System::Drawing::Size(46, 20);
			this->ÿçûêToolStripMenuItem->Text = L"ßçûê";
			// 
			// ğóññêèéToolStripMenuItem
			// 
			this->ğóññêèéToolStripMenuItem->Name = L"ğóññêèéToolStripMenuItem";
			this->ğóññêèéToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->ğóññêèéToolStripMenuItem->Text = L"Ğóññêèé";
			this->ğóññêèéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ğóññêèéToolStripMenuItem_Click);
			// 
			// englishToolStripMenuItem
			// 
			this->englishToolStripMenuItem->Name = L"englishToolStripMenuItem";
			this->englishToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->englishToolStripMenuItem->Text = L"English";
			this->englishToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::englishToolStripMenuItem_Click);
			// 
			// áåëîğóññêèéToolStripMenuItem
			// 
			this->áåëîğóññêèéToolStripMenuItem->Name = L"áåëîğóññêèéToolStripMenuItem";
			this->áåëîğóññêèéToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->áåëîğóññêèéToolStripMenuItem->Text = L"Áåëîğóññêèé";
			this->áåëîğóññêèéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::áåëîğóññêèéToolStripMenuItem_Click);
			// 
			// âèäToolStripMenuItem
			// 
			this->âèäToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ñâåòëàÿÒåìàToolStripMenuItem,
					this->ò¸ìíàÿÒåìàToolStripMenuItem, this->ãîëóáàÿÒåìàToolStripMenuItem
			});
			this->âèäToolStripMenuItem->Name = L"âèäToolStripMenuItem";
			this->âèäToolStripMenuItem->Size = System::Drawing::Size(39, 20);
			this->âèäToolStripMenuItem->Text = L"Âèä";
			// 
			// ñâåòëàÿÒåìàToolStripMenuItem
			// 
			this->ñâåòëàÿÒåìàToolStripMenuItem->Name = L"ñâåòëàÿÒåìàToolStripMenuItem";
			this->ñâåòëàÿÒåìàToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->ñâåòëàÿÒåìàToolStripMenuItem->Text = L"Ñâåòëàÿ òåìà";
			this->ñâåòëàÿÒåìàToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ñâåòëàÿÒåìàToolStripMenuItem_Click);
			// 
			// ò¸ìíàÿÒåìàToolStripMenuItem
			// 
			this->ò¸ìíàÿÒåìàToolStripMenuItem->Name = L"ò¸ìíàÿÒåìàToolStripMenuItem";
			this->ò¸ìíàÿÒåìàToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->ò¸ìíàÿÒåìàToolStripMenuItem->Text = L"Ò¸ìíàÿ òåìà";
			this->ò¸ìíàÿÒåìàToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ò¸ìíàÿÒåìàToolStripMenuItem_Click);
			// 
			// ãîëóáàÿÒåìàToolStripMenuItem
			// 
			this->ãîëóáàÿÒåìàToolStripMenuItem->Name = L"ãîëóáàÿÒåìàToolStripMenuItem";
			this->ãîëóáàÿÒåìàToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->ãîëóáàÿÒåìàToolStripMenuItem->Text = L"Ãîëóáàÿ òåìà";
			this->ãîëóáàÿÒåìàToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ãîëóáàÿÒåìàToolStripMenuItem_Click);
			// 
			// ñïğàâêàToolStripMenuItem
			// 
			this->ñïğàâêàToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->îÏğîãğàììåToolStripMenuItem });
			this->ñïğàâêàToolStripMenuItem->Name = L"ñïğàâêàToolStripMenuItem";
			this->ñïğàâêàToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->ñïğàâêàToolStripMenuItem->Text = L"Ñïğàâêà";
			// 
			// îÏğîãğàììåToolStripMenuItem
			// 
			this->îÏğîãğàììåToolStripMenuItem->Name = L"îÏğîãğàììåToolStripMenuItem";
			this->îÏğîãğàììåToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->îÏğîãğàììåToolStripMenuItem->Text = L"Î ïğîãğàììå";
			this->îÏğîãğàììåToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::îÏğîãğàììåToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(554, 681);
			this->Controls->Add(this->menuStrip1);
			this->ForeColor = System::Drawing::Color::White;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion
	private: System::Void ñîõğàíèòüÊàêTXTToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		SaveFileDialog^ dlg = gcnew SaveFileDialog();
		dlg->Filter = "Text files (*.txt)|*.txt";
		dlg->DefaultExt = "txt";
		if (dlg->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			List<String^>^ vLines = gcnew List<String^>();
			List<String^>^ eLines = gcnew List<String^>();
			for (int i = 0;i < graph->Vertices->Count;i++) {
				vLines->Add(graph->Vertices[i]->Name + "," + graph->Vertices[i]->X + "," + graph->Vertices->Y);
			}
			for (int i = 0;i < graph->Edges->Count;i++) {
				eLines->Add(graph->Edges[i]->FromIndex + "," + graph->Edges[i]->ToIndex);
			}
			FileManager::SaveToTXT(dlg->FileName, vLines, eLines);
		}
	}
	private: System::Void ñîõğàíèòüÊàêBINToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		SaveFileDialog^ dlg = gcnew SaveFileDialog();
		dlg->Filter = "Binary files (*.bin)|*.bin";
		dlg->DefaultExt = "bin";
		if (dlg->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			List<String^>^ vLines = gcnew List<String^>();
			List<String^>^ eLines = gcnew List<String^>();
			for (int i = 0;i < graph->Vertices->Count;i++) {
				vLines->Add(graph->Vertices[i]->Name + "," + graph->Vertices[i]->X + "," + graph->Vertices->Y);
			}
			for (int i = 0;i < graph->Edges->Count;i++) {
				eLines->Add(graph->Edges[i]->FromIndex + "," + graph->Edges[i]->ToIndex);
			}
			FileManager::SaveToBIN(dlg->FileName, vLines, eLines);
		}
	}
	private: System::Void çàãğóçèòüÈçTXTToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
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
			MessageBox::Show(ex->Message, "Îøèáêà", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void çàãğóçèòüÈçBINToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			OpenFileDialog^ ofg = gcnew OpenFileDialog();
			ofg->Filter = "Binart files (*.bin)|*.bin";
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
			MessageBox::Show(ex->Message, "Îøèáêà", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void ğóññêèéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void englishToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void áåëîğóññêèéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ñâåòëàÿÒåìàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ò¸ìíàÿÒåìàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ãîëóáàÿÒåìàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void îÏğîãğàììåToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
