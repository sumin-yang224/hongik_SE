#include "SignUp.h"
#include <iostream>
using namespace std;

/*
	함수 이름 : SignUp()
	기능	  : Control class 생성자로, boundary class를 생성하고 createNewUser 함수 실행
	전달 인자 : UserList* pUserList
	반환값    : SignUp Instance
*/
SignUp::SignUp(UserList* pUserList)
{
	this->pUserList = pUserList;
	pSignUpUI = new SignUpUI(this);
	pSignUpUI->createNewUser();
}

/*
	함수 이름 : addNewUser()
	기능	  : 정보를 받아 새로운 유저를 유저리스트에 추가
	전달 인자 : char* name, char* ssn, char* id, char* pw
	반환값    : 없음
*/
void SignUp::addNewUser(char* name, char* ssn, char* id, char* pw)
{
	pUser = new User(name, ssn, id, pw);
	pUserList->addNewUser(pUser);
}