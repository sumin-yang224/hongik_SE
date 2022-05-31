#include "InquireSalesClothingUI.h"
#include <iostream>
#include <fstream>

using namespace std;

extern ifstream readFile;
extern ofstream writeFile;

/*
	함수 이름 : InquireSalesClothingUI::InquireSalesClothingUI()
	기능	  : 생성자
	전달 인자 : InquireSalesClothing* inquireSalesClothing
	반환값    : 없음
*/
InquireSalesClothingUI::InquireSalesClothingUI(InquireSalesClothing* inquireSalesClothing)
{
	pInquireSalesClothing = inquireSalesClothing;
}

/*
	함수 이름 : InquireSalesClothingUI::inquireSalesClothingProduct()
	기능	  : 판매등록 상품 UI로, control class로부터 판매등록상품 리스트를 받아와서 출력
	전달 인자 : 없음
	반환값    : 없음
*/
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