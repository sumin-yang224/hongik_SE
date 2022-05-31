#pragma once

#include "ClothingProductList.h"
#include "PrintProductSalesStatisticsUI.h"
#include "UserList.h"

using namespace std;

class PrintProductSalesStatistics
{
private:
    PrintProductSalesStatisticsUI* pPrintProductSalesStatisticsUI;
    ClothingProductList* pClothingProductList;
    UserList* pUserList;

public:
    PrintProductSalesStatistics(ClothingProductList*, UserList*);
    void showSalesStatistics(ClothingProductList* clothingProductList);
};