#include <iostream>
#include <fstream>
#include "LogoutUI.h"
#include "Logout.h"

using namespace std;

#define MAX_STRING 32
extern ifstream readFile;
extern ofstream writeFile;

LogoutUI::LogoutUI(Logout* logout)
{
	pLogout = logout;
}
void LogoutUI::logout()
{
	string id;
	id=pLogout->userLogout();
	writeFile << "2.2. ·Î±×¾Æ¿ô" << endl;
	writeFile << "> " << id << " " << endl;
}