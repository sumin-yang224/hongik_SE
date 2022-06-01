#include <iostream>
#include <fstream>
#include "LoginUI.h"
#include "Login.h"

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
	writeFile << "2.1. ·Î±×ÀÎ" << endl;
	writeFile << "> " << id << " " << pw << endl;
}