#include "SignUp.h"
#include <iostream>
using namespace std;

/*
	�Լ� �̸� : SignUp()
	���	  : Control class �����ڷ�, boundary class�� �����ϰ� createNewUser �Լ� ����
	���� ���� : UserList* pUserList
	��ȯ��    : SignUp Instance
*/
SignUp::SignUp(UserList* pUserList)
{
	this->pUserList = pUserList;
	pSignUpUI = new SignUpUI(this);
	pSignUpUI->createNewUser();
}

/*
	�Լ� �̸� : addNewUser()
	���	  : ������ �޾� ���ο� ������ ��������Ʈ�� �߰�
	���� ���� : char* name, char* ssn, char* id, char* pw
	��ȯ��    : ����
*/
void SignUp::addNewUser(char* name, char* ssn, char* id, char* pw)
{
	pUser = new User(name, ssn, id, pw);
	pUserList->addNewUser(pUser);
}