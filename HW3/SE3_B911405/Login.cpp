#include "Login.h"

Login::Login(UserList* pUserList)
{
	this->pUserList = pUserList;
	pLoginUI = new LoginUI(this);
	pLoginUI->login();
}
void Login::userLogin(char* id, char* pw)
{
	pUserList->checkLogin(id,pw);
}