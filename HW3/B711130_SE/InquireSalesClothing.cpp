#include "InquireSalesClothing.h"

/*
	�Լ� �̸� : InquireSalesClothing()
	���	  : Control class �����ڷ�, boundary class�� �����ϰ� inquireSalesClothingProduct �Լ� ����
	���� ���� : ClothingProductList* clothingProductList, UserList* userList
	��ȯ��    : InquireSalesClothing Instance
*/
InquireSalesClothing::InquireSalesClothing(ClothingProductList* clothingProductList, UserList* userList) {
	this->pClothingProductList = clothingProductList;
	this->pUserList = userList;
	pInquireSalesClothingUI = new InquireSalesClothingUI(this);
	pInquireSalesClothingUI->inquireSalesClothingProduct();
}

/*
	�Լ� �̸� : showSalesClothingProduct()
	���	  : UserList�κ��� �α����� ������ ���̵� ��������, �ش� ������ �Ǹ����� ��ǰ ���� ���
	���� ���� : ClothingProductList* clothingProductList
	��ȯ��    : ����
*/
void InquireSalesClothing::showSalesClothingProduct(ClothingProductList* clothingProductList)
{
	string userID = pUserList->checkLoginUser();
	pClothingProductList->listSalesClothingProduct(userID, clothingProductList);
}