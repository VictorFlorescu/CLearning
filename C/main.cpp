#include "main.h"
#pragma comment (lib, "kernel32")
#pragma comment (lib, "user32")


using namespace std;

//Global Variables
string version = "a7";

//Declaration of Functions
void settings();
void commandLine();
void changes();
void info();

int main()
{
	mainMenu();
}

void mainMenu()
{
	int choice;
	

	system("cls");
	cout << "================================================" << endl;
	cout << "\t\t    Main Menu" << endl;
	cout << "================================================" << endl;
	cout << "1. Settings		|Change Settings\n" << endl;
	cout << "2. Command Line	|Enters the command line\n" << endl;
	cout << "3. Apps			|List available apps\n" << endl;
	cout << "4. Updater (In designing phase)\n" << endl;
	cout << "98. Changelog		|See Changes\n" << endl;
	cout << "99. About" << endl;
	cout << "================================================" << endl;
	cout << "0. Quit" << endl;
	cout << "================================================" << endl;
	cin >> choice;

	switch (choice)
	{
	case 0:
		break;
	case 1:
		settings();
		break;
	case 2:
		commandLine();
		break;
	case 3:
		appsMenu();
		break;
	case 4:
		UpdaterMain();
		break;
	case 98:
		changes();
		break;
	case 99:
		info();
		break;
	default:
		mainMenu();
		break;
	}
}

void changes()
{
	system("cls");
	cout << "================================================" << endl;
	cout << "Changelog" << endl;
	cout << "================================================" << endl;
	cout << "Version a1\n" << endl;
	cout << "- Added MenuSettings"<< endl;
	cout << "- Added Settings" << endl;
	cout << "================================================" << endl;
	cout << "Version a2\n" << endl;
	cout << "- Added Changelog" << endl;
	cout << "- Added About" << endl;
	cout << "- Added Command line option in menu" << endl;
	cout << "================================================" << endl;
	cout << "Version a3\n" << endl;
	cout << "- Added functionality to Command line" << endl;
	cout << "- Added Apps option in menu" << endl;
	cout << "================================================" << endl;
	cout << "Version a4\n" << endl;
	cout << "- Added command 'newtextfile' " << endl;
	cout << "- Added command 'readtextfile' " << endl;
	cout << "- Added command 'help'" << endl;
	cout << "================================================" << endl;
	cout << "Version a5\n" << endl;
	cout << "- Added command 'togglefullscreen'" << endl;
	cout << "- Added command 'listapps'" << endl;
	cout << "- Added Apps submenu" << endl;
	cout << "- Added Calculator app" << endl;
	cout << "- Added Command Line to the app menu" << endl;
	cout << "================================================";
	cout << "Version a6\n" << endl;
	cout << "- Added 'Blackjack Game' option in Apps." << endl;
	cout << "- Added 'Updater' option in the main menu" << endl;
	cout << "		- Checks for a newer version and updates if available" << endl;
	cout << "		- In design" << endl;
	cout << "		- Estimated availability: Version b1";
	cout << "- Changed look of 'Changelog'" << endl;
	cout << "- Fixed a bug when using the 'Calculator' app and using 'quit' in command line afterwards," << endl;
	cout << "  a message pops up saying 'Do you want to continue?' which was executing from the 'Calculator' app" << endl;
	cout << "================================================" << endl;
	cout << "Upcoming: Version a7 (last pre-release)\n" << endl;
	cout << "- Remade the menus designs" << endl;
	cout << "- Console command for launching apps" << endl;
	cout << "- Working on Updater" << endl;
	cout << "- A new game" << endl;
	cout << "================================================" << endl;
	cout << "Press 'M' to return to the main menu!" << endl;
	cout << "================================================" << endl;


	char key;
	key = cin.get();

	if (key == 'm' || key == 'M')
		mainMenu();
	else
		changes();

}

void info()
{
	system("cls");
	cout << "================================================" << endl;

	cout << "About" << endl;
	cout << "This program was made for practicing and learning C/C++ stuff"<< endl;
	cout << "Press 'M' to return to the main menu!"<< endl;
	cout << "================================================" << endl;

	char key;
	key = cin.get();

	if (key == 'm' || key == 'M')
		mainMenu();
	else
		info();
}
void settings()
{
	int choice;
	system("cls");
	cout << "================================================" << endl;
	cout << "Settings\n\n";
	cout << "Version: " << version << endl;
	cout << "1. Toggle Fullscreen" << endl;
	cout << "0. Return to Main Menu" << endl;
	cout << "================================================" << endl;
	cin >> choice;

	switch (choice)
	{
	case 0:
		mainMenu();
		break;
	case 1:
		::SendMessage(::GetConsoleWindow(), WM_SYSKEYDOWN, VK_RETURN, 0x20000000);
		//ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);
		settings();
		break;
	default:
		settings();
		break;
	}
}