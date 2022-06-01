#include "InquirePurchaseClothing.h"

/*
	�Լ� �̸� : InquirePurchaseClothing()
	���	  : Control class �����ڷ�, boundary class�� �����ϰ� inquirePurchaseClothingProduct �Լ� ����
	���� ���� : ClothingProductList* clothingProductList, UserList* userList
	��ȯ��    : InquirePurchaseClothing Instance
*/
InquirePurchaseClothing::InquirePurchaseClothing(ClothingProductList* clothingProductList, UserList* userList) {
	this->pClothingProductList = clothingProductList;
	this->pUserList = userList;
	pInquirePurchaseClothingUI = new InquirePurchaseClothingUI(this);
	pInquirePurchaseClothingUI->inquirePurchaseClothingProduct();
}

/*
	�Լ� �̸� : showPurchaseClothingProduct()
	���	  : UserList�κ��� �α����� ������ ���̵� ��������, �ش� ������ ������ ��ǰ ���� ���
	���� ���� : ClothingProductList* clothingProductList
	��ȯ��    : ����
*/
void InquirePurchaseClothing::showPurchaseClothingProduct(ClothingProductList* clothingProductList)
{
	string userID = pUserList->checkLoginUser();
	pClothingProductList->listPurchaseClothingProduct(userID, clothingProductList);
}