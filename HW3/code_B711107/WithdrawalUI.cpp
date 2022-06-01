#include <iostream>
#include <cstring>
#include <fstream>
#include "WithdrawalUI.h"
#include "Withdrawal.h"

using namespace std;
#define MAX_STRING 32
extern ofstream writeFile;

WithdrawalUI::WithdrawalUI(Withdrawal* pWithdrawal)
{
	this->pWithdrawal = pWithdrawal;

}
void WithdrawalUI::deleteUser()
{
	string id;
	id = pWithdrawal->removeUser();
	writeFile << "1.2. 회원탈퇴" << endl;
	writeFile << "> " << id  << endl;
}