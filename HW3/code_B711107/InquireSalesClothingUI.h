#pragma once
#include "InquireSalesClothing.h"

using namespace std;

class InquireSalesClothing;

class InquireSalesClothingUI
{
private:
    InquireSalesClothing* pInquireSalesClothing;

public:
    InquireSalesClothingUI(InquireSalesClothing* inquireSalesClothing);
    void inquireSalesClothingProduct();
};