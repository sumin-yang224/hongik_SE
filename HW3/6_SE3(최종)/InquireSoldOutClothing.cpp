#include "InquireSoldOutClothing.h"

/*
	�Լ� �̸� : InquireSoldOutClothing()
	���	  : Control class �����ڷ�, boundary class�� �����ϰ� inquireSoldOutClothingProduct �Լ� ����
	���� ���� : ClothingProductList* clothingProductList, UserList* userList
	��ȯ��    : InquireSoldOutClothing Instance
*/
InquireSoldOutClothing::InquireSoldOutClothing(ClothingProductList* clothingProductList, UserList* userList) {
	this->pClothingProductList = clothingProductList;
	this->pUserList = userList;
	pInquireSoldOutClothingUI = new InquireSoldOutClothingUI(this);
	pInquireSoldOutClothingUI->inquireSoldOutClothingProduct();
}

/*
	�Լ� �̸� : showSoldOutClothingProduct()
	���	  : UserList�κ��� �α����� ������ ���̵� ��������, �ش� ������ �ǸſϷ� ��ǰ������ ����
	���� ���� : string* productName, string* productCompanyName, int* price, int* salesQuantity, float* average
	��ȯ��    : �ش� ������ �ǸſϷ�� ��ǰ ������
*/
int InquireSoldOutClothing::showSoldOutClothingProduct(string* productName, string* productCompanyName, int* price, int* salesQuantity, float* average)
{
	string userID = pUserList->checkLoginUser();
	ClothingProductList* clothingProductList = new ClothingProductList;
	pClothingProductList->listSoldOutClothingProduct(userID, clothingProductList);
	for (int i = 0; i < clothingProductList->getNumClothingProduct(); i++) {
		clothingProductList->getClothingProductData(i)->getSoldOutClothingProductDetails(&productName[i], &productCompanyName[i], &price[i], &salesQuantity[i], &average[i]);
	}
	return clothingProductList->getNumClothingProduct();
}