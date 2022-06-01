#pragma once
#include "InquireSalesClothing.h"

class InquireSalesClothing;

class InquireSalesClothingUI
{
private:
    InquireSalesClothing* pInquireSalesClothing;

public:
    InquireSalesClothingUI(InquireSalesClothing* inquireSalesClothing);
    void inquireSalesClothingProduct();
};