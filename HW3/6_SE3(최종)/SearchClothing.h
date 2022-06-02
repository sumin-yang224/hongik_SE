#pragma once
#include "SearchClothingUI.h"
#include "ClothingProductList.h"

class SearchClothing
{
private:
	SearchClothingUI* pSearchClothingUI;
	ClothingProductList* pClothingProductList;

public:
	SearchClothing(ClothingProductList* pClothingProductList);
	void showClothingProductDetails(string*, string*, int*, int*, string*, float*);
};