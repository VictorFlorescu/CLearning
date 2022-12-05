#pragma comment(lib, "Urlmon.lib")

#include "main.h"
#include <cstdio>

using namespace std;

	//URL of latest update (for testing is the same version)
	const wchar_t* sURL = L"https://github.com/VictorFlorescu/CLearning/releases/download/InDev/C.exe";

	//Name of the destination file
	const wchar_t* dFile = L"C-Updated.exe";

void UpdaterMain()
{

	if (S_OK == URLDownloadToFile(NULL, sURL, dFile, 0, NULL))
	{
		cout << "Update Successful" << endl;
		Sleep(3000);
		startupUpdate();
	}
	else
	{
		cout << "Unable to Download the update.";
		Sleep(3000);
		mainMenu();
	}
}

void startupUpdate()
{
	ShellExecute(NULL, NULL, dFile, NULL, NULL, SW_SHOWDEFAULT);
}