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
	기능	  : UserList로부터 로그인한 유저의 아이디를 가져오고, 해당 유저의 판매 완료 상품정보 출력
	전달 인자 : ClothingProductList* clothingProductList
	반환값    : 없음
*/
void InquireSoldOutClothing::showSoldOutClothingProduct(ClothingProductList* clothingProductList)
{
	string userID = pUserList->checkLoginUser();
    pClothingProductList->listSoldOutClothingProduct(userID, clothingProductList);
}