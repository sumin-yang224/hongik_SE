#include <iostream>
#include <string>
#include <fstream>
#include "SatisfactionAssessmentUI.h"
#include "SatisfactionAssessment.h"
#include "ClothingProductData.h"
#include "ClothingProductList.h"

using namespace std;

#define MAX_STRING 32
extern ifstream readFile;
extern ofstream writeFile;


/*
	�Լ� �̸� : SatisfactionAssessmentUI()
	���	  : Boundary class ������
	���� ���� : SatisfactionAssessment* satisfactionAssessment, UserList* userList
	��ȯ��    : SatisfactionAssessmentUI Instance
*/
SatisfactionAssessmentUI::SatisfactionAssessmentUI(SatisfactionAssessment* satisfactionAssessment, UserList* userList)
{
	pSatisfactionAssessment = satisfactionAssessment;
	pUserList = userList;
}

/*
	�Լ� �̸� : enterSatisfaction()
	���	  : ���Ÿ����� �� UI��, ������ ���� �ִ� ��ǰ�� �������� �Է��Ͽ� ����
	���� ���� : ����
	��ȯ��    : ����
*/
void SatisfactionAssessmentUI::enterSatisfaction()
{
	string productName;
	string productCompanyName;
	string sellerID;
	int average, satisfaction, price, remainQuantity;
	string userID = this->pUserList->checkLoginUser();

	readFile >> productName;
	readFile >> satisfaction;

	ClothingProductData* data;
	data = pSatisfactionAssessment->addSatisfactionOfProduct(userID, productName, satisfaction);
	if (data == NULL) { //������������ ��ǰ ������������ ���� ��ȿó��
		cout << "������������ �����Դϴ�." << endl;
		return;
	}
	sellerID = data->getSellerID();

	writeFile << "4.4. ��ǰ ���Ÿ����� ��" << endl;
	writeFile << "> " << sellerID << " " << productName << " " << satisfaction << endl;
}