#include "InquireSoldOutClothing.h"

/*
	함수 이름 : InquireSoldOutClothing()
	기능	  : Control class 생성자로, boundary class를 생성하고 inquireSoldOutClothingProduct 함수 실행
	전달 인자 : ClothingProductList* clothingProductList, UserList* userList
	반환값    : InquireSoldOutClothing Instance
*/
InquireSoldOutClothing::InquireSoldOutClothing(ClothingProductList* clothingProductList, UserList* userList){
	this->pClothingProductList = clothingProductList;
	this->pUserList = userList;
	pInquireSoldOutClothingUI = new InquireSoldOutClothingUI(this);
	pInquireSoldOutClothingUI->inquireSoldOutClothingProduct();
}

/*
	함수 이름 : showSoldOutClothingProduct()
	기능	  : UserList로부터 로그인한 유저의 아이디를 가져오고, 해당 유저의 판매완료 상품정보를 저장
	전달 인자 : string* productName, string* productCompanyName, int* price, int* salesQuantity, int* average
	반환값    : 해당 유저의 판매완료된 상품 종류수
*/
int InquireSoldOutClothing::showSoldOutClothingProduct(string* productName, string* productCompanyName, int* price, int* salesQuantity, int* average)
{
	string userID = pUserList->checkLoginUser();
	ClothingProductList* clothingProductList = new ClothingProductList;
    pClothingProductList->listSoldOutClothingProduct(userID, clothingProductList);
	for(int i=0;i<clothingProductList->getNumClothingProduct();i++){
		clothingProductList->getClothingProductData(i)->getSoldOutClothingProductDetails(&productName[i], &productCompanyName[i], &price[i], &salesQuantity[i], &average[i]);
	}
	return clothingProductList->getNumClothingProduct();
}