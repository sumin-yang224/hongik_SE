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

void PurchaseClothing::purchaseClothingProduct(string* productName, string* sellerID)
{
	ClothingProductData* data;
	string userID = this->pUserList->checkLoginUser();

	for (int i = 0; i < pClothingProductList->getNumClothingProduct(); i++)
	{
		if (pClothingProductList->getClothingProductData(i)->getRecentSearch() == 1)
		{
			*productName = pClothingProductList->getClothingProductData(i)->getProductName();
			*sellerID = pClothingProductList->getClothingProductData(i)->getSellerID();
		}
	}
	data = pClothingProductList->searchClothingProductData(*productName);
	data->upsalesQuantity();
	data->downremainQuantity();
	data->setBuyerID(userID);
}