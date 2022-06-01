#pragma once
#include "PurchaseClothingUI.h"
#include "ClothingProductList.h"
#include "UserList.h"

class PurchaseClothingUI;

class PurchaseClothing
{
private:
	PurchaseClothingUI* pPurchaseClothingUI;
	ClothingProductList* pClothingProductList;
	UserList* pUserList;

public:
	PurchaseClothing(ClothingProductList* clothingProductList, UserList* userList);
	void purchaseClothingProduct(string*, string*);
};
