#include "InquireSalesClothingUI.h"
#include <iostream>
#include <fstream>
using namespace std;

extern ifstream readFile;
extern ofstream writeFile;

/*
	함수 이름 : InquireSalesClothingUI()
	기능	  : Boundary class 생성자
	전달 인자 : InquireSalesClothing* inquireSalesClothing
	반환값    : InquireSalesClothingUI Instance
*/
InquireSalesClothingUI::InquireSalesClothingUI(InquireSalesClothing* inquireSalesClothing)
{
	pInquireSalesClothing = inquireSalesClothing;
}

/*
	함수 이름 : inquireSalesClothingProduct()
	기능	  : 판매등록 상품 UI로, control class로부터 로그인한 유저의 판매등록상품 리스트를 받아와서 출력
	전달 인자 : 없음
	반환값    : 없음
*/
void InquireSalesClothingUI::inquireSalesClothingProduct()
{
	ClothingProductList* clothingProductList = new ClothingProductList();
	pInquireSalesClothing->showSalesClothingProduct(clothingProductList);

	writeFile << "3.2 등록 상품 조회" << endl;
	for(int i=0;i<clothingProductList->getNumClothingProduct();i++){
		string productName;
		string productCompanyName;
		int price;
		int remainQuantity;
		clothingProductList->getClothingProductData(i)->getSalesClothingProductDetails(&productName, &productCompanyName, &price, &remainQuantity);
		writeFile << "> " << productName << " " << productCompanyName << " " << price << " " << remainQuantity<< endl;  
	}
}