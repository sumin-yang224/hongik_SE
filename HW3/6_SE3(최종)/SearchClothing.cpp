#include "SearchClothing.h"
#include <iostream>
#include <string>
using namespace std;

/*
	�Լ� �̸� : SearchClothing()
	���	  : Control class �����ڷ�, boundary class�� �����ϰ� searchClothingProduct �Լ� ����
	���� ���� : ClothingProductList* pClothingProductList
	��ȯ��    : SearchClothing Instance
*/
SearchClothing::SearchClothing(ClothingProductList* pClothingProductList)
{
	this->pClothingProductList = pClothingProductList;
	pSearchClothingUI = new SearchClothingUI(this);
	pSearchClothingUI->searchClothingProduct();
}

/*
	�Լ� �̸� : showClothingProductDetails()
	���	  : ��ǰ������ �ޱ� ���� ��ǰ���� �޾� searchClothingProductData �Լ��� ���ڷ� �Ѱ���
	���� ���� : string* productName, string* productCompanyName, int* price, int* remainQuantitiy, string* seller ID, float* average
	��ȯ��    : ����
*/
void SearchClothing::showClothingProductDetails(string* productName, string* productCompanyName, int* price, int* remainQuantity, string* sellerID, float* average)
{
	ClothingProductData* data;
	data = pClothingProductList->searchClothingProductData(*productName);
	data->getSalesClothingProductDetails(productName, productCompanyName, price, remainQuantity, sellerID, average);
}