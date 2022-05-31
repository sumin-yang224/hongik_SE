#pragma once
#include "InquireSoldOutClothing.h"

class InquireSoldOutClothing;

class InquireSoldOutClothingUI
{
private:
    InquireSoldOutClothing* pInquireSoldOutClothing;

public:
    InquireSoldOutClothingUI(InquireSoldOutClothing* inquireSoldOutClothing);
    void inquireSoldOutClothingProduct();
};