#include "Logout.h"

Logout::Logout(UserList* pUserList)
{
	this->pUserList = pUserList;
	pLogoutUI = new LogoutUI(this);
	pLogoutUI->logout();
}
string Logout::userLogout()
{
	string id;
	id= pUserList->checkLogout();
	return id;
}