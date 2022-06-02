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

/*
	�Լ� �̸� : PurchaseClothingUI()
	���	  : Boundary class ������
	���� ���� : PurchaseClothing* purchaseClothing
	��ȯ��    : PurchaseClothingUI Instance
*/
PurchaseClothingUI::PurchaseClothingUI(PurchaseClothing* purchaseClothing)
{
	pPurchaseClothing = purchaseClothing;
}

/*
	�Լ� �̸� : clickPurchaseButton()
	���	  : ��ǰ���� UI��, �Ǹ� ��� �Ǿ��ִ� ��ǰ ����Ʈ�� �޾ƿͼ� ��ǰ�� ������ �̷��� �ִ����� Ȯ���� �Ŀ� ����
	���� ���� : ����
	��ȯ��    : ����
*/
void PurchaseClothingUI::clickPurchaseButton()
{
	string productName;
	string sellerID;
	pPurchaseClothing->purchaseClothingProduct(&productName, &sellerID);
	writeFile << "4.2. ��ǰ ����" << endl;
	writeFile << "> " << sellerID << " " << productName << endl;
}