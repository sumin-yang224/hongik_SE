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
	float average;
	int price, remainQuantity;

	readFile >> productName;

	pSearchClothing->showClothingProductDetails(&productName, &productCompanyName, &price, &remainQuantity, &sellerID, &average);
	writeFile << "4.1. ��ǰ ���� �˻� " << endl;
	writeFile << "> " << sellerID << " " << productName << " " << productCompanyName << " " << price << " " << remainQuantity << " " << average << endl;
}