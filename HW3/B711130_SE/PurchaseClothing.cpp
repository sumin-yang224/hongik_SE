#include "PurchaseClothing.h"
#include <iostream>
#include <string>
using namespace std;

PurchaseClothing::PurchaseClothing(ClothingProductList* clothingProductList, UserList* userList)
{
	this->pClothingProductList = clothingProductList;
	this->pUserList = userList;
	pPurchaseClothingUI = new PurchaseClothingUI(this, pUserList);
	pPurchaseClothingUI->clickPurchaseButton();
}

ClothingProductData* PurchaseClothing::purchaseClothingProduct()
{
	string productName;
	for (int i = 0; i < pClothingProductList->getNumClothingProduct(); i++) {
		if (pClothingProductList->getClothingProductData(i)->getRecentSearch() == 1) {
			productName = pClothingProductList->getClothingProductData(i)->getProductName();
		}		
	}
	return pClothingProductList->searchClothingProductData(productName);
	
}