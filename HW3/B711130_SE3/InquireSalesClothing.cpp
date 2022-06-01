#include "InquireSalesClothing.h"

/*
	함수 이름 : InquireSalesClothing()
	기능	  : Control class 생성자로, boundary class를 생성하고 inquireSalesClothingProduct 함수 실행
	전달 인자 : ClothingProductList* clothingProductList, UserList* userList
	반환값    : InquireSalesClothing Instance
*/
InquireSalesClothing::InquireSalesClothing(ClothingProductList* clothingProductList, UserList* userList) {
	this->pClothingProductList = clothingProductList;
	this->pUserList = userList;
	pInquireSalesClothingUI = new InquireSalesClothingUI(this);
	pInquireSalesClothingUI->inquireSalesClothingProduct();
}

/*
	함수 이름 : showSalesClothingProduct()
	기능	  : UserList로부터 로그인한 유저의 아이디를 가져오고, 해당 유저의 판매중인 상품 정보 출력
	전달 인자 : ClothingProductList* clothingProductList
	반환값    : 없음
*/
void InquireSalesClothing::showSalesClothingProduct(ClothingProductList* clothingProductList)
{
	string userID = pUserList->checkLoginUser();
	pClothingProductList->listSalesClothingProduct(userID, clothingProductList);
}