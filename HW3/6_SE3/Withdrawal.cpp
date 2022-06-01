#include "Withdrawal.h"
#include <iostream>
using namespace std;

/*
	함수 이름 : Withdrawal()
	기능	  : Control class 생성자로, boundary class를 생성하고 deleteUser 함수 실행
	전달 인자 : UserList* userList
	반환값    : Withdrawal Instance
*/
Withdrawal::Withdrawal(UserList* pUserList)
{
	this->pUserList = pUserList;
	pWithdrawalUI = new WithdrawalUI(this);
	pWithdrawalUI->deleteUser();
}

/*
	함수 이름 : removeUser()
	기능	  : 유저 아이디 삭제를 위해 유저리스트에 넘겨줌
	전달 인자 : 없음
	반환값    : string
*/
string Withdrawal::removeUser()
{
	string id;
	id = pUserList->removeUser();
	return id;
}