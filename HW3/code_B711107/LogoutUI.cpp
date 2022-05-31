#include <iostream>
#include <fstream>
#include "LogoutUI.h"

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
	writeFile << "2.2. 로그아웃" << endl;
	writeFile << "> " << id << " " << endl;
}