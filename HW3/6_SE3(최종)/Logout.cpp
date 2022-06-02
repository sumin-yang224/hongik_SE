#include "Logout.h"


/*
	�Լ� �̸� : Logout()
	���	  : Control class �����ڷ�, boundary class�� �����ϰ� logout �Լ� ����
	���� ���� : UserList* pUserList
	��ȯ��    : Logout Instance
*/
Logout::Logout(UserList* pUserList)
{
	this->pUserList = pUserList;
	pLogoutUI = new LogoutUI(this);
	pLogoutUI->logout();
}

/*
	�Լ� �̸� : userLogout()
	���	  : ������ ���̵� �޾� �α׾ƿ�
	���� ���� : ����
	��ȯ��    : string id
*/
string Logout::userLogout()
{
	string id;
	id= pUserList->checkLogout();
	return id;
}