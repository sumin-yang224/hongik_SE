#pragma once
#include "RegisterSalesClothing.h"

using namespace std;

class RegisterSalesClothing;

class RegisterSalesClothingUI
{
private:
    RegisterSalesClothing* pRegisterSalesClothing;

public:
    RegisterSalesClothingUI(RegisterSalesClothing* registerSalesClothing);
    void registerNewClothingProduct();
};