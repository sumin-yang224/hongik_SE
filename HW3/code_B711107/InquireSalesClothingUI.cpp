#include <iostream>
#include <fstream>
#include "InquireSalesClothingUI.h"

using namespace std;

extern ifstream readFile;
extern ofstream writeFile;

/*
	함수 이름 : InquireSalesClothingUI::printSalesStatistics()
	기능	  : 
	전달 인자 : 없음
	반환값    : 없음
*/

InquireSalesClothingUI::InquireSalesClothingUI(InquireSalesClothing* inquireSalesClothing)
{
	pInquireSalesClothing = inquireSalesClothing;
}

void InquireSalesClothingUI::inquireSalesClothingProduct()
{
	ClothingProductList* clothingProductList = new ClothingProductList;
	pInquireSalesClothing->showSalesClothingProduct(clothingProductList);

	writeFile << "3.2 등록 상품 조회" << endl;
	for(int i=0;i<clothingProductList->getNumClothingProduct();i++){
		string productName;
		int totalSales;
		int average;
		clothingProductList->getClothingProductData()[i].getClothingProductStatistics(productName, &totalSales, &average);
		writeFile << "> " << productName << " " << totalSales << " " << average << endl;  
	}
}