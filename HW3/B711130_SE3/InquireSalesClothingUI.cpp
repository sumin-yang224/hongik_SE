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
	���	  : �Ǹŵ�� ��ǰ UI��, control class�κ��� �α����� ������ �Ǹŵ�ϻ�ǰ ����Ʈ�� �޾ƿͼ� ���
	���� ���� : ����
	��ȯ��    : ����
*/
void InquireSalesClothingUI::inquireSalesClothingProduct()
{
	ClothingProductList* clothingProductList = new ClothingProductList();
	pInquireSalesClothing->showSalesClothingProduct(clothingProductList);
	string productName;
	string productCompanyName;
	string sellerID; 
	int average, price, remainQuantity;
	writeFile << "3.2 ��� ��ǰ ��ȸ" << endl;
	for (int i = 0; i < clothingProductList->getNumClothingProduct(); i++) {
		
		clothingProductList->getClothingProductData(i)->getSalesClothingProductDetails(&productName, &productCompanyName, &price, &remainQuantity, &sellerID, &average);
		writeFile << "> " << productName << " " << productCompanyName << " " << price << " " << remainQuantity << endl;
	}
}