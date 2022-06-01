#include "User.h"
#include <iostream>
using namespace std;

/*
	�Լ� �̸� : User()
	���	  : User ������
	���� ���� : const char* name, const char* ssn, const char* id, const char* password
	��ȯ��    : User Instance
*/
User::User(const char* name, const char* ssn, const char* id, const char* password)
{
	this->name = name;
	this->ssn = ssn;
	this->id = id;
	this->password = password;
	loginStatus = false;
}

/*
	�Լ� �̸� : changeLoginStatus()
	���	  : �α��� ���� ����
	���� ���� : ����
	��ȯ��    : ����
*/
void User::changeLoginStatus() 
{
	loginStatus = !loginStatus;
}

/*
	�Լ� �̸� : getId()
	���	  : ���� ���̵� ������
	���� ���� : ����
	��ȯ��    : ����
*/
string User::getId()
{
	return id;
}

/*
	�Լ� �̸� : getPw()
	���	  : ���� ��й�ȣ�� ������
	���� ���� : ����
	��ȯ��    : ����
*/
string User::getPw()
{
	return password;
}

/*
	�Լ� �̸� : checkLog()
	���	  : ������ �α��� ���¸� Ȯ����
	���� ���� : ����
	��ȯ��    : bool
*/
bool User::checkLog()
{
	return loginStatus;
}