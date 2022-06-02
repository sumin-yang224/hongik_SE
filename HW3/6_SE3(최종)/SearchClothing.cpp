#include "SearchClothing.h"
#include <iostream>
#include <string>
using namespace std;

/*
	함수 이름 : SearchClothing()
	기능	  : Control class 생성자로, boundary class를 생성하고 searchClothingProduct 함수 실행
	전달 인자 : ClothingProductList* pClothingProductList
	반환값    : SearchClothing Instance
*/
SearchClothing::SearchClothing(ClothingProductList* pClothingProductList)
{
	this->pClothingProductList = pClothingProductList;
	pSearchClothingUI = new SearchClothingUI(this);
	pSearchClothingUI->searchClothingProduct();
}

/*
	함수 이름 : showClothingProductDetails()
	기능	  : 상품정보를 받기 위해 상품명을 받아 searchClothingProductData 함수에 인자로 넘겨줌
	전달 인자 : string* productName, string* productCompanyName, int* price, int* remainQuantitiy, string* seller ID, float* average
	반환값    : 없음
*/
void SearchClothing::showClothingProductDetails(string* productName, string* productCompanyName, int* price, int* remainQuantity, string* sellerID, float* average)
{
	ClothingProductData* data;
	data = pClothingProductList->searchClothingProductData(*productName);
	data->getSalesClothingProductDetails(productName, productCompanyName, price, remainQuantity, sellerID, average);
}