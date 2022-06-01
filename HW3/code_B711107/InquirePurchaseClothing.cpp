#include "InquirePurchaseClothing.h"

/*
	함수 이름 : InquirePurchaseClothing()
	기능	  : Control class 생성자로, boundary class를 생성하고 inquirePurchaseClothingProduct 함수 실행
	전달 인자 : ClothingProductList* clothingProductList, UserList* userList
	반환값    : InquirePurchaseClothing Instance
*/
InquirePurchaseClothing::InquirePurchaseClothing(ClothingProductList* clothingProductList, UserList* userList) {
	this->pClothingProductList = clothingProductList;
	this->pUserList = userList;
	pInquirePurchaseClothingUI = new InquirePurchaseClothingUI(this);
	pInquirePurchaseClothingUI->inquirePurchaseClothingProduct();
}

/*
	함수 이름 : showPurchaseClothingProduct()
	기능	  : UserList로부터 로그인한 유저의 아이디를 가져오고, 해당 유저가 구매한 상품 정보 출력
	전달 인자 : ClothingProductList* clothingProductList
	반환값    : 없음
*/
void InquirePurchaseClothing::showPurchaseClothingProduct(ClothingProductList* clothingProductList)
{
	string userID = pUserList->checkLoginUser();
	pClothingProductList->listPurchaseClothingProduct(userID, clothingProductList);
}