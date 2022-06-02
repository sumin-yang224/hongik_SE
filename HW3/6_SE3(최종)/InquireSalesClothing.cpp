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
	���	  : UserList�κ��� �α����� ������ ���̵� ��������, �ش� ������ �Ǹ����� ��ǰ ������ ����
	���� ���� : string* productName, string* productCompanyName, int* price, int* remainQuantity
	��ȯ��    : �ش� ������ �Ǹ����� ��ǰ ������
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