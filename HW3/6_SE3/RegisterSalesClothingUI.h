#pragma once
#include "RegisterSalesClothing.h"

class RegisterSalesClothing;

class RegisterSalesClothingUI
{
private:
    RegisterSalesClothing* pRegisterSalesClothing;

public:
    RegisterSalesClothingUI(RegisterSalesClothing* registerSalesClothing);
    void registerNewClothingProduct();
};
