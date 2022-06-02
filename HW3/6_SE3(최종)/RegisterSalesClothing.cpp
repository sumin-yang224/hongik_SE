#include "RegisterSalesClothing.h"

/*
	�Լ� �̸� : RegisterSalesClothing()
	���	  : Control class �����ڷ�, boundary class�� �����ϰ� registerNewClothingProduct �Լ� ����
	���� ���� : ClothingProductList* clothingProductList, UserList* userList
	��ȯ��    : RegisterSalesClothing Instance
*/
RegisterSalesClothing::RegisterSalesClothing(ClothingProductList* clothingProductList, UserList* userList) {
	this->pClothingProductList = clothingProductList;
	this->pUserList = userList;
	pRegisterSalesClothingUI = new RegisterSalesClothingUI(this);
	pRegisterSalesClothingUI->registerNewClothingProduct();
}

/*
	�Լ� �̸� : addNewClothingProduct()
	���	  : userList�κ��� �α����� ���� ������ ��������, �Ű������� ����ID�� ������ ��ǰ ������ ����� ����Ʈ�� �߰�
	���� ���� : string productName, string productCompanyName, int price, int quantity
	��ȯ��    : ����
*/
void RegisterSalesClothing::addNewClothingProduct(string productName, string productCompanyName, int price, int quantity) {
	string sellerID = this->pUserList->checkLoginUser();
	pClothingProductData = new ClothingProductData(productName, productCompanyName, price, quantity, sellerID);
	this->pClothingProductList->addNewClothingProduct(pClothingProductData);
}