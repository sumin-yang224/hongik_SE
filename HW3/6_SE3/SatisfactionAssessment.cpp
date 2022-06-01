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
	pSatisfactionAssessmentUI = new SatisfactionAssessmentUI(this, userList);
	pSatisfactionAssessmentUI->enterSatisfaction();
}

/*
	�Լ� �̸� : addSatisfactionOfProduct()
	���	  : �������̵�, ��ǰ��, �������� �޾� ��ǰ�����Ϳ� �Է�
	���� ���� : string userID, string ProductName, int Satisfaction
	��ȯ��    : ClothingProductData*
*/
ClothingProductData* SatisfactionAssessment::addSatisfactionOfProduct(string userID, string ProductName, int Satisfaction)
{
	return pClothingProductList->addSatisfactionOfProduct(userID, ProductName, Satisfaction);
}
