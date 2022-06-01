#include "Withdrawal.h"
#include <iostream>
using namespace std;
Withdrawal::Withdrawal(UserList* pUserList)
{
	this->pUserList = pUserList;
	pWithdrawalUI = new WithdrawalUI(this);
	pWithdrawalUI->deleteUser();
}
string Withdrawal::removeUser()
{
	string id;
	id = pUserList->removeUser();
	return id;
}