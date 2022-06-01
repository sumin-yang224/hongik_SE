#include <iostream>
#include <string>
#include <fstream>
#include "SearchClothingUI.h"
#include "SearchClothing.h"
#include "ClothingProductData.h"
#include "ClothingProductList.h"

using namespace std;

#define MAX_STRING 32
extern ifstream readFile;
extern ofstream writeFile;

/*
	�Լ� �̸� : SearchClothingUI()
	���	  : Boundary class ������
	���� ���� : SearchClothing* SearchClothing
	��ȯ��    : SearchClothingUI Instance
*/
SearchClothingUI::SearchClothingUI(SearchClothing* SearchClothing)
{
	pSearchClothing = SearchClothing;
}

/*
	�Լ� �̸� : searchClothingProduct()
	���	  : ��ǰ �˻� UI��, �Ǹŵ�ϵǾ��ִ� ��ǰ ����Ʈ���� ��ǰ���� �˻�
	���� ���� : ����
	��ȯ��    : ����
*/
void SearchClothingUI::searchClothingProduct()
{
	string productName;
	string productCompanyName;
	string sellerID;
	int price, remainQuantity;
	float average;
	readFile >> productName;

	ClothingProductData* data;
	data = pSearchClothing->showClothingProductDetails(productName);
	writeFile << "4.1. ��ǰ ���� �˻�" << endl;
	data->getSalesClothingProductDetails(&productName, &productCompanyName, &price, &remainQuantity, &sellerID, &average);
	writeFile << "> " << sellerID << " " << productName << " " << productCompanyName << " " << price << " " << remainQuantity << " " << average << endl;
}