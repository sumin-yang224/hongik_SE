#include "ClothingProductData.h"
#include <string>

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
	memset(this->satisfaction, 0, sizeof(int) * MAX_BUYER_NUM);
	this->sellerID = sellerID;
	for (int i = 0; i < MAX_BUYER_NUM; i++) {
		this->buyerID[i] = "";
	}
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
	���� ���� : int n
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
	this->buyerID[this->salesQuantity - 1] = buyerID; //upsalesquantity ������ ���� ����
}


/*
	�Լ� �̸� : setSatisfaction()
	���	  : ������� satisfaction �ʱ�ȭ
	���� ���� : ����
	��ȯ��    : ����
*/
void ClothingProductData::setSatisfaction(int satisfaction) {
	this->satisfaction[this->salesQuantity - 1] = satisfaction;
}

/*
	�Լ� �̸� : getBuyerID()
	���	  : ������� BuyerID ��ȯ
	���� ���� : int i
	��ȯ��    : string BuyerID
*/
string ClothingProductData::getBuyerID(int i) {
	return this->buyerID[i];
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
	�Լ� �̸� : getSalesQuantity()
	���	  : ������� salesQuantity ��ȯ
	���� ���� : ����
	��ȯ��    : int salesQuantity
*/
int ClothingProductData::getSalesQuantity() {
	return this->salesQuantity;
}

/*
	�Լ� �̸� : getClothingProductStatistics()
	���	  : ��ǰ �Ǹ� ��������� �ʿ��� ���� ����
	���� ���� : string *productName, int *totalSales, float *average
	��ȯ��    : ����
*/
void ClothingProductData::getClothingProductStatistics(string* productName, int* totalSales, float* average) {
	*productName = this->productName;
	*totalSales = this->price * this->salesQuantity;
	float sumSatisfaction = 0;
	for (int i = 0; i < this->salesQuantity; i++) {
		sumSatisfaction += this->satisfaction[i];
	}
	if (this->salesQuantity == 0)
		*average = 0;
	else {
		*average = (float)sumSatisfaction / (float)this->salesQuantity;
	}
}

/*
	�Լ� �̸� : getSalesClothingProductDetails()
	���	  : �Ǹ����� ��ǰ ������ �ʿ��� ���� ����
	���� ���� : string *productName, string *productCompanyName, int* price, int* remainQuantity
	��ȯ��    : ����
*/
void ClothingProductData::getSalesClothingProductDetails(string* productName, string* productCompanyName, int* price, int* remainQuantity) {
	*productName = this->productName;
	*productCompanyName = this->productCompanyName;
	*price = this->price;
	*remainQuantity = this->remainQuantity;
}

void ClothingProductData::getSalesClothingProductDetails(string* productName, string* productCompanyName, int* price, int* remainQuantity, string* sellerID, float* average) {
	*productName = this->productName;
	*productCompanyName = this->productCompanyName;
	*price = this->price;
	*remainQuantity = this->remainQuantity;
	*sellerID = this->sellerID;
	float sumSatisfaction = 0;
	for (int i = 0; i < this->salesQuantity; i++) {
		sumSatisfaction += this->satisfaction[i];
	}
	if (this->salesQuantity == 0)
		*average = 0;
	else {
		*average = (float)sumSatisfaction / (float)this->salesQuantity;
	}
}

/*
	�Լ� �̸� : getSoldOutClothingProductDetails()
	���	  : �Ǹ� �Ϸ� ��ǰ ������ �ʿ��� ���� ����
	���� ���� : string *productName, string *productCompanyName, int* price, int* salesQuantity, float*average
	��ȯ��    : ����
*/
void ClothingProductData::getSoldOutClothingProductDetails(string* productName, string* productCompanyName, int* price, int* salesQuantity, float* average) {
	*productName = this->productName;
	*productCompanyName = this->productCompanyName;
	*price = this->price;
	*salesQuantity = this->salesQuantity;
	float sumSatisfaction = 0;
	for (int i = 0; i < this->salesQuantity; i++) {
		sumSatisfaction += this->satisfaction[i];
	}
	if (this->salesQuantity == 0)
		*average = 0;
	else {
		*average = (float)sumSatisfaction / (float)this->salesQuantity;
	}
}