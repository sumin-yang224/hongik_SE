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
int InquirePurchaseClothing::showPurchaseClothingProduct(string* productName, string* productCompanyName, int* price, int* remainQuantity, string* sellerID, float* average)
{
	string userID = pUserList->checkLoginUser();
	ClothingProductList* clothingProductList = new ClothingProductList();
	pClothingProductList->listPurchaseClothingProduct(userID, clothingProductList);
	for (int i = 0; i < clothingProductList->getNumClothingProduct(); i++) {
		clothingProductList->getClothingProductData(i)->getSalesClothingProductDetails(&productName[i], &productCompanyName[i], &price[i], &remainQuantity[i], &sellerID[i], &average[i]);
	}
	return pClothingProductList->getNumClothingProduct();
}