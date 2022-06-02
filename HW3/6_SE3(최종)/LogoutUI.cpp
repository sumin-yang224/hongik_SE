#include <iostream>
#include <fstream>
#include "LogoutUI.h"
#include "Logout.h"

using namespace std;

#define MAX_STRING 32
extern ifstream readFile;
extern ofstream writeFile;


/*
	�Լ� �̸� : LogoutUI()
	���	  : Boundary class ������
	���� ���� : Logout* logout
	��ȯ��    : LogoutUI Instance
*/
LogoutUI::LogoutUI(Logout* logout)
{
	pLogout = logout;
}

/*
	�Լ� �̸� : logout()
	���	  : control class�� �α׾ƿ� ��û
	���� ���� : ����
	��ȯ��    : ����
*/
void LogoutUI::logout()
{
	string id;
	id=pLogout->userLogout();
	writeFile << "2.2. �α׾ƿ�" << endl;
	writeFile << "> " << id << " " << endl;
}