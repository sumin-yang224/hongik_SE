#include "UserList.h"
#include <iostream>

using namespace std;

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
		if (id == userList[i]->getId()&pw==userList[i]->getPw())
		{
			userList[i]->changeLoginStatus();
		}
	}
}
void UserList::checkLogout(char* id)
{

	for (int i = 0; i < numUsers; i++)
	{
		if (id == userList[i]->getId() & userList[i]->checkLog())
		{
			userList[i]->changeLoginStatus();
		}
	}
}
