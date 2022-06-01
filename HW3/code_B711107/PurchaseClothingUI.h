#pragma once
#include "UserList.h"

class PurchaseClothing;

class PurchaseClothingUI
{
private:
	PurchaseClothing* pPurchaseClothing;
	UserList* pUserList;
public:
	PurchaseClothingUI(PurchaseClothing* purchaseClothing, UserList* userList);
	void clickPurchaseButton();
};