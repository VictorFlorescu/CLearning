#include "main.h"

using namespace std;

void appsMenu()
{
	int choice;
	system("cls");
	cout << "================================================" << endl;
	cout << "Apps Menu\n\n";
	cout << "1. Calculator" << endl;
	cout << "2. Command Line" << endl;
	cout << "3. Blackjack (in development)" << endl;
	cout << "0. Return to Menu" << endl;
	cout << "================================================" << endl;
	cout << "Enter your choice: " << endl;

	cin >> choice;

	switch (choice)
	{
	case 1:
		advancedCalculatorMain();
		break;
	case 2:
		commandLine();
		break;
	case 3:
		blackJackmain();
	case 0:
		mainMenu();
		break;
	default:
		appsMenu();
		break;
	}
}