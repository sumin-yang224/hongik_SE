#include "InquireSoldOutClothingUI.h"
#include <iostream>
#include <fstream>
using namespace std;

extern ifstream readFile;
extern ofstream writeFile;

/*
	�Լ� �̸� : InquireSoldOutClothingUI()
	���	  : Boundary class ������
	���� ���� : InquireSoldOutClothing* inquireSoldOutClothing
	��ȯ��    : InquireSoldOutClothingUI Instance
*/
InquireSoldOutClothingUI::InquireSoldOutClothingUI(InquireSoldOutClothing* inquireSoldOutClothing)
{
	pInquireSoldOutClothing = inquireSoldOutClothing;
}

/*
	�Լ� �̸� : inquireSoldOutClothingProduct()
	���	  : �Ǹ� �Ϸ� ��ǰ UI��, control class�κ��� �α����� ������ �ǸſϷ��ǰ ����Ʈ�� �޾ƿͼ� ���
	���� ���� : ����
	��ȯ��    : ����
*/
void InquireSoldOutClothingUI::inquireSoldOutClothingProduct()
{
	ClothingProductList* clothingProductList = new ClothingProductList;
	pInquireSoldOutClothing->showSoldOutClothingProduct(clothingProductList);

	writeFile << "3.3 �Ǹ� �Ϸ� ��ǰ ��ȸ" << endl;
	for (int i = 0; i < clothingProductList->getNumClothingProduct(); i++) {
		string productName;
		string productCompanyName;
		int price;
		int salesQuantity;
		int average;
		clothingProductList->getClothingProductData(i)->getSoldOutClothingProductDetails(&productName, &productCompanyName, &price, &salesQuantity, &average);
		writeFile << "> " << productName << " " << productCompanyName << " " << price << " " << salesQuantity << " " << average << endl;
	}
}