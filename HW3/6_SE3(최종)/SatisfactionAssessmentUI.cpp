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
SatisfactionAssessmentUI::SatisfactionAssessmentUI(SatisfactionAssessment* satisfactionAssessment)
{
	pSatisfactionAssessment = satisfactionAssessment;
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

	readFile >> productName;
	readFile >> satisfaction;

	bool ret;
	ret = pSatisfactionAssessment->addSatisfactionOfProduct(&sellerID, productName, satisfaction);
	if (ret == false)
	{ //������������ ��ǰ ������������ ���� ��ȿó��
		cout << "������������ �����Դϴ�." << endl;
		return;
	}

	writeFile << "4.4. ��ǰ ���Ÿ����� ��" << endl;
	writeFile << "> " << sellerID << " " << productName << " " << satisfaction << endl;
}