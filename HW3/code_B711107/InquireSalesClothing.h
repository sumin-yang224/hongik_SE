#pragma once
#include "InquireSalesClothingUI.h"
#include "ClothingProductList.h"
#include "UserList.h"

class InquireSalesClothingUI;

class InquireSalesClothing
{
private:
    InquireSalesClothingUI* pInquireSalesClothingUI;
    ClothingProductList* pClothingProductList;
    UserList* pUserList;

public:
    InquireSalesClothing(ClothingProductList*, UserList*);
    void showSalesClothingProduct(ClothingProductList* clothingProductList);
};