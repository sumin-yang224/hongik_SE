#pragma once

class Withdrawal;//��ȯ������ ���� ���� ����

class WithdrawalUI
{
private:
	Withdrawal* pWithdrawal;
public:
	WithdrawalUI(Withdrawal* pWithdrawal);
	void deleteUser();
};
