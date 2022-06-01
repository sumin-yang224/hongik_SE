#include <iostream>
#include <cstring>
#include <fstream>
#include "WithdrawalUI.h"
#include "Withdrawal.h"

using namespace std;
#define MAX_STRING 32
extern ofstream writeFile;


/*
	함수 이름 : WithdrawalUI()
	기능	  : Boundary class 생성자
	전달 인자 : Withdrawal* pWithdrawal
	반환값    : WithdrawalUI Instance
*/
WithdrawalUI::WithdrawalUI(Withdrawal* pWithdrawal)
{
	this->pWithdrawal = pWithdrawal;

}

/*
	함수 이름 : deleteUser()
	기능	  : 회원탈퇴 UI로, 유저 아이디삭제요청
	전달 인자 : 없음
	반환값    : 없음
*/
void WithdrawalUI::deleteUser()
{
	string id;
	id = pWithdrawal->removeUser();
	writeFile << "1.2. 회원탈퇴" << endl;
	writeFile << "> " << id << endl;
}