#include "InquirePurchaseClothingUI.h"
#include <iostream>
#include <fstream>
using namespace std;

extern ifstream readFile;
extern ofstream writeFile;

/*
	�Լ� �̸� : InquirePurchaseClothingUI()
	���	  : Boundary class ������
	���� ���� : InquirePurchaseClothing* inquirePurchaseClothing
	��ȯ��    : InquirePurchaseClothingUI Instance
*/
InquirePurchaseClothingUI::InquirePurchaseClothingUI(InquirePurchaseClothing* inquirePurchaseClothing)
{
	pInquirePurchaseClothing = inquirePurchaseClothing;
}

/*
	�Լ� �̸� : inquirePurchaseClothingProduct()
	���	  : ���� ��ǰ UI��, control class�κ��� �α����� ������ ������ ��ǰ ����Ʈ�� �޾ƿͼ� ���
	���� ���� : ����
	��ȯ��    : ����
*/
void InquirePurchaseClothingUI::inquirePurchaseClothingProduct()
{
	ClothingProductList* clothingProductList = new ClothingProductList();
	pInquirePurchaseClothing->showPurchaseClothingProduct(clothingProductList);
	string productName;
	string productCompanyName;
	string sellerID;
	int average, price, remainQuantity;
	writeFile << "4.3 ��ǰ ���� ���� ��ȸ" << endl;
	for (int i = 0; i < clothingProductList->getNumClothingProduct(); i++) {

		clothingProductList->getClothingProductData(i)->getSalesClothingProductDetails(&productName, &productCompanyName, &price, &remainQuantity, &sellerID, &average);
		writeFile << "> " << sellerID << " " << productName << " " << productCompanyName << " " << price << " " << remainQuantity << " " << average << endl;
	}
}