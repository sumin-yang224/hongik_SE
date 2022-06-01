#include <iostream>
#include <string>
#include <fstream>
#include "PurchaseClothingUI.h"
#include "PurchaseClothing.h"
//#include "ClothingProductData.h"
//#include "ClothingProductList.h"

using namespace std;

extern ifstream readFile;
extern ofstream writeFile;

PurchaseClothingUI::PurchaseClothingUI(PurchaseClothing *purchaseClothing, UserList *userList)
{
	pPurchaseClothing = purchaseClothing;
	pUserList = userList;
}

void PurchaseClothingUI::clickPurchaseButton()
{
	string productName;
	string sellerID;
	pPurchaseClothing->purchaseClothingProduct(&productName, &sellerID);
	writeFile << "4.2. 상품 구매" << endl;
	writeFile << "> " << sellerID << " " << productName << endl;
}