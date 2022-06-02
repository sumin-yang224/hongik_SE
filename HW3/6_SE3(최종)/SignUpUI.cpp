#include <iostream>
#include <cstring>
#include <fstream>
#include "SignUpUI.h"
#include "SignUp.h"

using namespace std;

#define MAX_STRING 32
extern ifstream readFile;
extern ofstream writeFile;


/*
	함수 이름 : SignUpUI()
	기능	  : Boundary class 생성자
	전달 인자 : SignUp* signUp
	반환값    : SignUpUI Instance
*/
SignUpUI::SignUpUI(SignUp* signUp)
{
	pSignUp = signUp;
	
}

/*
	함수 이름 : createNewUser()
	기능	  : 회원가입 UI로, 정보를 읽고 control class에 인자로 전달하면서 addNewUser 함수 실행
	전달 인자 : 없음
	반환값    : 없음
*/
void SignUpUI::createNewUser()
{
	char name[MAX_STRING], ssn[MAX_STRING], id[MAX_STRING], pw[MAX_STRING];

	readFile >> name;
	readFile >> ssn;
	readFile >> id;
	readFile >> pw;
	
	pSignUp->addNewUser(name, ssn, id, pw);
	writeFile << "1.1. 회원가입" << endl;
	writeFile << "> " << name << " " << ssn << " " << id << " " << pw << endl;
}