#include "PrintProductSalesStatistics.h"

/*
	함수 이름 : 
	기능	  : 
	전달 인자 : 없음
	반환값    : 없음
*/
PrintProductSalesStatistics::PrintProductSalesStatistics(ClothingProductList* clothingProductList, UserList* userList){
	this->pClothingProductList = clothingProductList;
	this->pUserList = userList;
	pPrintProductSalesStatisticsUI = new PrintProductSalesStatisticsUI(this);
	pPrintProductSalesStatisticsUI->printSalesStatistics();
}

void PrintProductSalesStatistics::showSalesStatistics(ClothingProductList* clothingProductList)
{
	string userID = pUserList->checkLoginUser();
    pClothingProductList->listAllClothingProduct(userID, clothingProductList);
}