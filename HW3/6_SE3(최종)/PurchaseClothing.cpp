#include "PurchaseClothing.h"
#include <iostream>
#include <string>
using namespace std;

/*
	함수 이름 : PurchaseClothing()
	기능	  : Control class 생성자로, boundary class를 생성하고 clickPurchaseButton 함수 실행
	전달 인자 : ClothingProductList* clothingProductList, UserList* userList
	반환값    : PurchaseClothing Instance
*/
PurchaseClothing::PurchaseClothing(ClothingProductList* clothingProductList, UserList* userList)
{
	this->pClothingProductList = clothingProductList;
	this->pUserList = userList;
	pPurchaseClothingUI = new PurchaseClothingUI(this);
	pPurchaseClothingUI->clickPurchaseButton();
}

/*
	함수 이름 : purchaseClothingProduct()
	기능	  : 최근에 검색한 상품의 상품명을 받아 상품을 구매
	전달 인자 : 없음
	반환값    : ClothingProductData*
*/
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