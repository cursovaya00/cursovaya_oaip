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
			ru["app_title"] = "Анализ графа";
			en["app_title"] = "Graph Analyzer";
			bel["app_title"] = "Аналiз графа";

			ru["file"] = "Файл";
			en["file"] = "File";
			bel["file"] = "Файл";

			ru["language"] = "Язык";
			en["language"] = "Language";
			bel["language"] = "Мова";

			ru["view"] = "Вид";
			en["view"] = "View";
			bel["view"] = "Выгляд";

			ru["help"] = "Справка";
			en["help"] = "Help";
			bel["help"] = "Даведка";

			ru["exit"] = "Выход";
			en["exit"] = "Exit";
			bel["exit"] = "Выхад";

			ru["about"] = "О программе";
			en["about"] = "About";
			bel["about"] = "Аб праграме";

			ru["login"] = "Вход в систему";
			en["login"] = "Login";
			bel["login"] = "Уваход у сiстэму";

			ru["username"] = "Имя пользователя";
			en["username"] = "Username";
			bel["username"] = "Iмя карыстальнiка";

			ru["password"] = "Пароль";
			en["password"] = "Password";
			bel["password"] = "Пароль";

			ru["enter"] = "Войти";
			en["enter"] = "Login";
			bel["enter"] = "Увайсцi";

			ru["register"] = "Регистрация";
			en["register"] = "Register";
			bel["register"] = "Рэгiстрацыя";

			ru["register_new"] = "Зарегистрироваться";
			en["register_new"] = "Sign up";
			bel["register_new"] = "Зарэгiстравацца";

			ru["wrong_login"] = "Неверное имя пользователя или пароль";
			en["wrong_login"] = "Wrong username or password";
			bel["wrong_login"] = "Няправiльнае iмя карыстальнiка або пароль";

			ru["user_exists"] = "Пользователь уже существует";
			en["user_exists"] = "User already exists";
			bel["user_exists"] = "Карыстальнiк ужо iснуе";

			ru["registered"] = "Регистрация успешна";
			en["registered"] = "Registration successful";
			bel["registered"] = "Рэгiстрацыя паспяховая";

			ru["save_txt"] = "Сохранить как TXT";
			en["save_txt"] = "Save as TXT";
			bel["save_txt"] = "Захаваць як TXT";

			ru["save_bin"] = "Сохранить как BIN";
			en["save_bin"] = "Save as BIN";
			bel["save_bin"] = "Захаваць як BIN";

			ru["load_txt"] = "Загрузить из TXT";
			en["load_txt"] = "Load from TXT";
			bel["load_txt"] = "Загрузiць з TXT";

			ru["load_bin"] = "Загрузить из BIN";
			en["load_bin"] = "Load from BIN";
			bel["load_bin"] = "Загрузiць з BIN";

			ru["color1"] = "Светлая тема";
			en["color1"] = "Light theme";
			bel["color1"] = "Светлая тэма";

			ru["color2"] = "Тёмная тема";
			en["color2"] = "Dark theme";
			bel["color2"] = "Цёмная тэма";

			ru["color3"] = "Голубая тема";
			en["color3"] = "Blue theme";
			bel["color3"] = "Блакiтная тэма";

			ru["add_vertex"] = "Добавить вершину";
			en["add_vertex"] = "Add vertex";
			bel["add_vertex"] = "Дадаць вяршыню";

			ru["add_edge"] = "Добавить ребро";
			en["add_edge"] = "Add edge";
			bel["add_edge"] = "Дадаць рабро";

			ru["name"] = "Имя";
			en["name"] = "Name";
			bel["name"] = "Iмя";

			ru["coord_x"] = "X";
			en["coord_x"] = "X";
			bel["coord_x"] = "X";

			ru["coord_y"] = "Y";
			en["coord_y"] = "Y";
			bel["coord_y"] = "Y";

			ru["from"] = "Откуда";
			en["from"] = "From";
			bel["from"] = "Адкуль";

			ru["to"] = "Куда";
			en["to"] = "To";
			bel["to"] = "Куды";

			ru["select_vertex"] = "Выбрать старт";
			en["select_vertex"] = "Select start";
			bel["select_vertex"] = "Выбраць старт";

			ru["run_dfs"] = "Запустить DFS";
			en["run_dfs"] = "Run DFS";
			bel["run_dfs"] = "Запусцiць DFS";

			ru["result"] = "Результаты обхода";
			en["result"] = "Traversal results";
			bel["result"] = "Вынiкi абыходу";

			ru["total_components"] = "Всего компонент связности:";
			en["total_components"] = "Total connected components:";
			bel["total_components"] = "Усяго кампанентаў сувязi:";

			ru["no_vertices"] = "Нет вершин для анализа";
			en["no_vertices"] = "No vertices to analyze";
			bel["no_vertices"] = "Няма вяршынь для аналiзу";

			ru["welcome"] = "Добро пожаловать";
			en["welcome"] = "Welcome";
			bel["welcome"] = "Сардэчна запрашаем";

			ru["error"] = "Ошибка";
			en["error"] = "Error";
			bel["error"] = "Памылка";

			ru["success"] = "Успех";
			en["success"] = "Success";
			bel["success"] = "Поспех";

			ru["file_saved"] = "Файл сохранен";
			en["file_saved"] = "File saved";
			bel["file_saved"] = "Файл захаваны";

			ru["file_loaded"] = "Файл загружен";
			en["file_loaded"] = "File loaded";
			bel["file_loaded"] = "Файл загружаны";

			ru["clear"] = "Очистить";
			en["clear"] = "Clear";
			bel["clear"] = "Ачысцiць";

			ru["rus"] = "Русский";
			en["rus"] = "Russian";
			bel["rus"] = "Руская";

			ru["eng"] = "English";
			en["eng"] = "English";
			bel["eng"] = "Англiйская";

			ru["bel"] = "Беларуская";
			en["bel"] = "Belarusian";
			bel["bel"] = "Беларуская";

			ru["help_text"] = "Программа для анализа графов с использованием обхода в глубину (DFS).\r\n\r\nВозможности:\r\nДобавление вершин с указанием имени и координат\r\nДобавление рёбер между вершинами\r\nУдаление вершин\r\nОбход графа в глубину (DFS)\r\nПодсчёт компонент связности\r\nСохранение и загрузка графа (TXT, BIN)\r\nСмена языка: русский, английский, белорусский\r\nСмена темы: светлая, тёмная, голубая\r\n\r\nКак пользоваться:\r\n1. Добавьте вершины, указав имя и координаты X, Y\r\n2. Соедините вершины рёбрами, указав индексы начальной и конечной вершины\r\n3. Выберите стартовую вершину для обхода\r\n4. Нажмите \"Запустить DFS\" для запуска обхода\r\n5. Результаты отобразятся в списке результатов\r\n\r\nФайлы:\r\nTXT \u2014 текстовый формат\r\nBIN \u2014 бинарный формат\r\n\r\nЯзыки:\r\nРусский\r\nEnglish\r\nБеларуская\r\n\r\nРазработчик: Вербовский Иван Александрович";

			en["help_text"] = "Graph analyzer program using depth-first search (DFS).\r\n\r\nFeatures:\r\nAdding vertices with name and coordinates\r\nAdding edges between vertices\r\nRemoving vertices\r\nDepth-first traversal (DFS)\r\nCounting connected components\r\nSaving and loading graphs (TXT, BIN)\r\nLanguage switching: Russian, English, Belarusian\r\nTheme switching: light, dark, blue\r\n\r\nHow to use:\r\n1. Add vertices specifying name and coordinates X, Y\r\n2. Connect vertices with edges by specifying start and end vertex indices\r\n3. Select a start vertex for traversal\r\n4. Click \"Run DFS\" to start traversal\r\n5. Results will be displayed in the results list\r\n\r\nFiles:\r\nTXT \u2014 text format\r\nBIN \u2014 binary format\r\n\r\nLanguages:\r\nРусский\r\nEnglish\r\nБеларуская\r\n\r\nDeveloper: Ivan Verbovsky";

			bel["help_text"] = "Праграма для аналiзу графаў з выкарыстаннем абходу ў глыбiню (DFS).\r\n\r\nМагчымасцi:\r\nДадаванне вяршынь з указаннем iмя i каардынат\r\nДадаванне раброў памiж вяршынямi\r\nВыдаленне вяршынь\r\nАбход графа ў глыбiню (DFS)\r\nПадлiк кампанентаў сувязi\r\nЗахаванне i загрузка графаў (TXT, BIN)\r\nЗмена мовы: руская, англiйская, беларуская\r\nЗмена тэмы: светлая, цёмная, блакiтная\r\n\r\nЯк карыстацца:\r\n1. Дадайце вяршыны, указаўшы iмя i каардынаты X, Y\r\n2. Злучыце вяршыны рабрамi, указаўшы iндэксы пачатковай i канцавай вяршыны\r\n3. Вылучыце стартавую вяршыну для абходу\r\n4. Нацiснiце \"Запусцiць DFS\" для запуску абходу\r\n5. Вынiкi адлюструюцца ў спiсе вынiкаў\r\n\r\nФайлы:\r\nTXT \u2014 тэкставы фармат\r\nBIN \u2014 бiнарны фармат\r\n\r\nМовы:\r\nРуская\r\nEnglish\r\nБеларуская\r\n\r\nРазработчык: Вербоўскi Іван Аляксандравiч";
		}
	}
	static void SetLanguage(AppLanguage lang) {
		if (lang != currentLang) {
			currentLang = lang;
		}
		else {}
	}
	static AppLanguage GetLanguage() { return currentLang; }

	static String^ Get(String^ key) {
		Initialize();
		Dictionary<String^, String^>^ dict;
		if (currentLang == AppLanguage::Russian) { dict = ru; }
		else if (currentLang == AppLanguage::English) { dict = en; }
		else { dict = bel; }
		if (dict->ContainsKey(key)) { return dict[key]; }
		return "[" + key + "]";
	}
};