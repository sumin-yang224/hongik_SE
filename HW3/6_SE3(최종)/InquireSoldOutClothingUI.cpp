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
	기능	  : 판매 완료 상품 UI로, control class로부터 로그인한 유저의 판매완료상품 정보를 받아와서 출력
	전달 인자 : 없음
	반환값    : 없음
*/
void InquireSoldOutClothingUI::inquireSoldOutClothingProduct()
{
	string productName[MAX_CLOTHING_PRODUCT_NUM];
	string productCompanyName[MAX_CLOTHING_PRODUCT_NUM];
	int price[MAX_CLOTHING_PRODUCT_NUM];
	int salesQuantity[MAX_CLOTHING_PRODUCT_NUM];
	float average[MAX_CLOTHING_PRODUCT_NUM];
	int numClothingProduct;
	numClothingProduct = pInquireSoldOutClothing->showSoldOutClothingProduct(productName, productCompanyName, price, salesQuantity, average);

	writeFile << "3.3 판매 완료 상품 조회" << endl;
	for (int i = 0; i < numClothingProduct; i++) {
		writeFile << "> " << productName[i] << " " << productCompanyName[i] << " " << price[i] << " " << salesQuantity[i] << " " << average[i] << endl;
	}
}