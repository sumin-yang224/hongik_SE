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
	���	  : UserList�κ��� �α����� ������ ���̵� ��������, �ش� ������ �Ǹ� �Ϸ� ��ǰ���� ���
	���� ���� : ClothingProductList* clothingProductList
	��ȯ��    : ����
*/
void InquireSoldOutClothing::showSoldOutClothingProduct(ClothingProductList* clothingProductList)
{
	string userID = pUserList->checkLoginUser();
	pClothingProductList->listSoldOutClothingProduct(userID, clothingProductList);
}