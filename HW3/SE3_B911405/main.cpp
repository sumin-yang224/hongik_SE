// 헤더 선언
#include <iostream>
#include <cstring>
#include <fstream>
#include "SignUp.h"
#include "Login.h"
#include "Logout.h"
#include "UserList.h"
#include "Withdrawal.h"

using namespace std;

// 상수 선언
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// 함수 선언
void run();

// 변수 선언
//FILE* in_fp, * out_fp;
ifstream readFile;
ofstream writeFile;

int main()
{ // 파일 입출력을 위한 초기화

	readFile.open(INPUT_FILE_NAME);
	writeFile.open(OUTPUT_FILE_NAME);

	run();

	return 0;
}
void run()
{
	UserList* userList = new UserList();
	int menu_level_1 = 0, menu_level_2 = 0;
	int is_program_exit = 0;

	while (!is_program_exit)
	{
		//UserList* userList = new UserList();
		readFile >> menu_level_1;
		readFile >> menu_level_2;
		// 메뉴 구분 및 해당 연산 수행
		switch (menu_level_1)
		{
		case 1:
		{
			switch (menu_level_2)
			{
			case 1: //1.1. 회원가입
			{
				SignUp signUp(userList);
				cout << "회원가입 완료" << endl;
				break;
			}
			case 2: //2.1 회원탈퇴
			{
				Withdrawal withDrawal(userList);
				cout << "회원탈퇴 완료" << endl;
				break;
			}
			}
			break;
		}
		case 2:
		{
			switch (menu_level_2)
			{
			case 1: //2.1. 로그인
			{
				Login login(userList);
				cout << "로그인 완료" << endl;
				break;
			}
			case 2: //2.2. 로그아웃
			{
				Logout logout(userList);
				cout << "로그아웃 완료" << endl;
				break;
			}
			}
			break;
		}
		default:
			is_program_exit = 1;
			break;
		}
	}
}
