#pragma once
#include "LogoutUI.h"
#include "UserList.h"

class Logout
{
private:
	LogoutUI* pLogoutUI;
	UserList* pUserList;
public:
	Logout(UserList* pUserList);
	string userLogout();
};