#include "ClothingProductList.h"
using namespace std;

/*
	�Լ� �̸� : ClothingProductList()
	���	  : ������
	���� ���� : ����
	��ȯ��    : ClothingProductList Instance
*/
ClothingProductList::ClothingProductList() {
	this->numClothingProducts = 0;
}

/*
	�Լ� �̸� : getNumClothingProduct()
	���	  : ������� numClothingProducts ��ȯ
	���� ���� : ����
	��ȯ��    : int numClothingProducts
*/
int ClothingProductList::getNumClothingProduct() {
	return numClothingProducts;
}

/*
	�Լ� �̸� : getClothingProductData()
	���	  : ClothingProductList�� �����ϴ� i��° ClothingProductData ��ȯ
	���� ���� : int i
	��ȯ��    : ClothingProductData* clothingProductList[i]
*/
ClothingProductData* ClothingProductList::getClothingProductData(int i) {
	return this->clothingProductList[i];
}

/*
	�Լ� �̸� : searchClothingProductData()
	���	  : 
	���� ���� : 
	��ȯ��    :
*/
ClothingProductData* ClothingProductList::searchClothingProductData(string productName) {
	for (int i = 0; i < this->numClothingProducts; i++) {
		clothingProductList[i]->setRecentSearch(0); //���� recentSearch = 0���� �ʱ�ȭ.
	}
	for (int i = 0; i < this->numClothingProducts; i++) {	
		if (this->clothingProductList[i]->getProductName() == productName && this->clothingProductList[i]->getRemainQuantity() != 0) {
			clothingProductList[i]->setRecentSearch(1); //�˻��� ��ǰ�� recentSearch = 1�� �ʱ�ȭ.
			return this->clothingProductList[i];
		}
	}
}

/*
	�Լ� �̸� : addNewClothingProduct()
	���	  : ClothingProductList�� �Ű������� �Ѱܹ��� ClothingProductData�� �߰�
	���� ���� : ClothingProductData* clothingProductData
	��ȯ��    : ����
*/
void ClothingProductList::addNewClothingProduct(ClothingProductData* clothingProductData) {
	clothingProductList[numClothingProducts++] = clothingProductData;
}

/*
	�Լ� �̸� : listSalesClothingProduct()
	���	  : �α����� ������ ���� �Ǹ����� ��ǰ�� ClothingProductList�� �Ѱ���
	���� ���� : string userID, ClothingProductList* clothingProductList
	��ȯ��    : ����
*/
void ClothingProductList::listSalesClothingProduct(string userID, ClothingProductList* clothingProductList) {
	for (int i = 0; i < this->numClothingProducts; i++) {
		if (this->clothingProductList[i]->getSellerID() == userID && this->clothingProductList[i]->getRemainQuantity() != 0) {
			clothingProductList->addNewClothingProduct(this->clothingProductList[i]);
		}
	}
}

/*
	�Լ� �̸� : listSoldOutClothingProduct()
	���	  : �α����� ������ �Ǹ� �Ϸ�� ��ǰ�� ClothingProductList�� �Ѱ���
	���� ���� : string userID, ClothingProductList* clothingProductList
	��ȯ��    : ����
*/
void ClothingProductList::listSoldOutClothingProduct(string userID, ClothingProductList* clothingProductList) {
	for (int i = 0; i < this->numClothingProducts; i++) {
		if (this->clothingProductList[i]->getSellerID() == userID && this->clothingProductList[i]->getRemainQuantity() == 0) {
			clothingProductList->addNewClothingProduct(this->clothingProductList[i]);
		}
	}
}

/*
	�Լ� �̸� : listAllClothingProduct()
	���	  : �α����� ������ �Ǹ��ϴ�/�Ǹŵ� ��� ��ǰ�� ClothingList�� �Ѱ���
	���� ���� : string userID, ClothingProductList* clothingProductList
	��ȯ��    : ����
*/
void ClothingProductList::listAllClothingProduct(string userID, ClothingProductList* clothingProductList) {
	for (int i = 0; i < this->numClothingProducts; i++) {
		if (this->clothingProductList[i]->getSellerID() == userID) {
			clothingProductList->addNewClothingProduct(this->clothingProductList[i]);
		}
	}
}

/*
	�Լ� �̸� : listPurchaseClothingProducts()
	���	  : �α����� ������ ������ ��� ��ǰ�� ClothingList�� �Ѱ���
	���� ���� : string userID, ClothingProductList* clothingProductList
	��ȯ��    : ����
*/
void ClothingProductList::listPurchaseClothingProduct(string userID, ClothingProductList* clothingProductList) {
	
	for (int i = 0; i < this->numClothingProducts; i++) {
		if (this->clothingProductList[i]->getBuyerID() == userID) {
			clothingProductList->addNewClothingProduct(this->clothingProductList[i]);
		}
	}
}