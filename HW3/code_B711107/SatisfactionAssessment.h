#pragma once
#include "SatisfactionAssessmentUI.h"
#include "ClothingProductList.h"


class SatisfactionAssessment
{
private:
	SatisfactionAssessmentUI* pSatisfactionAssessmentUI;
	ClothingProductList* pClothingProductList;
public:
	SatisfactionAssessment(ClothingProductList* pClothingProductList, UserList* userList);
	ClothingProductData* addSatisfactionOfProduct(string, string, int);
};
