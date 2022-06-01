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
	���� ���� : string productName 
	��ȯ��    : ClothingProductData*
*/
ClothingProductData* SearchClothing::showClothingProductDetails(string productName)
{
	return pClothingProductList->searchClothingProductData(productName);
}