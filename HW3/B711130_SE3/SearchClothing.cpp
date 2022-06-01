#include "SearchClothing.h"
#include <iostream>
#include <string>
using namespace std;

SearchClothing::SearchClothing(ClothingProductList* pClothingProductList)
{	
	this->pClothingProductList = pClothingProductList;
	pSearchClothingUI = new SearchClothingUI(this);
	pSearchClothingUI->searchClothingProduct();
}

ClothingProductData* SearchClothing::showClothingProductDetails(string ProductName)
{
	return pClothingProductList->searchClothingProductData(ProductName);
}