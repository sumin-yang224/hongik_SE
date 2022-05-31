#include "InquireSalesClothing.h"

/*
	함수 이름 : 
	기능	  : 
	전달 인자 : 없음
	반환값    : 없음
*/
InquireSalesClothing::InquireSalesClothing(ClothingProductList* clothingProductList, UserList* userList){
	this->pClothingProductList = clothingProductList;
	this->pUserList = userList;
	pInquireSalesClothingUI = new InquireSalesClothingUI(this);
	pInquireSalesClothingUI->inquireSalesClothingProduct();
}


void InquireSalesClothing::showSalesClothingProduct(ClothingProductList* clothingProductList)
{
	string userID = pUserList->checkLoginUser();
    pClothingProductList->listSalesClothingProduct(userID, clothingProductList);
}