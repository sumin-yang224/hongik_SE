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
	string productName;
	string productCompanyName;
	string sellerID;
	int price, remainQuantity;
	float average;
	int numClothingProduct;
	numClothingProduct = pInquirePurchaseClothing->showPurchaseClothingProduct(&productName, &productCompanyName, &price, &remainQuantity, &sellerID, &average);

	writeFile << "4.3 ��ǰ ���� ���� ��ȸ" << endl;
	writeFile << "> " << sellerID << " " << productName << " " << productCompanyName << " " << price << " " << remainQuantity << " " << average << endl;
}