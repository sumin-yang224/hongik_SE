#include "SatisfactionAssessment.h"
#include "UserList.h"
#include <iostream>
#include <string>
using namespace std;


/*
	�Լ� �̸� : SatisfactionAssessment()
	���	  : Control class �����ڷ�, boundary class�� �����ϰ� enterSatisfaction �Լ� ����
	���� ���� : ClothingProductList* pClothingProductList, UserList* userList
	��ȯ��    : SatisfactionAssessment Instance
*/
SatisfactionAssessment::SatisfactionAssessment(ClothingProductList* pClothingProductList, UserList* userList)
{
	this->pClothingProductList = pClothingProductList;
	this->pUserList = userList;
	this->pSatisfactionAssessmentUI = new SatisfactionAssessmentUI(this);
	pSatisfactionAssessmentUI->enterSatisfaction();
}


/*
	�Լ� �̸� : addSatisfactionOfProduct()
	���	  : �������̵�, ��ǰ��, �������� �޾� ��ǰ�����Ϳ� �Է�
	���� ���� : string userID, string ProductName, int Satisfaction
	��ȯ��    : ClothingProductData*
*/
bool SatisfactionAssessment::addSatisfactionOfProduct(string* sellerID, string ProductName, int Satisfaction)
{
	ClothingProductData* data;
	string userID = this->pUserList->checkLoginUser();

	data = pClothingProductList->addSatisfactionOfProduct(userID, ProductName, Satisfaction);
	if (data == NULL)
	{ //������������ ��ǰ ������������ ���� ��ȿó��
		return false;
	}
	*sellerID = data->getSellerID();

	return true;
}