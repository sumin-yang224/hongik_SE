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
	���	  : �Ǹ� �Ϸ� ��ǰ UI��, control class�κ��� �α����� ������ �ǸſϷ��ǰ ������ �޾ƿͼ� ���
	���� ���� : ����
	��ȯ��    : ����
*/
void InquireSoldOutClothingUI::inquireSoldOutClothingProduct()
{
	string productName[MAX_CLOTHING_PRODUCT_NUM];
	string productCompanyName[MAX_CLOTHING_PRODUCT_NUM];
	int price[MAX_CLOTHING_PRODUCT_NUM];
	int salesQuantity[MAX_CLOTHING_PRODUCT_NUM];
	float average[MAX_CLOTHING_PRODUCT_NUM];
	int numClothingProduct;
	numClothingProduct = pInquireSoldOutClothing->showSoldOutClothingProduct(productName, productCompanyName, price, salesQuantity, average);

	writeFile << "3.3 �Ǹ� �Ϸ� ��ǰ ��ȸ" << endl;
	for (int i = 0; i < numClothingProduct; i++) {
		writeFile << "> " << productName[i] << " " << productCompanyName[i] << " " << price[i] << " " << salesQuantity[i] << " " << average[i] << endl;
	}
}