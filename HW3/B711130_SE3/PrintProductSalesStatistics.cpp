#include "PrintProductSalesStatistics.h"

/*
	함수 이름 : PrintProductSalesStatistics()
	기능	  : Control class 생성자로, boundary class를 생성하고 printSalesStatistics 함수 실행
	전달 인자 : ClothingProductList* clothingProductList, UserList* userList
	반환값    : PrintProductSalesStatistics Instance
*/
PrintProductSalesStatistics::PrintProductSalesStatistics(ClothingProductList* clothingProductList, UserList* userList) {
	this->pClothingProductList = clothingProductList;
	this->pUserList = userList;
	pPrintProductSalesStatisticsUI = new PrintProductSalesStatisticsUI(this);
	pPrintProductSalesStatisticsUI->printSalesStatistics();
}

/*
	함수 이름 : showSalesStatistics()
	기능	  : UserList로부터 로그인한 유저의 아이디를 가져오고, 해당 유저의 상품 판매 통계 출력
	전달 인자 : ClothingProductList* clothingProductList
	반환값    : 없음
*/
void PrintProductSalesStatistics::showSalesStatistics(ClothingProductList* clothingProductList)
{
	string userID = pUserList->checkLoginUser();
	pClothingProductList->listAllClothingProduct(userID, clothingProductList);
}