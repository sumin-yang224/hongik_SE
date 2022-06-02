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
	기능	  : UserList로부터 로그인한 유저의 아이디를 가져오고, 해당 유저의 판매중인 상품 정보를 저장
	전달 인자 : string* productName, string* productCompanyName, int* price, int* remainQuantity
	반환값    : 해당 유저의 판매중인 상품 종류수
*/
int InquireSalesClothing::showSalesClothingProduct(string* productName, string* productCompanyName, int* price, int* remainQuantity)
{
	string userID = pUserList->checkLoginUser();
	ClothingProductList* clothingProductList = new ClothingProductList();
	pClothingProductList->listSalesClothingProduct(userID, clothingProductList);
	for (int i = 0; i < clothingProductList->getNumClothingProduct(); i++) {
		clothingProductList->getClothingProductData(i)->getSalesClothingProductDetails(&productName[i], &productCompanyName[i], &price[i], &remainQuantity[i]);
	}
	return clothingProductList->getNumClothingProduct();
}