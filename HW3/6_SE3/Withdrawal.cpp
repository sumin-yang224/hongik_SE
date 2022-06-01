#include "Withdrawal.h"
#include <iostream>
using namespace std;

/*
	�Լ� �̸� : Withdrawal()
	���	  : Control class �����ڷ�, boundary class�� �����ϰ� deleteUser �Լ� ����
	���� ���� : UserList* userList
	��ȯ��    : Withdrawal Instance
*/
Withdrawal::Withdrawal(UserList* pUserList)
{
	this->pUserList = pUserList;
	pWithdrawalUI = new WithdrawalUI(this);
	pWithdrawalUI->deleteUser();
}

/*
	�Լ� �̸� : removeUser()
	���	  : ���� ���̵� ������ ���� ��������Ʈ�� �Ѱ���
	���� ���� : ����
	��ȯ��    : string
*/
string Withdrawal::removeUser()
{
	string id;
	id = pUserList->removeUser();
	return id;
}