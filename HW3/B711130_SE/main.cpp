#include "SignUp.h"
#include "Login.h"
#include "Logout.h"
#include "UserList.h"
#include "InquireSalesClothing.h"
#include "InquireSoldOutClothing.h"
#include "PrintProductSalesStatistics.h"
#include "RegisterSalesClothing.h"
#include "SearchClothing.h"
#include "PurchaseClothing.h"
#include "InquirePurchaseClothing.h"
#include "SatisfactionAssessment.h"
#include "ClothingProductList.h"

#include <iostream>
#include <cstring>
#include <string>
#include <fstream>

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

	readFile.close();
	writeFile.close();

	return 0;
}


void run()
{
	UserList* userList = new UserList();
	ClothingProductList* clothingProductList = new ClothingProductList();

	// �޴� �Ľ��� ���� level ������ ���� ����
	int menu_level_1 = 0, menu_level_2 = 0;
	int is_program_exit = 0;

	while (!is_program_exit)
	{
		// �Է����Ͽ��� �޴� ���� 2���� �б�
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
			case 2: //1.2. ȸ��Ż��
			{

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
		case 3:
		{
			switch (menu_level_2)
			{
			case 1:   // "3.1. �Ǹ� �Ƿ� ���" �޴� �κ�
			{
				RegisterSalesClothing registerSalesClothing(clothingProductList, userList);
				cout << "�Ǹ� �Ƿ� ��� �Ϸ�" << endl;
				break;
			}
			case 2:   // "3.2. ��� ��ǰ ��ȸ" �޴� �κ�
			{
				InquireSalesClothing inquireSalesClothing(clothingProductList, userList);
				cout << "�Ǹ� ���� ��ǰ ��ȸ �Ϸ�" << endl;
				break;
			}
			case 3:   // "3.3. �Ǹ� �Ϸ� ��ǰ ��ȸ" �޴� �κ�
			{
				InquireSoldOutClothing inquireSoldOutClothing(clothingProductList, userList);
				cout << "�Ǹ� �Ϸ� ��ǰ ��ȸ �Ϸ�" << endl;
				break;
			}
			}
			break;
		}
		case 4:
		{
			string prodName;
			switch (menu_level_2)
			{
			case 1:     // "4.1. ��ǰ ���� �˻��� �޴� �κ�
			{
				SearchClothing searchClothing(clothingProductList);
				cout << "��ǰ �˻� �Ϸ�" << endl;
				break;
			}
			case 2:     // "4.2. ��ǰ ���š� �޴� �κ�
			{
				PurchaseClothing purchaseClothing(clothingProductList, userList);
				cout << "��ǰ ���� �Ϸ�" << endl;
				break;
			}
			case 3:     // "4.3. ��ǰ ���� ���� ��ȸ�� �޴� �κ�
			{
				InquirePurchaseClothing inquirePurchaseClothing(clothingProductList, userList);
				cout << "��ǰ ���� ���� ��ȸ �Ϸ�" << endl;
				break;
			}
			case 4:     // "4.4. ��ǰ ���Ÿ����� �򰡡� �޴� �κ�
			{
				//SatisfactionAssessment

				break;
			}
			}
			break;
		}
		case 5:
		{
			switch (menu_level_2)
			{
			case 1:   // "5.1. �Ǹ� ��ǰ ���" �޴� �κ�
			{
				PrintProductSalesStatistics printProductSalesStatistics(clothingProductList, userList);
				cout << "�Ǹ� ��ǰ ��� ��� �Ϸ�" << endl;
				break;
			}
			}
			break;
		}
		case 6:
		{
			switch (menu_level_2)
			{
			case 1:   // 6.1. ����
			{
				is_program_exit = 1;
				writeFile << "6.1. ����" << endl;
				break;
			}
			}
		}
		default:
			is_program_exit = 1;
			break;
		}
	}
}
