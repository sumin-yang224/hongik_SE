#include "User.h"
#include <iostream>
using namespace std;

/*
	함수 이름 : User()
	기능	  : User 생성자
	전달 인자 : const char* name, const char* ssn, const char* id, const char* password
	반환값    : User Instance
*/
User::User(const char* name, const char* ssn, const char* id, const char* password)
{
	this->name = name;
	this->ssn = ssn;
	this->id = id;
	this->password = password;
	loginStatus = false;
}

/*
	함수 이름 : changeLoginStatus()
	기능	  : 로그인 상태 변경
	전달 인자 : 없음
	반환값    : 없음
*/
void User::changeLoginStatus() 
{
	loginStatus = !loginStatus;
}

/*
	함수 이름 : getId()
	기능	  : 유저 아이디를 가져옴
	전달 인자 : 없음
	반환값    : 없음
*/
string User::getId()
{
	return id;
}

/*
	함수 이름 : getPw()
	기능	  : 유저 비밀번호를 가져옴
	전달 인자 : 없음
	반환값    : 없음
*/
string User::getPw()
{
	return password;
}

/*
	함수 이름 : checkLog()
	기능	  : 유저의 로그인 상태를 확인함
	전달 인자 : 없음
	반환값    : bool
*/
bool User::checkLog()
{
	return loginStatus;
}