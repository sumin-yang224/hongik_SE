#include "SatisfactionAssessment.h"
#include "UserList.h"
#include <iostream>
#include <string>
using namespace std;

SatisfactionAssessment::SatisfactionAssessment(ClothingProductList* pClothingProductList, UserList* userList)
{
	this->pClothingProductList = pClothingProductList;
	pSatisfactionAssessmentUI = new SatisfactionAssessmentUI(this, userList);
	pSatisfactionAssessmentUI->enterSatisfaction();
}

ClothingProductData* SatisfactionAssessment::addSatisfactionOfProduct(string userID, string ProductName, int Satisfaction)
{
	return pClothingProductList->addSatisfactionOfProduct(userID, ProductName, Satisfaction);
}