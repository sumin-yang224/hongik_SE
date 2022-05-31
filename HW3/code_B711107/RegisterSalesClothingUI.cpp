#include "RegisterSalesClothingUI.h"
#include <iostream>
#include <fstream>
using namespace std;

extern ifstream readFile;
extern ofstream writeFile;

/*
	함수 이름 : RegisterSalesClothingUI()
	기능	  : Boundary class 생성자
	전달 인자 : RegisterSalesClothing* registerSalesClothing
	반환값    : RegisterSalesClothingUI Instance
*/
RegisterSalesClothingUI::RegisterSalesClothingUI(RegisterSalesClothing* registerSalesClothing)
{
	pRegisterSalesClothing = registerSalesClothing;
}

/*
	함수 이름 : registerNewClothingProduct()
	기능	  : 판매상품 등록 UI로, 사용자로부터 입력을 받아 clothingProductList에 상품 등록후 등록완료 메세지 출력
	전달 인자 : 없음
	반환값    : 없음
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
	writeFile << "3.1 판매 의류 등록" << endl;
	writeFile << "> " << productName << " " << productCompanyName << " " << price << " " << quantity << endl;  
}