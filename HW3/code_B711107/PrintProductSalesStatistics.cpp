#include "PrintProductSalesStatistics.h"

/*
	함수 이름 : PrintProductSalesStatistics()
	기능	  : Control class 생성자로, boundary class를 생성하고 printSalesStatistics 함수 실행
	전달 인자 : ClothingProductList* clothingProductList, UserList* userList
	반환값    : PrintProductSalesStatistics Instance
*/
PrintProductSalesStatistics::PrintProductSalesStatistics(ClothingProductList* clothingProductList, UserList* userList){
	this->pClothingProductList = clothingProductList;
	this->pUserList = userList;
	pPrintProductSalesStatisticsUI = new PrintProductSalesStatisticsUI(this);
	pPrintProductSalesStatisticsUI->printSalesStatistics();
}

/*
	함수 이름 : showSalesStatistics()
	기능	  : UserList로부터 로그인한 유저의 아이디를 가져오고, 해당 유저의 상품 판매 통계를 저장
	전달 인자 : string* productName, int* totalSales, int* average
	반환값    : 해당 유저가 판매하고있는/판매완료한 모든 상품 종류수
*/
int PrintProductSalesStatistics::showSalesStatistics(string* productName, int* totalSales, float* average)
{
	string userID = pUserList->checkLoginUser();
	ClothingProductList* clothingProductList = new ClothingProductList;
    pClothingProductList->listAllClothingProduct(userID, clothingProductList);
	for(int i=0;i<clothingProductList->getNumClothingProduct();i++){
		clothingProductList->getClothingProductData(i)->getClothingProductStatistics(&productName[i], &totalSales[i], &average[i]);	
	}
	return clothingProductList->getNumClothingProduct();
}