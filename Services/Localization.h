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

			ru["remove_vertex"] = "Удалить вершину";
			en["remove_vertex"] = "Remove vertex";
			bel["remove_vertex"] = "Выдалiць вяршыну";

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

			ru["err_no_vertices_dfs"] = "Нет вершин для обхода. Добавьте вершины на поле.";
			en["err_no_vertices_dfs"] = "No vertices to traverse. Add vertices to the field.";
			bel["err_no_vertices_dfs"] = "Няма вяршынь для абыходу. Дадайце вяршыны на поле.";

			ru["err_select_vertex"] = "Выберите стартовую вершину для обхода.";
			en["err_select_vertex"] = "Select a start vertex for traversal.";
			bel["err_select_vertex"] = "Выберыце стартавую вяршыну для абыходу.";

			ru["err_no_vertices_edge"] = "Нет вершин для создания ребра. Добавьте минимум 2 вершины.";
			en["err_no_vertices_edge"] = "No vertices to create an edge. Add at least 2 vertices.";
			bel["err_no_vertices_edge"] = "Няма вяршынь для стварэння рабра. Дадайце мінімум 2 вяршыны.";

			ru["err_same_vertex"] = "Нельзя соединить вершину с самой собой.";
			en["err_same_vertex"] = "Cannot connect a vertex to itself.";
			bel["err_same_vertex"] = "Нельзя злучыць вяршыну з самой сабой.";

			ru["err_edge_exists"] = "Ребро между этими вершинами уже существует.";
			en["err_edge_exists"] = "Edge between these vertices already exists.";
			bel["err_edge_exists"] = "Рабро паміж гэтымі вяршынямі ўжо існуе.";

			ru["err_add_edge"] = "Не удалось добавить ребро.";
			en["err_add_edge"] = "Failed to add edge.";
			bel["err_add_edge"] = "Не ўдалося дадаць рабро.";

			ru["err_empty_name"] = "Введите имя вершины для удаления.";
			en["err_empty_name"] = "Enter a vertex name to remove.";
			bel["err_empty_name"] = "Увядзіце імя вяршыны для выдалення.";

			ru["err_vertex_not_found"] = "Вершина с таким именем не найдена.";
			en["err_vertex_not_found"] = "Vertex with this name not found.";
			bel["err_vertex_not_found"] = "Вяршына з таким імем не знойдзена.";

			ru["err_no_vertex_near"] = "Не удалось найти вершину рядом с курсором.";
			en["err_no_vertex_near"] = "No vertex found near the cursor.";
			bel["err_no_vertex_near"] = "Вяршына каля курсара не знойдзена.";

			ru["err_file_load"] = "Ошибка загрузки файла.";
			en["err_file_load"] = "Failed to load file.";
			bel["err_file_load"] = "Памылка загрузкі файла.";

			ru["err_file_save"] = "Ошибка сохранения файла.";
			en["err_file_save"] = "Failed to save file.";
			bel["err_file_save"] = "Памылка захавання файла.";

			ru["err_empty_fields"] = "Заполните все поля.";
			en["err_empty_fields"] = "Fill in all fields.";
			bel["err_empty_fields"] = "Запоўніце ўсе палі.";

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

			ru["help_text"] = "Программа для анализа графов с использованием обхода в глубину (DFS).\r\n\r\nВозможности:\r\nДобавление вершин кликом левой кнопкой мыши по полю\r\nУдаление вершин правой кнопкой мыши по вершине или по имени\r\nДобавление рёбер между вершинами через выпадающие списки\r\nОбход графа в глубину (DFS)\r\nПодсчёт компонент связности\r\nСохранение и загрузка графа (TXT, BIN)\r\nСмена языка: русский, английский, белорусский\r\nСмена темы: светлая, тёмная, голубая\r\n\r\nКак пользоваться:\r\n1. Добавьте вершины, кликнув левой кнопкой мыши в нужных местах поля\r\n2. Соедините вершины рёбрами: выберите «Откуда» и «Куда» в выпадающих списках, нажмите «Добавить ребро»\r\n3. Чтобы удалить вершину, кликните по ней правой кнопкой мыши или введите имя и нажмите «Удалить вершину»\r\n4. Выберите стартовую вершину для обхода в выпадающем списке «Выбрать старт»\r\n5. Нажмите «Запустить DFS» для запуска обхода\r\n6. Результаты отобразятся в списке результатов справа\r\n7. Используйте «Очистить» для сброса графа\r\n\r\nАвторизация:\r\nЛогин: admin / Пароль: admin\r\nЛогин: user / Пароль: user\r\nМожно зарегистрировать нового пользователя.\r\n\r\nФайлы:\r\nTXT — текстовый формат\r\nBIN — бинарный формат\r\n\r\nРазработчик: pop";

			en["help_text"] = "Graph analyzer program using depth-first search (DFS).\r\n\r\nFeatures:\r\nAdding vertices by left-clicking on the field\r\nRemoving vertices by right-clicking on a vertex or by name\r\nAdding edges between vertices via dropdown lists\r\nDepth-first traversal (DFS)\r\nCounting connected components\r\nSaving and loading graphs (TXT, BIN)\r\nLanguage switching: Russian, English, Belarusian\r\nTheme switching: light, dark, blue\r\n\r\nHow to use:\r\n1. Add vertices by left-clicking on the desired positions in the field\r\n2. Connect vertices with edges: select \"From\" and \"To\" in the dropdown lists, click \"Add edge\"\r\n3. To remove a vertex, right-click on it or enter a name and click \"Remove vertex\"\r\n4. Select a start vertex for traversal in the \"Select start\" dropdown\r\n5. Click \"Run DFS\" to start traversal\r\n6. Results will be displayed in the results list on the right\r\n7. Use \"Clear\" to reset the graph\r\n\r\nAuthorization:\r\nLogin: admin / Password: admin\r\nLogin: user / Password: user\r\nYou can register a new user.\r\n\r\nFiles:\r\nTXT - text format\r\nBIN - binary format\r\n\r\nDeveloper: pop";

			bel["help_text"] = "Праграма для аналiзу графаў з выкарыстаннем абходу ў глыбiню (DFS).\r\n\r\nМагчымасцi:\r\nДадаванне вяршынь клiкам левай кнопкi мышы па полi\r\nВыдаленне вяршынь правай кнопкi мышы па вяршыне або па iменi\r\nДадаванне раброў памiж вяршынямi праз выпадальныя спiсы\r\nАбход графа ў глыбiню (DFS)\r\nПадлiк кампанентаў сувязi\r\nЗахаванне i загрузка графаў (TXT, BIN)\r\nЗмена мовы: руская, англiйская, беларуская\r\nЗмена тэмы: светлая, цёмная, блакiтная\r\n\r\nЯк карыстацца:\r\n1. Дадайце вяршыны, клiкнуўшы левай кнопкi мышы ў патрэбных месцах поля\r\n2. Злучыце вяршыны рабрамi: выберыце «Адкуль» i «Куды» ў выпадальных спiсах, нацiснiце «Дадаць рабро»\r\n3. Каб выдалiць вяршыну, клiкнiце па ёй правай кнопкi мышы або ўвядзiце iмя i нацiснiце «Выдалiць вяршыну»\r\n4. Вылучыце стартавую вяршыну для абходу ў выпадальным спiсе «Выбраць старт»\r\n5. Нацiснiце «Запусцiць DFS» для запуску абходу\r\n6. Вынiкi адлюструюцца ў спiсе вынiкаў справа\r\n7. Выкарыстоўвайце «Ачысцiць» для скiду графа\r\n\r\nАўтарызацыя:\r\nЛагiн: admin / Пароль: admin\r\nЛагiн: user / Пароль: user\r\nМожна зарэгiстраваць новага карыстальнiка.\r\n\r\nФайлы:\r\nTXT - тэкставы фармат\r\nBIN - бiнарны фармат\r\n\r\nРазработчык: pop";
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