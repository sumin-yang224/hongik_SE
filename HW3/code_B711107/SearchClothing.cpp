#include "SearchClothing.h"
#include <iostream>
#include <string>
using namespace std;

SearchClothing::SearchClothing(ClothingProductList *pClothingProductList)
{
	this->pClothingProductList = pClothingProductList;
	pSearchClothingUI = new SearchClothingUI(this);
	pSearchClothingUI->searchClothingProduct();
}

void SearchClothing::showClothingProductDetails(string *productName, string *productCompanyName, int *price, int *remainQuantity, string *sellerID, float *average)
{
	ClothingProductData *data;
	data = pClothingProductList->searchClothingProductData(*productName);
	data->getSalesClothingProductDetails(productName, productCompanyName, price, remainQuantity, sellerID, average);
}