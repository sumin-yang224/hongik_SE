#include <iostream>
#include <cstring>
#include <fstream>
#include "WithdrawalUI.h"
#include "Withdrawal.h"

using namespace std;
#define MAX_STRING 32
extern ofstream writeFile;


/*
	�Լ� �̸� : WithdrawalUI()
	���	  : Boundary class ������
	���� ���� : Withdrawal* pWithdrawal
	��ȯ��    : WithdrawalUI Instance
*/
WithdrawalUI::WithdrawalUI(Withdrawal* pWithdrawal)
{
	this->pWithdrawal = pWithdrawal;

}

/*
	�Լ� �̸� : deleteUser()
	���	  : ȸ��Ż�� UI��, ���� ���̵������û
	���� ���� : ����
	��ȯ��    : ����
*/
void WithdrawalUI::deleteUser()
{
	string id;
	id = pWithdrawal->removeUser();
	writeFile << "1.2. ȸ��Ż��" << endl;
	writeFile << "> " << id << endl;
}