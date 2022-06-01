#include "Login.h"

/*
	함수 이름 : Login()
	기능	  : Control class 생성자로, boundary class를 생성하고 login 함수 실행
	전달 인자 : UserList* pUserList
	반환값    : Login Instance
*/
Login::Login(UserList* pUserList)
{
	this->pUserList = pUserList;
	pLoginUI = new LoginUI(this);
	pLoginUI->login();
}

/*
	함수 이름 : userLogin()
	기능	  : 유저의 아이디, 비밀번호로 로그인
	전달 인자 : char* id, char* pw
	반환값    : 없음
*/
void Login::userLogin(char* id, char* pw)
{
	pUserList->checkLogin(id,pw);
}