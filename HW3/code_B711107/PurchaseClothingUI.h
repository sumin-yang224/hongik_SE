#pragma once
#include "UserList.h"

class PurchaseClothing;

class PurchaseClothingUI
{
private:
	PurchaseClothing *pPurchaseClothing;

public:
	PurchaseClothingUI(PurchaseClothing *purchaseClothing);
	void clickPurchaseButton();
};