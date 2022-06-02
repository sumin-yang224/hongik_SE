#pragma once
#include "InquirePurchaseClothingUI.h"
#include "ClothingProductList.h"
#include "UserList.h"

class InquirePurchaseClothingUI;

class InquirePurchaseClothing
{
private:
    InquirePurchaseClothingUI* pInquirePurchaseClothingUI;
    ClothingProductList* pClothingProductList;
    UserList* pUserList;

public:
    InquirePurchaseClothing(ClothingProductList*, UserList*);
    int showPurchaseClothingProduct(string*, string*, int*, int*, string*, float*);
};
