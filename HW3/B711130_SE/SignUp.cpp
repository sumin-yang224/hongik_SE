#include "SignUp.h"
#include <iostream>
using namespace std;

SignUp::SignUp(UserList* pUserList)
{
	this->pUserList = pUserList;
	pSignUpUI = new SignUpUI(this);
	pSignUpUI->createNewUser();
}
void SignUp::addNewUser(char* name, char* ssn, char* id, char* pw)
{
	pUser = new User(name, ssn, id, pw);
	pUserList->addNewUser(pUser);
}