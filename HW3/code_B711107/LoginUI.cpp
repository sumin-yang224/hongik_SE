#include "LoginUI.h"
#include <iostream>
#include <fstream>

using namespace std;

#define MAX_STRING 32
extern ifstream readFile;
extern ofstream writeFile;

LoginUI::LoginUI(Login* login)
{
	pLogin = login;
}
void LoginUI::login()
{
	char id[MAX_STRING], pw[MAX_STRING];
	readFile >> id;
	readFile >> pw;
	pLogin->userLogin(id, pw);
    writeFile << "2.1. 로그인 " << endl;
	writeFile << "> " << id << " " << pw << endl;
}