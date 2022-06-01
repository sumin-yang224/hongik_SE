// ��� ����
#include <iostream>
#include <cstring>
#include <fstream>
#include "SignUp.h"
#include "Login.h"
#include "Logout.h"
#include "UserList.h"
#include "Withdrawal.h"

using namespace std;

// ��� ����
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// �Լ� ����
void run();

// ���� ����
//FILE* in_fp, * out_fp;
ifstream readFile;
ofstream writeFile;

int main()
{ // ���� ������� ���� �ʱ�ȭ

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
		// �޴� ���� �� �ش� ���� ����
		switch (menu_level_1)
		{
		case 1:
		{
			switch (menu_level_2)
			{
			case 1: //1.1. ȸ������
			{
				SignUp signUp(userList);
				cout << "ȸ������ �Ϸ�" << endl;
				break;
			}
			case 2: //2.1 ȸ��Ż��
			{
				Withdrawal withDrawal(userList);
				cout << "ȸ��Ż�� �Ϸ�" << endl;
				break;
			}
			}
			break;
		}
		case 2:
		{
			switch (menu_level_2)
			{
			case 1: //2.1. �α���
			{
				Login login(userList);
				cout << "�α��� �Ϸ�" << endl;
				break;
			}
			case 2: //2.2. �α׾ƿ�
			{
				Logout logout(userList);
				cout << "�α׾ƿ� �Ϸ�" << endl;
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
