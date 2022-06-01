#pragma once
#include<iostream>
#include<string>
using namespace std;

class User
{
private:
	string name;
	string ssn;
	string id;
	string password;
	bool loginStatus;
public:
	User(const char* name,const char* ssn,const char* id,const char* password);
	void changeLoginStatus();
	bool checkLog();
	string getId();
	string getPw();
};
