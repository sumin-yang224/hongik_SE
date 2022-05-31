#include "RegisterSalesClothingUI.h"
#include <iostream>
#include <fstream>

using namespace std;

extern ifstream readFile;
extern ofstream writeFile;

/*
	함수 이름 : RegisterSalesClothingUI::printSoldOutStatistics()
	기능	  : 
	전달 인자 : 없음
	반환값    : 없음
*/

RegisterSalesClothingUI::RegisterSalesClothingUI(RegisterSalesClothing* registerSalesClothing)
{
	pRegisterSalesClothing = registerSalesClothing;
}

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
	writeFile << "3.1 판매 의류 등록" << endl;
	writeFile << "> " << productName << " " << productCompanyName << " " << price << " " << quantity << endl;  
}