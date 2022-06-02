#pragma once
#include "SatisfactionAssessmentUI.h"
#include "ClothingProductList.h"

class SatisfactionAssessment
{
private:
	SatisfactionAssessmentUI* pSatisfactionAssessmentUI;
	ClothingProductList* pClothingProductList;
	UserList* pUserList;

public:
	SatisfactionAssessment(ClothingProductList* pClothingProductList, UserList* userList);
	bool addSatisfactionOfProduct(string*, string, int);
};