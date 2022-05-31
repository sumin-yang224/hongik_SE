#include <iostream>
#include <fstream>
#include "InquireSoldOutClothingUI.h"

using namespace std;

extern ifstream readFile;
extern ofstream writeFile;

/*
	함수 이름 : InquireSoldOutClothingUI::printSoldOutStatistics()
	기능	  : 
	전달 인자 : 없음
	반환값    : 없음
*/

InquireSoldOutClothingUI::InquireSoldOutClothingUI(InquireSoldOutClothing* inquireSoldOutClothing)
{
	pInquireSoldOutClothing = inquireSoldOutClothing;
}

void InquireSoldOutClothingUI::inquireSoldOutClothingProduct()
{
	ClothingProductList* clothingProductList = new ClothingProductList;
	pInquireSoldOutClothing->showSoldOutClothingProduct(clothingProductList);

	writeFile << "3.3 판매 완료 상품 조회" << endl;
	for(int i=0;i<clothingProductList->getNumClothingProduct();i++){
		string productName;
		string productCompanyName;
		int price;
		int salesQuantity;
        int average;
		clothingProductList->getClothingProductData()[i].getSoldOutClothingProductDetails(productName, productCompanyName, &price, &salesQuantity, &average);
		writeFile << "> " << productName << " " << productCompanyName << " " << price << " " << salesQuantity<< " " << average << endl;  
	}
}