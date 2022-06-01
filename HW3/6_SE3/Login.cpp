#include "Login.h"

/*
	�Լ� �̸� : Login()
	���	  : Control class �����ڷ�, boundary class�� �����ϰ� login �Լ� ����
	���� ���� : UserList* pUserList
	��ȯ��    : Login Instance
*/
Login::Login(UserList* pUserList)
{
	this->pUserList = pUserList;
	pLoginUI = new LoginUI(this);
	pLoginUI->login();
}

/*
	�Լ� �̸� : userLogin()
	���	  : ������ ���̵�, ��й�ȣ�� �α���
	���� ���� : char* id, char* pw
	��ȯ��    : ����
*/
void Login::userLogin(char* id, char* pw)
{
	pUserList->checkLogin(id,pw);
}