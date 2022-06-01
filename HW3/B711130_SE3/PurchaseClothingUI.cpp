#include <iostream>
#include <string>
#include <fstream>
#include "PurchaseClothingUI.h"
#include "PurchaseClothing.h"

using namespace std;

extern ifstream readFile;
extern ofstream writeFile;

PurchaseClothingUI::PurchaseClothingUI(PurchaseClothing* purchaseClothing, UserList* userList)
{
	pPurchaseClothing = purchaseClothing;
	pUserList = userList;
}

void PurchaseClothingUI::clickPurchaseButton()
{	
	string productName;
	string productCompanyName;
	string sellerID;
	int average, price, remainQuantity;
	string userID = this->pUserList->checkLoginUser();
	ClothingProductData* data;

	data = pPurchaseClothing->purchaseClothingProduct();
	for (int i = 0; i < data->getSalesQuantity(); i++) {
		if (data->getBuyerID(i) == userID) {
			cout << "이미 구매한 상품입니다." << endl;
			return;
		}
	}
	
	writeFile << "4.2. 상품 구매" << endl;
	data->getSalesClothingProductDetails(&productName, &productCompanyName, &price, &remainQuantity, &sellerID, &average);
	data->upsalesQuantity();
	data->downremainQuantity();
	data->setBuyerID(userID);
	writeFile << "> " << sellerID << " " << productName << endl;
}
