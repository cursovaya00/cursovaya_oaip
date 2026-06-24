#pragma once
using namespace System;
using namespace System::IO;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;

public ref class User {
public:
	String^ Username;
	String^ Password;
};

public ref class UserManager {
public:
	static List<User^>^ users;
	static User^ CurrentUser;

	static void Initialize() {
		if (users != nullptr) { return; }
		users = gcnew List<User^>();
		CurrentUser = nullptr;
		LoadUsers();
	}
	static void LoadUsers() {
		bool ex = File::Exists("users.dat");
		if (!ex) {
			User^ admin = gcnew User();
			admin->Username = "admin";
			admin->Password = "admin";
			users->Add(admin);
			User^ def_user = gcnew User();
			def_user->Username = "user";
			def_user->Password = "user";
			users->Add(def_user);
		}
		else {
			try {
				StreamReader^ sr = gcnew StreamReader("users.dat");
				while (sr->Peek() >= 0) {
					String^ line = sr->ReadLine();
					array<String^>^ part = line->Split(':');
					if (part->Length >= 2) {
						User^ u = gcnew User();
						u->Username = part[0];
						u->Password = part[1];
						users->Add(u);
					}
				}
				sr->Close();
			}
			catch (Exception^ ex) {
				MessageBox::Show("Failed to load users: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				User^ admin = gcnew User();
				admin->Username = "admin";
				admin->Password = "admin";
				users->Add(admin);
			}
		}
	};
	static void SaveUsers() {
		try {
			StreamWriter^ sw = gcnew StreamWriter("users.dat");
			for (int i = 0;i < users->Count;i++) {
				sw->WriteLine(users[i]->Username + ":" + users[i]->Password);
			}
			sw->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Failed to save users: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	static bool Login(String^ username, String^ password) {
		for (int i = 0;i < users->Count;i++) {
			if (users[i]->Username == username && users[i]->Password == password) {
				CurrentUser = users[i];
				return true;
			}
		}
		return false;
	}
	static bool Register(String^ username, String^ password) {
		for (int i = 0;i < users->Count;i++) {
			if (users[i]->Username == username) {
				return false;
			}
		}
		User^ NEW_USER = gcnew User();
		NEW_USER->Username = username;
		NEW_USER->Password = password;
		users->Add(NEW_USER);
		SaveUsers();
		return true;
	}
	static void Logout() {
		CurrentUser = nullptr;
	}
	static String^ GetCurrentUser() {
		if (CurrentUser != nullptr) { return CurrentUser->Username; }
		else { return "nobody came in"; }
	}
};