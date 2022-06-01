#include "User.h"
#include <iostream>
using namespace std;

User::User(const char* name, const char* ssn, const char* id, const char* password)
{
	this->name = name;
	this->ssn = ssn;
	this->id = id;
	this->password = password;
	loginStatus = false;
}
void User::changeLoginStatus() 
{
	loginStatus = !loginStatus;
}
string User::getId()
{
	return id;
}
string User::getPw()
{
	return password;
}
bool User::checkLog()
{
	return loginStatus;
}