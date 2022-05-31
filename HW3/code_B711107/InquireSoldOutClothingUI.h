#pragma once
#include "InquireSoldOutClothing.h"

using namespace std;

class InquireSoldOutClothing;

class InquireSoldOutClothingUI
{
private:
    InquireSoldOutClothing* pInquireSoldOutClothing;

public:
    InquireSoldOutClothingUI(InquireSoldOutClothing* inquireSoldOutClothing);
    void inquireSoldOutClothingProduct();
};