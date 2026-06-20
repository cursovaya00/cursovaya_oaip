#pragma once
using namespace System;
using namespace System::IO;
using namespace System::Collections::Generic;

public enum class AppLanguage {
	Russian,
	Belarusian,
	English
};

public ref class Localization {
public:
	static Dictionary<String^, String^>^ ru = nullptr;
	static Dictionary<String^, String^>^ bel = nullptr;
	static Dictionary<String^, String^>^ en = nullptr;
	static AppLanguage currentLang = AppLanguage::Russian;

	static void Initialize() {
		if (ru == nullptr) {
			ru = gcnew Dictionary<String^, String^>();
			en = gcnew Dictionary<String^, String^>();
			bel = gcnew Dictionary<String^, String^>();
			ru["app_name"] = "Анализ графа";
			en["app_name"] = "Graph Analyzer";
			bel["app_name"] = "Аналiз графа";
			ru["file"] = "Файл";
			en["file"] = "File";
			bel["file"] = "Файл";
			ru["lang"] = "Язык";
			en["lang"] = "Language";
			bel["lang"] = "Мова";
		}
	}

};