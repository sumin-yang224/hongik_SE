#include "Withdrawal.h"
#include <iostream>
using namespace std;
Withdrawal::Withdrawal(UserList* pUserList)
{
	this->pUserList = pUserList;
	pWithdrawalUI = new WithdrawalUI(this);
	pWithdrawalUI->deleteUser();
}
char* Withdrawal::removeUser()
{
	pUserList->removeUser();
}