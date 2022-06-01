#include <iostream>
#include <string>
#include <fstream>
#include "SearchClothingUI.h"
#include "SearchClothing.h"
#include "ClothingProductData.h"
#include "ClothingProductList.h"

using namespace std;

#define MAX_STRING 32
extern ifstream readFile;
extern ofstream writeFile;

/*
	함수 이름 : SearchClothingUI()
	기능	  : Boundary class 생성자
	전달 인자 : SearchClothing* SearchClothing
	반환값    : SearchClothingUI Instance
*/
SearchClothingUI::SearchClothingUI(SearchClothing* SearchClothing)
{
	pSearchClothing = SearchClothing;
}

/*
	함수 이름 : searchClothingProduct()
	기능	  : 상품 검색 UI로, 판매등록되어있는 상품 리스트에서 상품명을 검색
	전달 인자 : 없음
	반환값    : 없음
*/
void SearchClothingUI::searchClothingProduct()
{
	string productName;
	string productCompanyName;
	string sellerID;
	int price, remainQuantity;
	float average;
	readFile >> productName;

	ClothingProductData* data;
	data = pSearchClothing->showClothingProductDetails(productName);
	writeFile << "4.1. 상품 정보 검색" << endl;
	data->getSalesClothingProductDetails(&productName, &productCompanyName, &price, &remainQuantity, &sellerID, &average);
	writeFile << "> " << sellerID << " " << productName << " " << productCompanyName << " " << price << " " << remainQuantity << " " << average << endl;
}