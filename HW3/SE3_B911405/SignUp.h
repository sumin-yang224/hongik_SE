#pragma once
#include "SignUpUI.h"
#include "UserList.h"
#include "User.h"

class SignUp 
{
private:
	SignUpUI* pSignUpUI;
	UserList* pUserList;
	User* pUser;
public:
	SignUp(UserList* pUserList);
	void addNewUser(char* name, char* ssn, char* id, char* pw);
};