#pragma once
#include "WithdrawalUI.h"
#include "UserList.h"
#include "User.h"

class Withdrawal
{
private:
	WithdrawalUI* pWithdrawalUI;
	UserList* pUserList;
	User* pUser;
public:
	Withdrawal(UserList* pUserList);
	string removeUser();
};
