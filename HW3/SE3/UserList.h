#pragma once
#include "User.h"

class UserList
{
private:
	User* userList[50];
	int numUsers;
public:
	UserList();
	void addNewUser(User* user);
	void removeUser();
	void checkLogin(char* id, char* pw);
	void checkLogout(char* id);
};
