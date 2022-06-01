#include "ClothingProductData.h"

/*
	함수 이름 : ClothingProductData()
	기능	  : 생성자
	전달 인자 : string productName, string productCompanyName, int price, int quantity, string sellerID
	반환값    : ClothingProductData Instance
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
	함수 이름 : getProductName()
	기능	  : 멤버변수 productName 반환
	전달 인자 : 없음
	반환값    : string productName
*/
string ClothingProductData::getProductName() {
	return this->productName;
}

/*
	함수 이름 : setRecentSearch()
	기능	  : 멤버변수 secentSearch 초기화
	전달 인자 : 없음
	반환값    : 없음
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
	함수 이름 : downremainQuantity()
	기능 : 상품구매 시, 멤버변수 remainQuantity 1감소
	전달 인자 : 없음
	반환값 : 없음
*/
void ClothingProductData::downremainQuantity() {
	this->remainQuantity--;
}

/*
	함수 이름 : upsalesQuantity()
	기능 : 상품구매 시, 멤버변수 salesQuantity 1증가
	전달 인자 : 없음
	반환값 : 없음
*/
void ClothingProductData::upsalesQuantity() {
	this->salesQuantity++;
}

/*
	함수 이름 : getRecentSearch()
	기능	  : 멤버변수 recentSearch 반환
	전달 인자 : 없음
	반환값    : int recentSearch
*/
int ClothingProductData::getRecentSearch() {
	return this->recentSearch;
}

/*
	함수 이름 : getSellerID()
	기능	  : 멤버변수 sellerID 반환
	전달 인자 : 없음
	반환값    : string sellerID
*/
string ClothingProductData::getSellerID() {
	return this->sellerID;
}

/*
	함수 이름 : setBuyerID()
	기능	  : 멤버변수 BuyerID 초기화
	전달 인자 : 없음
	반환값    : 없음
*/
void ClothingProductData::setBuyerID(string buyerID) {
	this->buyerID = buyerID;
}

/*
	함수 이름 : getBuyerID()
	기능	  : 멤버변수 BuyerID 반환
	전달 인자 : 없음
	반환값    : string BuyerID
*/
string ClothingProductData::getBuyerID() {
	return this->buyerID;
}


/*
	함수 이름 : getRemainQuantity()
	기능	  : 멤버변수 remainQuantity 반환
	전달 인자 : 없음
	반환값    : int remainQuantity
*/
int ClothingProductData::getRemainQuantity() {
	return this->remainQuantity;
}

/*
	함수 이름 : getClothingProductStatistics()
	기능	  : 상품 판매 통계정보에 필요한 값을 저장
	전달 인자 : string *productName, int *totalSales, int *average
	반환값    : 없음
*/
void ClothingProductData::getClothingProductStatistics(string* productName, int* totalSales, int* average) {
	*productName = this->productName;
	*totalSales = this->price * this->salesQuantity;
	*average = this->average;
}

/*
	함수 이름 : getSalesClothingProductDetails()
	기능	  : 판매중인 상품 정보에 필요한 값을 저장
	전달 인자 : string *productName, string *productCompanyName, int* price, int* remainQuantity
	반환값    : 없음
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
	함수 이름 : getSoldOutClothingProductDetails()
	기능	  : 판매 완료 상품 정보에 필요한 값을 저장
	전달 인자 : string *productName, string *productCompanyName, int* price, int* salesQuantity, int*average
	반환값    : 없음
*/
void ClothingProductData::getSoldOutClothingProductDetails(string* productName, string* productCompanyName, int* price, int* salesQuantity, int* average) {
	*productName = this->productName;
	*productCompanyName = this->productCompanyName;
	*price = this->price;
	*salesQuantity = this->salesQuantity;
	*average = this->average;
}