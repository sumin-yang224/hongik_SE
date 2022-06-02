#include <iostream>
#include <fstream>
#include "LogoutUI.h"
#include "Logout.h"

using namespace std;

#define MAX_STRING 32
extern ifstream readFile;
extern ofstream writeFile;


/*
	함수 이름 : LogoutUI()
	기능	  : Boundary class 생성자
	전달 인자 : Logout* logout
	반환값    : LogoutUI Instance
*/
LogoutUI::LogoutUI(Logout* logout)
{
	pLogout = logout;
}

/*
	함수 이름 : logout()
	기능	  : control class에 로그아웃 요청
	전달 인자 : 없음
	반환값    : 없음
*/
void LogoutUI::logout()
{
	string id;
	id=pLogout->userLogout();
	writeFile << "2.2. 로그아웃" << endl;
	writeFile << "> " << id << " " << endl;
}