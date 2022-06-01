#pragma once
#include "ClothingProductList.h"
#include "PrintProductSalesStatisticsUI.h"
#include "UserList.h"

class PrintProductSalesStatisticsUI;

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