#pragma once
#include "User.h"
#include <iostream>

using namespace std;

class UserList
{
private:
	User* userList[50];
	int numUsers;
public:
	UserList();
	void addNewUser(User* user);
	string removeUser();
	void checkLogin(char* id, char* pw);
	string checkLoginUser();
	string checkLogout();
};
