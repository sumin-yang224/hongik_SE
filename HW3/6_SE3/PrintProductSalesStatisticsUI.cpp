#include "PrintProductSalesStatisticsUI.h"
#include <iostream>
#include <fstream>
using namespace std;

extern ifstream readFile;
extern ofstream writeFile;

/*
	�Լ� �̸� : PrintProductSalesStatisticsUI
	���	  : Boundary class ������
	���� ���� : PrintProductSalesStatistics* printProductSalesStatistics
	��ȯ��    : PrintProductSalesStatisticsUI Instance
*/
PrintProductSalesStatisticsUI::PrintProductSalesStatisticsUI(PrintProductSalesStatistics* printProductSalesStatistics)
{
	pPrintProductSalesStatistics = printProductSalesStatistics;
}

/*
	�Լ� �̸� : printSalesStatistics()
	���	  : �Ǹ� ��ǰ ��� UI��, control class�κ��� �α����� ������ ��ǰ ����Ʈ�� �޾ƿͼ� �Ǹ� ��ǰ ��� ���
	���� ���� : ����
	��ȯ��    : ����
*/
void PrintProductSalesStatisticsUI::printSalesStatistics()
{
	ClothingProductList* clothingProductList = new ClothingProductList;
	pPrintProductSalesStatistics->showSalesStatistics(clothingProductList);

	writeFile << "5.1 �Ǹ� ��ǰ ���" << endl;
	for (int i = 0; i < clothingProductList->getNumClothingProduct(); i++) {
		string productName;
		int totalSales;
		float average;
		clothingProductList->getClothingProductData(i)->getClothingProductStatistics(&productName, &totalSales, &average);
		writeFile << "> " << productName << " " << totalSales << " " << average << endl;
	}
}