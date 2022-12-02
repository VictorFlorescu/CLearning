#include "main.h"

using namespace std;

string command;
string commandParameters;

void commandExecution();
void textwrite();

fstream file;
string filename;
		

void commandLine()
{
	system("cls");

	cout << "Enter Command ('help' for available commands) : ";
	cin >> command;
	cin.get();
	commandExecution();
}

void commandExecution()
{
	if (command == "closeconsole")
	{
		mainMenu();
	}
	else if (command == "newtextfile")
	{
		cout << "Enter file name (.txt): ";
		getline(cin, filename);

		file.open(filename, ios::in | ios::out | ios::ate| ios::app);
		cout << "Writing to file..." << endl;
		if (file.is_open())
		{
			textwrite();
		}
			
		system("pause");
		commandLine();


	}
	else if (command == "readtextfile")
	{
		string readfilename;
		cout << "Enter the file name (.txt): ";
		cin >> readfilename;
		file.open(filename, ios::in);
		system("cls");
		cout << file.rdbuf();
		cout << "\nEnd of file!!\n";
		system("pause");
		commandLine();
		
	}
	else if (command == "togglefullscreen")
	{
		::SendMessage(::GetConsoleWindow(), WM_SYSKEYDOWN, VK_RETURN, 0x20000000);
		cout << "Toggled Fullscreen" << endl;
		Sleep(1200);
		commandLine();
	}
	else if (command == "listapps")
	{
		appsMenu();
	}
	
	else if (command == "quit")
	{
		bool quit = true;
	}
	else if (command == "help")
	{
		cout << "Available commands:" << endl;
		cout << ". closeconsole" << endl;
		cout << ". newtextfile" << endl;
		cout << ". readtextfile" << endl;
		cout << ". togglefullscreen" << endl;
		cout << ". listapps" << endl;
		cout << ". quit" << endl;
		system("pause");
		commandLine();
	}
	else
	{
		commandLine();
	}

}

//newtextfile
void textwrite()
{
	char str[5000];
	cin.getline(str, sizeof str);
	

	file << str;
	file.close();
	//cout << "Can't open file!" << endl;

}