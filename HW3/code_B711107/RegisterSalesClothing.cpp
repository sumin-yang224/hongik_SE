#include "RegisterSalesClothing.h"

/*
	함수 이름 : RegisterSalesClothing()
	기능	  : Control class 생성자로, boundary class를 생성하고 registerNewClothingProduct 함수 실행
	전달 인자 : ClothingProductList* clothingProductList, UserList* userList
	반환값    : RegisterSalesClothing Instance
*/
RegisterSalesClothing::RegisterSalesClothing(ClothingProductList* clothingProductList, UserList* userList){
	this->pClothingProductList = clothingProductList;
    this->pUserList = userList;
	pRegisterSalesClothingUI = new RegisterSalesClothingUI(this);
	pRegisterSalesClothingUI->registerNewClothingProduct();
}

/*
	함수 이름 : addNewClothingProduct()
	기능	  : userList로부터 로그인한 유저 정보를 가져오고, 매개변수와 유저ID를 포함한 상품 정보를 만들어 리스트에 추가
	전달 인자 : string productName, string productCompanyName, int price, int quantity
	반환값    : 없음
*/
void RegisterSalesClothing::addNewClothingProduct(string productName, string productCompanyName, int price, int quantity){
    string sellerID = this->pUserList->checkLoginUser();
    pClothingProductData = new ClothingProductData(productName, productCompanyName, price, quantity, sellerID);
	this->pClothingProductList->addNewClothingProduct(pClothingProductData);
}