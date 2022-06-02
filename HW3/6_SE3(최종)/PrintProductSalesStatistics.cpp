#include "PrintProductSalesStatistics.h"

/*
	�Լ� �̸� : PrintProductSalesStatistics()
	���	  : Control class �����ڷ�, boundary class�� �����ϰ� printSalesStatistics �Լ� ����
	���� ���� : ClothingProductList* clothingProductList, UserList* userList
	��ȯ��    : PrintProductSalesStatistics Instance
*/
PrintProductSalesStatistics::PrintProductSalesStatistics(ClothingProductList* clothingProductList, UserList* userList) {
	this->pClothingProductList = clothingProductList;
	this->pUserList = userList;
	pPrintProductSalesStatisticsUI = new PrintProductSalesStatisticsUI(this);
	pPrintProductSalesStatisticsUI->printSalesStatistics();
}

/*
	�Լ� �̸� : showSalesStatistics()
	���	  : UserList�κ��� �α����� ������ ���̵� ��������, �ش� ������ ��ǰ �Ǹ� ��� ���
	���� ���� : ClothingProductList* clothingProductList
	��ȯ��    : ����
*/
void PrintProductSalesStatistics::showSalesStatistics(ClothingProductList* clothingProductList)
{
	string userID = pUserList->checkLoginUser();
	pClothingProductList->listAllClothingProduct(userID, clothingProductList);
}