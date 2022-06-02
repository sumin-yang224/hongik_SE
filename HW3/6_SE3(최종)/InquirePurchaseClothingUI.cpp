#include "InquirePurchaseClothingUI.h"
#include <iostream>
#include <fstream>
using namespace std;

extern ifstream readFile;
extern ofstream writeFile;

/*
	함수 이름 : InquirePurchaseClothingUI()
	기능	  : Boundary class 생성자
	전달 인자 : InquirePurchaseClothing* inquirePurchaseClothing
	반환값    : InquirePurchaseClothingUI Instance
*/
InquirePurchaseClothingUI::InquirePurchaseClothingUI(InquirePurchaseClothing* inquirePurchaseClothing)
{
	pInquirePurchaseClothing = inquirePurchaseClothing;
}

/*
	함수 이름 : inquirePurchaseClothingProduct()
	기능	  : 구매 상품 UI로, control class로부터 로그인한 유저의 구매한 상품 리스트를 받아와서 출력
	전달 인자 : 없음
	반환값    : 없음
*/
void InquirePurchaseClothingUI::inquirePurchaseClothingProduct()
{
	ClothingProductList* clothingProductList = new ClothingProductList();
	string productName;
	string productCompanyName;
	string sellerID;
	int price, remainQuantity;
	float average;
	int numClothingProduct;
	numClothingProduct = pInquirePurchaseClothing->showPurchaseClothingProduct(&productName, &productCompanyName, &price, &remainQuantity, &sellerID, &average);

	writeFile << "4.3 상품 구매 내역 조회" << endl;
	writeFile << "> " << sellerID << " " << productName << " " << productCompanyName << " " << price << " " << remainQuantity << " " << average << endl;
}