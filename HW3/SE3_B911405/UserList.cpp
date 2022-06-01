#include "UserList.h"

UserList::UserList()
{
	numUsers = 0;
}
void UserList::addNewUser(User* user)
{
	userList[numUsers++] = user;
}
string UserList::removeUser()
{
	string id;
	for (int i = 0; i < numUsers; i++)
	{
		if (userList[i]->checkLog())
		{
			id = userList[i]->getId();
			numUsers--;
			for (int j = i; j < numUsers; j++)//List ÀçÁ¤·Ä
			{
				userList[j] = userList[j + 1];
			}
		}
	}
	return id;
}
void UserList::checkLogin(char* id, char* pw)
{
	
	for (int i = 0; i < numUsers; i++)
	{
		if (id == userList[i]->getId()&&pw==userList[i]->getPw())
		{
			userList[i]->changeLoginStatus();
		}
	}
}
string UserList::checkLoginUser()
{
	string id;
	for (int i = 0; i < numUsers; i++)
	{
		if (userList[i]->checkLog())
			id = userList[i]->getId();
	}
	return id;
}
string UserList::checkLogout()
{
	string id;
	for (int i = 0; i < numUsers; i++)
	{
		if (userList[i]->checkLog())
		{
			userList[i]->changeLoginStatus();
			id = userList[i]->getId();
		}
	}
	return id;
}
