#include "InquireSoldOutClothingUI.h"
#include <iostream>
#include <fstream>
using namespace std;

extern ifstream readFile;
extern ofstream writeFile;

/*
	함수 이름 : InquireSoldOutClothingUI()
	기능	  : Boundary class 생성자
	전달 인자 : InquireSoldOutClothing* inquireSoldOutClothing
	반환값    : InquireSoldOutClothingUI Instance
*/
InquireSoldOutClothingUI::InquireSoldOutClothingUI(InquireSoldOutClothing* inquireSoldOutClothing)
{
	pInquireSoldOutClothing = inquireSoldOutClothing;
}

/*
	함수 이름 : inquireSoldOutClothingProduct()
	기능	  : 판매 완료 상품 UI로, control class로부터 로그인한 유저의 판매완료상품 리스트를 받아와서 출력
	전달 인자 : 없음
	반환값    : 없음
*/
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
		clothingProductList->getClothingProductData(i)->getSoldOutClothingProductDetails(&productName, &productCompanyName, &price, &salesQuantity, &average);
		writeFile << "> " << productName << " " << productCompanyName << " " << price << " " << salesQuantity<< " " << average << endl;  
	}
}