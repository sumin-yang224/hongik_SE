#include "InquireSalesClothingUI.h"
#include <iostream>
#include <fstream>
using namespace std;

extern ifstream readFile;
extern ofstream writeFile;

/*
	�Լ� �̸� : InquireSalesClothingUI()
	���	  : Boundary class ������
	���� ���� : InquireSalesClothing* inquireSalesClothing
	��ȯ��    : InquireSalesClothingUI Instance
*/
InquireSalesClothingUI::InquireSalesClothingUI(InquireSalesClothing* inquireSalesClothing)
{
	pInquireSalesClothing = inquireSalesClothing;
}

/*
	�Լ� �̸� : inquireSalesClothingProduct()
	���	  : �Ǹŵ�� ��ǰ UI��, control class�κ��� �α����� ������ �Ǹŵ�ϻ�ǰ ������ �޾ƿͼ� ���
	���� ���� : ����
	��ȯ��    : ����
*/
void InquireSalesClothingUI::inquireSalesClothingProduct()
{
	string productName[MAX_CLOTHING_PRODUCT_NUM];
	string productCompanyName[MAX_CLOTHING_PRODUCT_NUM];
	int price[MAX_CLOTHING_PRODUCT_NUM];
	int remainQuantity[MAX_CLOTHING_PRODUCT_NUM];
	int numClothingProduct;
	numClothingProduct = pInquireSalesClothing->showSalesClothingProduct(productName, productCompanyName, price, remainQuantity);

	writeFile << "3.2 ��� ��ǰ ��ȸ" << endl;
	for (int i = 0; i < numClothingProduct; i++) {
		writeFile << "> " << productName[i] << " " << productCompanyName[i] << " " << price[i] << " " << remainQuantity[i] << endl;
	}

}