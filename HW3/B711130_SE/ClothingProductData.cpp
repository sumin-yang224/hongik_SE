#include "ClothingProductData.h"

/*
	�Լ� �̸� : ClothingProductData()
	���	  : ������
	���� ���� : string productName, string productCompanyName, int price, int quantity, string sellerID
	��ȯ��    : ClothingProductData Instance
*/
ClothingProductData::ClothingProductData(string productName, string productCompanyName, int price, int quantity, string sellerID) {
	this->productName = productName;
	this->productCompanyName = productCompanyName;
	this->price = price;
	this->remainQuantity = quantity;
	this->salesQuantity = 0;
	this->average = 0;
	this->satisfaction = 0;
	this->sellerID = sellerID;
	this->buyerID = "";
	this->recentSearch = 0;
}



/*
	�Լ� �̸� : getProductName()
	���	  : ������� productName ��ȯ
	���� ���� : ����
	��ȯ��    : string productName
*/
string ClothingProductData::getProductName() {
	return this->productName;
}

/*
	�Լ� �̸� : setRecentSearch()
	���	  : ������� secentSearch �ʱ�ȭ
	���� ���� : ����
	��ȯ��    : ����
*/
void ClothingProductData::setRecentSearch(int n) {
	if (n == 0) {
		this->recentSearch = 0;
	}
	else {
		this->recentSearch = 1;
	}
	
}

/*
	�Լ� �̸� : downremainQuantity()
	��� : ��ǰ���� ��, ������� remainQuantity 1����
	���� ���� : ����
	��ȯ�� : ����
*/
void ClothingProductData::downremainQuantity() {
	this->remainQuantity--;
}

/*
	�Լ� �̸� : upsalesQuantity()
	��� : ��ǰ���� ��, ������� salesQuantity 1����
	���� ���� : ����
	��ȯ�� : ����
*/
void ClothingProductData::upsalesQuantity() {
	this->salesQuantity++;
}

/*
	�Լ� �̸� : getRecentSearch()
	���	  : ������� recentSearch ��ȯ
	���� ���� : ����
	��ȯ��    : int recentSearch
*/
int ClothingProductData::getRecentSearch() {
	return this->recentSearch;
}

/*
	�Լ� �̸� : getSellerID()
	���	  : ������� sellerID ��ȯ
	���� ���� : ����
	��ȯ��    : string sellerID
*/
string ClothingProductData::getSellerID() {
	return this->sellerID;
}

/*
	�Լ� �̸� : setBuyerID()
	���	  : ������� BuyerID �ʱ�ȭ
	���� ���� : ����
	��ȯ��    : ����
*/
void ClothingProductData::setBuyerID(string buyerID) {
	this->buyerID = buyerID;
}

/*
	�Լ� �̸� : getBuyerID()
	���	  : ������� BuyerID ��ȯ
	���� ���� : ����
	��ȯ��    : string BuyerID
*/
string ClothingProductData::getBuyerID() {
	return this->buyerID;
}


/*
	�Լ� �̸� : getRemainQuantity()
	���	  : ������� remainQuantity ��ȯ
	���� ���� : ����
	��ȯ��    : int remainQuantity
*/
int ClothingProductData::getRemainQuantity() {
	return this->remainQuantity;
}

/*
	�Լ� �̸� : getClothingProductStatistics()
	���	  : ��ǰ �Ǹ� ��������� �ʿ��� ���� ����
	���� ���� : string *productName, int *totalSales, int *average
	��ȯ��    : ����
*/
void ClothingProductData::getClothingProductStatistics(string* productName, int* totalSales, int* average) {
	*productName = this->productName;
	*totalSales = this->price * this->salesQuantity;
	*average = this->average;
}

/*
	�Լ� �̸� : getSalesClothingProductDetails()
	���	  : �Ǹ����� ��ǰ ������ �ʿ��� ���� ����
	���� ���� : string *productName, string *productCompanyName, int* price, int* remainQuantity
	��ȯ��    : ����
*/
void ClothingProductData::getSalesClothingProductDetails(string* productName, string* productCompanyName, int* price, int* remainQuantity, string* sellerID, int* average) {
	*productName = this->productName;
	*productCompanyName = this->productCompanyName;
	*price = this->price;
	*remainQuantity = this->remainQuantity;
	*sellerID = this->sellerID;
	*average = this->average;

}

/*
	�Լ� �̸� : getSoldOutClothingProductDetails()
	���	  : �Ǹ� �Ϸ� ��ǰ ������ �ʿ��� ���� ����
	���� ���� : string *productName, string *productCompanyName, int* price, int* salesQuantity, int*average
	��ȯ��    : ����
*/
void ClothingProductData::getSoldOutClothingProductDetails(string* productName, string* productCompanyName, int* price, int* salesQuantity, int* average) {
	*productName = this->productName;
	*productCompanyName = this->productCompanyName;
	*price = this->price;
	*salesQuantity = this->salesQuantity;
	*average = this->average;
}