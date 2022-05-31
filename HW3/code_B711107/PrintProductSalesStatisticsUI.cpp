#include <iostream>
#include <fstream>
#include "PrintProductSalesStatisticsUI.h"

using namespace std;

extern ifstream readFile;
extern ofstream writeFile;

/*
	함수 이름 : PrintProductSalesStatisticsUI::printSalesStatistics()
	기능	  : 
	전달 인자 : 없음
	반환값    : 없음
*/

PrintProductSalesStatisticsUI::PrintProductSalesStatisticsUI(PrintProductSalesStatistics* printProductSalesStatistics)
{
	pPrintProductSalesStatistics = printProductSalesStatistics;
}

void PrintProductSalesStatisticsUI::printSalesStatistics()
{
	ClothingProductList* clothingProductList = new ClothingProductList;
	pPrintProductSalesStatistics->showSalesStatistics(clothingProductList);

	writeFile << "5.1 판매 상품 통계" << endl;
	for(int i=0;i<clothingProductList->getNumClothingProduct();i++){
		string productName;
		int totalSales;
		int average;
		clothingProductList->getClothingProductData()[i].getClothingProductStatistics(productName, &totalSales, &average);
		writeFile << "> " << productName << " " << totalSales << " " << average << endl;  
	}
}