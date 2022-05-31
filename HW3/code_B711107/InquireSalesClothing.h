#pragma once

#include "ClothingProductList.h"
#include "InquireSalesClothingUI.h"
#include "UserList.h"

using namespace std;

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