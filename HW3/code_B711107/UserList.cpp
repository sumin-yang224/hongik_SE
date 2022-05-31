#include "UserList.h"

UserList::UserList()
{
	numUsers = 0;
}
void UserList::addNewUser(User* user)
{
	userList[numUsers++] = user;
}
void UserList::removeUser()
{

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