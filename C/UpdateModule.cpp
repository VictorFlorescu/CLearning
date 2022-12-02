#pragma comment(lib, "Urlmon.lib")

#include <windows.h>
#include <cstdio>
#include "main.h"
using namespace std;


int UpdaterMain()
{

    // URL of the music file, image file etc.
    const wchar_t* sURL = L"https://www.mediafire.com/file/bu0ipb041b6ijs6/MiniOS_prototype.exe/file";

    // Name of the Destination file 
    const wchar_t* dFile = L"os.exe";

    if (S_OK == URLDownloadToFile(NULL, sURL, dFile, 0, NULL))
    {

        cout << "The file is saved!" << endl;
        return 0;
        mainMenu();
    }

    else
    {

        cout << "Unable to Download the file.";
        return -1;
        mainMenu();
    }

}