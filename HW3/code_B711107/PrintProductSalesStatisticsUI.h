#pragma once
#include "PrintProductSalesStatistics.h"

using namespace std;

class PrintProductSalesStatistics;

class PrintProductSalesStatisticsUI
{
private:
    PrintProductSalesStatistics* pPrintProductSalesStatistics;

public:
    PrintProductSalesStatisticsUI(PrintProductSalesStatistics* printProductSalesStatistics);
    void printSalesStatistics();
};