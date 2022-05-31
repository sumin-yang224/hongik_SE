#pragma once
#include "ClothingProductList.h"
#include "RegisterSalesClothingUI.h"
#include "UserList.h"

class RegisterSalesClothingUI;

class RegisterSalesClothing
{
private:
    RegisterSalesClothingUI* pRegisterSalesClothingUI;
    ClothingProductList* pClothingProductList;
    ClothingProductData* pClothingProductData;
    UserList* pUserList;

public:
    RegisterSalesClothing(ClothingProductList*, UserList*);
    void addNewClothingProduct(string, string, int, int);
};