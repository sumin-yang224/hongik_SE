#include "Logout.h"


/*
	함수 이름 : Logout()
	기능	  : Control class 생성자로, boundary class를 생성하고 logout 함수 실행
	전달 인자 : UserList* pUserList
	반환값    : Logout Instance
*/
Logout::Logout(UserList* pUserList)
{
	this->pUserList = pUserList;
	pLogoutUI = new LogoutUI(this);
	pLogoutUI->logout();
}

/*
	함수 이름 : userLogout()
	기능	  : 유저의 아이디를 받아 로그아웃
	전달 인자 : 없음
	반환값    : string id
*/
string Logout::userLogout()
{
	string id;
	id= pUserList->checkLogout();
	return id;
}