#include "PrintProductSalesStatisticsUI.h"
#include <iostream>
#include <fstream>
using namespace std;

extern ifstream readFile;
extern ofstream writeFile;

/*
	함수 이름 : PrintProductSalesStatisticsUI
	기능	  : Boundary class 생성자
	전달 인자 : PrintProductSalesStatistics* printProductSalesStatistics
	반환값    : PrintProductSalesStatisticsUI Instance
*/
PrintProductSalesStatisticsUI::PrintProductSalesStatisticsUI(PrintProductSalesStatistics* printProductSalesStatistics)
{
	pPrintProductSalesStatistics = printProductSalesStatistics;
}

/*
	함수 이름 : printSalesStatistics()
	기능	  : 판매 상품 통계 UI로, control class로부터 로그인한 유저의 상품 리스트를 받아와서 판매 상품 통계 출력
	전달 인자 : 없음
	반환값    : 없음
*/
void PrintProductSalesStatisticsUI::printSalesStatistics()
{
	ClothingProductList* clothingProductList = new ClothingProductList;
	pPrintProductSalesStatistics->showSalesStatistics(clothingProductList);

	writeFile << "5.1 판매 상품 통계" << endl;
	for (int i = 0; i < clothingProductList->getNumClothingProduct(); i++) {
		string productName;
		int totalSales;
		float average;
		clothingProductList->getClothingProductData(i)->getClothingProductStatistics(&productName, &totalSales, &average);
		writeFile << "> " << productName << " " << totalSales << " " << average << endl;
	}
}