#include <iostream>
#include <cstring>
#include <fstream>
#include "SignUpUI.h"
#include "SignUp.h"

using namespace std;

#define MAX_STRING 32
extern ifstream readFile;
extern ofstream writeFile;

SignUpUI::SignUpUI(SignUp* signUp)
{
	pSignUp = signUp;
	
}
void SignUpUI::createNewUser()
{
	char name[MAX_STRING], ssn[MAX_STRING], id[MAX_STRING], pw[MAX_STRING];

	readFile >> name;
	readFile >> ssn;
	readFile >> id;
	readFile >> pw;
	
	pSignUp->addNewUser(name, ssn, id, pw);
	writeFile << "1.1. ȸ??????" << endl;
	writeFile << "> " << name << " " << ssn << " " << id << " " << pw << endl;
}