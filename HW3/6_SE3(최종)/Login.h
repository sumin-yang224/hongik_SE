#pragma once
#include "LoginUI.h"
#include "UserList.h"

class LoginUI;

class Login
{
private:
	LoginUI* pLoginUI;
	UserList* pUserList;
public:
	Login(UserList* pUserList);
	void userLogin(char* id, char* pw);
};