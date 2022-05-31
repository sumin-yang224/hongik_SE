#include "InquireSoldOutClothing.h"

/*
	함수 이름 : 
	기능	  : 
	전달 인자 : 없음
	반환값    : 없음
*/
InquireSoldOutClothing::InquireSoldOutClothing(ClothingProductList* clothingProductList, UserList* userList){
	this->pClothingProductList = clothingProductList;
	this->pUserList = userList;
	pInquireSoldOutClothingUI = new InquireSoldOutClothingUI(this);
	pInquireSoldOutClothingUI->inquireSoldOutClothingProduct();
}


void InquireSoldOutClothing::showSoldOutClothingProduct(ClothingProductList* clothingProductList)
{
	string userID = pUserList->checkLoginUser();
    pClothingProductList->listSoldOutClothingProduct(userID, clothingProductList);
}