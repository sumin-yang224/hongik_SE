#include "RegisterSalesClothingUI.h"
#include <iostream>
#include <fstream>
using namespace std;

extern ifstream readFile;
extern ofstream writeFile;

/*
	�Լ� �̸� : RegisterSalesClothingUI()
	���	  : Boundary class ������
	���� ���� : RegisterSalesClothing* registerSalesClothing
	��ȯ��    : RegisterSalesClothingUI Instance
*/
RegisterSalesClothingUI::RegisterSalesClothingUI(RegisterSalesClothing* registerSalesClothing)
{
	pRegisterSalesClothing = registerSalesClothing;
}

/*
	�Լ� �̸� : registerNewClothingProduct()
	���	  : �ǸŻ�ǰ ��� UI��, ����ڷκ��� �Է��� �޾� clothingProductList�� ��ǰ ����� ��ϿϷ� �޼��� ���
	���� ���� : ����
	��ȯ��    : ����
*/
void RegisterSalesClothingUI::registerNewClothingProduct()
{
	string productName;
	string productCompanyName;
	int price;
	int quantity;

	readFile >> productName;
	readFile >> productCompanyName;
	readFile >> price;
	readFile >> quantity;

	pRegisterSalesClothing->addNewClothingProduct(productName, productCompanyName, price, quantity);
	writeFile << "3.1 �Ǹ� �Ƿ� ���" << endl;
	writeFile << "> " << productName << " " << productCompanyName << " " << price << " " << quantity << endl;
}