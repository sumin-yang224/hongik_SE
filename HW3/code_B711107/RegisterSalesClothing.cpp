#include "RegisterSalesClothing.h"

/*
	함수 이름 : 
	기능	  : 
	전달 인자 : 없음
	반환값    : 없음
*/
RegisterSalesClothing::RegisterSalesClothing(ClothingProductList* clothingProductList, UserList* userList){
	this->pClothingProductList = clothingProductList;
    this->pUserList = userList;
	pRegisterSalesClothingUI = new RegisterSalesClothingUI(this);
	pRegisterSalesClothingUI->registerNewClothingProduct();
}

/*
	함수 이름 : 
	기능	  : 
	전달 인자 : 없음
	반환값    : 없음
*/
void RegisterSalesClothing::addNewClothingProduct(string productName, string productCompanyName, int price, int quantity){
    string sellerID = this->pUserList->checkLoginUser();
    pClothingProductData = new ClothingProductData(productName, productCompanyName, price, quantity, sellerID);
	this->pClothingProductList->addNewClothingProduct(pClothingProductData);
}