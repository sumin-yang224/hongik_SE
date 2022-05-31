#pragma once
#include "ClothingProductList.h"
#include "InquireSoldOutClothingUI.h"
#include "UserList.h"

class InquireSoldOutClothingUI;

class InquireSoldOutClothing
{
private:
    InquireSoldOutClothingUI* pInquireSoldOutClothingUI;
    ClothingProductList* pClothingProductList;
    UserList* pUserList;

public:
    InquireSoldOutClothing(ClothingProductList*, UserList*);
    void showSoldOutClothingProduct(ClothingProductList* clothingProductList);
};