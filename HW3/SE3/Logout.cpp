#include "Logout.h"

Logout::Logout(UserList* pUserList)
{
	this->pUserList = pUserList;
	pLogoutUI = new LogoutUI(this);
	pLogoutUI->logout();
}
void Logout::userLogout(char* id)
{
	pUserList->checkLogout(id);
}