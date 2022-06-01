#include <iostream>
#include <fstream>
#include "LoginUI.h"
#include "Login.h"

using namespace std;

#define MAX_STRING 32
extern ifstream readFile;
extern ofstream writeFile;

/*
	함수 이름 : LoginUI()
	기능	  : Boundary class 생성자
	전달 인자 : Login* login
	반환값    : LoginUI Instance
*/
LoginUI::LoginUI(Login* login)
{
	pLogin = login;
}

/*
	함수 이름 : login()
	기능	  : control class에 로그인 요청
	전달 인자 : 없음
	반환값    : 없음
*/
void LoginUI::login()
{
	char id[MAX_STRING], pw[MAX_STRING];
	readFile >> id;
	readFile >> pw;
	pLogin->userLogin(id, pw);
	writeFile << "2.1. 로그인" << endl;
	writeFile << "> " << id << " " << pw << endl;
}