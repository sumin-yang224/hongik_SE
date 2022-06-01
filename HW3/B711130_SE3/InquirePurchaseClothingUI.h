#pragma once
#include "InquirePurchaseClothing.h"

class InquirePurchaseClothing;

class InquirePurchaseClothingUI
{
private:
    InquirePurchaseClothing* pInquirePurchaseClothing;

public:
    InquirePurchaseClothingUI(InquirePurchaseClothing* inquirePurchaseClothing);
    void inquirePurchaseClothingProduct();
};

