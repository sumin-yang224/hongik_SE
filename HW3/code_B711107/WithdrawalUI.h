#pragma once

class Withdrawal;//순환참조로 인한 오류 방지

class WithdrawalUI
{
private:
	Withdrawal* pWithdrawal;
public:
	WithdrawalUI(Withdrawal* pWithdrawal);
	void deleteUser();
};
