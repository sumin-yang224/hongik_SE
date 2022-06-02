#include <iostream>
#include <string>
#include <fstream>
#include "PurchaseClothingUI.h"
#include "PurchaseClothing.h"
//#include "ClothingProductData.h"
//#include "ClothingProductList.h"

using namespace std;

extern ifstream readFile;
extern ofstream writeFile;

/*
	함수 이름 : PurchaseClothingUI()
	기능	  : Boundary class 생성자
	전달 인자 : PurchaseClothing* purchaseClothing
	반환값    : PurchaseClothingUI Instance
*/
PurchaseClothingUI::PurchaseClothingUI(PurchaseClothing* purchaseClothing)
{
	pPurchaseClothing = purchaseClothing;
}

/*
	함수 이름 : clickPurchaseButton()
	기능	  : 상품구매 UI로, 판매 등록 되어있는 상품 리스트를 받아와서 상품을 구매한 이력이 있는지를 확인한 후에 구매
	전달 인자 : 없음
	반환값    : 없음
*/
void PurchaseClothingUI::clickPurchaseButton()
{
	string productName;
	string sellerID;
	pPurchaseClothing->purchaseClothingProduct(&productName, &sellerID);
	writeFile << "4.2. 상품 구매" << endl;
	writeFile << "> " << sellerID << " " << productName << endl;
}