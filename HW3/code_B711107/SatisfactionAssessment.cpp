#include "SatisfactionAssessment.h"
#include "UserList.h"
#include <iostream>
#include <string>
using namespace std;

SatisfactionAssessment::SatisfactionAssessment(ClothingProductList *pClothingProductList, UserList *userList)
{
	this->pClothingProductList = pClothingProductList;
	this->pUserList = userList;
	this->pSatisfactionAssessmentUI = new SatisfactionAssessmentUI(this);
	pSatisfactionAssessmentUI->enterSatisfaction();
}

bool SatisfactionAssessment::addSatisfactionOfProduct(string *sellerID, string ProductName, int Satisfaction)
{
	ClothingProductData *data;
	string userID = this->pUserList->checkLoginUser();

	data = pClothingProductList->addSatisfactionOfProduct(userID, ProductName, Satisfaction);
	if (data == NULL)
	{ //������������ ��ǰ ������������ ���� ��ȿó��
		return false;
	}
	*sellerID = data->getSellerID();

	return true;
}