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

SearchClothingUI::SearchClothingUI(SearchClothing* SearchClothing)
{
	pSearchClothing = SearchClothing;
}

void SearchClothingUI::searchClothingProduct()
{
	string productName;
	string productCompanyName;
	string sellerID;
	int average, price, remainQuantity;

	readFile >> productName;

	ClothingProductData* data;
	data = pSearchClothing->showClothingProductDetails(productName);
	writeFile << "4.1. 상품 정보 검색" << endl;
	data->getSalesClothingProductDetails(&productName, &productCompanyName, &price, &remainQuantity, &sellerID, &average);
	writeFile << "> " << sellerID << " " << productName << " " << productCompanyName << " " << price << " " << remainQuantity << " " << average << endl;
}