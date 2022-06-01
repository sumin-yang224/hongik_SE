#include "UserList.h"

/*
	�Լ� �̸� : UserList()
	���	  : UserList ������
	���� ���� : ����
	��ȯ��    : ����
*/
UserList::UserList()
{
	numUsers = 0;
}


/*
	�Լ� �̸� : addNewUser()
	���	  : ��������Ʈ�� ������ �߰�
	���� ���� : User* user
	��ȯ��    : ����
*/
void UserList::addNewUser(User* user)
{
	userList[numUsers++] = user;
}


/*
	�Լ� �̸� : removeUser()
	���	  : ��������Ʈ���� ������ ����
	���� ���� : ����
	��ȯ��    : string
*/
string UserList::removeUser()
{
	string id;
	for (int i = 0; i < numUsers; i++)
	{
		if (userList[i]->checkLog())
		{
			id = userList[i]->getId();
			numUsers--;
			for (int j = i; j < numUsers; j++)
			{
				userList[j] = userList[j + 1];
			}
		}
	}
	return id;
}


/*
	�Լ� �̸� : checkLogin()
	���	  : ��������Ʈ�� ����� ���̵�� ��й�ȣ�� �´��� ��
	���� ���� : ����
	��ȯ��    : string
*/
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


/*
	�Լ� �̸� : checkLoginUser()
	���	  : �α��ε� ������ ���̵� ������
	���� ���� : ����
	��ȯ��    : string
*/
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


/*
	�Լ� �̸� : checkLogout()
	���	  : �α��ε� ������ �α׾ƿ� ���·� ��ȯ
	���� ���� : ����
	��ȯ��    : string
*/
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
