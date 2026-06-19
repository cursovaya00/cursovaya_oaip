#pragma once
#include <fstream>
#include <string>
#include <cstring>
using namespace System;
using namespace System::IO;
using namespace System::Collections::Generic;
using namespace System::Runtime::InteropServices;
using namespace std;

public ref class FileManager {
public:
	static bool SaveToTXT(String^ filePath, List<String^>^ vertexLines, List<String^>^ edgeLines) {
		try {
			StreamWriter^ sw = gcnew StreamWriter(filePath, false, System::Text::Encoding::UTF8);
			sw->WriteLine("Graph Data");
			sw->WriteLine("[VERTICES]");
			for each (String ^ vertex in vertexLines) sw->WriteLine(vertex);
			sw->WriteLine("[EDGES]");
			for each (String ^ edge in edgeLines) sw->WriteLine(edge);
			sw->Close();
			return true;
		}
		catch (Exception^) {
			return false;
		}
	}
	static bool LoadFromTXT(String^ filePath, List<String^>^% vertexLines, List<String^>^% edgeLines) {
		try {
			vertexLines = gcnew List<String^>();
			edgeLines = gcnew List<String^>();
			StreamReader^ sr = gcnew StreamReader(filePath, System::Text::Encoding::UTF8);
			String^ selection = "";
			while (sr->Peek() >= 0) {
				String^ line = sr->ReadLine();
				if (line == "Graph Data") {}
				else if (line == "[VERTICES]") { selection = "V"; }
				else if (line == "[EDGES]") { selection = "E"; }
				else if (line == "") {}
				else if (selection == "V") { vertexLines->Add(line); }
				else if (selection == "E") { edgeLines->Add(line); }
			}
			sr->Close();
			return true;
		}
		catch (Exception^) {
			return false;
		}
	}
	static bool SaveToBIN(String^ filePath, List<String^>^ vertexData, List<String^>^ edgeData) {
		try {
			IntPtr p = Marshal::StringToHGlobalAnsi(filePath);
			const char* cstr = static_cast<const char*>(p.ToPointer());
			ofstream fout(cstr, ios::binary);
			if (!fout.is_open()) { Marshal::FreeHGlobal(p); return false; }
			int vCount = vertexData->Count;
			fout.write((char*)&vCount, sizeof(vCount));
			for (int i = 0; i < vCount; i++) {
				IntPtr sp = Marshal::StringToHGlobalAnsi(vertexData[i]);
				const char* s = static_cast<const char*>(sp.ToPointer());
				int len = (int)strlen(s);
				fout.write((char*)&len, sizeof(len));
				fout.write(s, len);
				Marshal::FreeHGlobal(sp);
			}
			int eCount = edgeData->Count;
			fout.write((char*)&eCount, sizeof(eCount));
			for (int i = 0; i < eCount; i++) {
				IntPtr sp = Marshal::StringToHGlobalAnsi(edgeData[i]);
				const char* s = static_cast<const char*>(sp.ToPointer());
				int len = (int)strlen(s);
				fout.write((char*)&len, sizeof(len));
				fout.write(s, len);
				Marshal::FreeHGlobal(sp);
			}
			fout.close();
			Marshal::FreeHGlobal(p);
			return true;
		}
		catch (Exception^) {
			return false;
		}
	}
	static bool LoadFromBIN(String^ filePath, List<String^>^% vertexData, List<String^>^% edgeData) {
		try {
			vertexData = gcnew List<String^>();
			edgeData = gcnew List<String^>();
			IntPtr p = Marshal::StringToHGlobalAnsi(filePath);
			const char* cstr = static_cast<const char*>(p.ToPointer());
			ifstream fin(cstr, ios::binary);
			if (!fin.is_open()) { Marshal::FreeHGlobal(p); return false; }
			int vCount = 0;
			fin.read((char*)&vCount, sizeof(vCount));
			for (int i = 0; i < vCount; i++) {
				int len = 0;
				fin.read((char*)&len, sizeof(len));
				char* buf = new char[len + 1];
				fin.read(buf, len);
				buf[len] = '\0';
				String^ str = gcnew String(buf);
				delete[] buf;
				vertexData->Add(str);
			}
			int eCount = 0;
			fin.read((char*)&eCount, sizeof(eCount));
			for (int i = 0; i < eCount; i++) {
				int len = 0;
				fin.read((char*)&len, sizeof(len));
				char* buf = new char[len + 1];
				fin.read(buf, len);
				buf[len] = '\0';
				String^ str = gcnew String(buf);
				delete[] buf;
				edgeData->Add(str);
			}
			fin.close();
			Marshal::FreeHGlobal(p);
			return true;
		}
		catch (Exception^) { return false; }
	}
};