#include "ClothingProductData.h"

/*
	함수 이름 : ClothingProductData()
	기능	  : 생성자
	전달 인자 : string productName, string productCompanyName, int price, int quantity, string sellerID
	반환값    : ClothingProductData Instance
*/
ClothingProductData::ClothingProductData(string productName, string productCompanyName, int price, int quantity, string sellerID){
    this->productName = productName;
    this->productCompanyName = productCompanyName;
    this->price = price;
    this->remainQuantity= quantity;
    this->salesQuantity = 0;
    this->sellerID= sellerID;
    memset(this->satisfaction, 0, sizeof(int) * MAX_BUYER_NUM);
	for (int i = 0; i < MAX_BUYER_NUM; i++)
		this->buyerID[i] = "";
	this->recentSearch =0;
}

/*
	함수 이름 : getBuyerID()
	기능	  : 멤버변수 BuyerID 반환
	전달 인자 : int i
	반환값    : string BuyerID
*/
string ClothingProductData::getBuyerID(int i) {
	return this->buyerID[i];
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
	함수 이름 : getProductName()
	기능	  : 멤버변수 productName 반환
	전달 인자 : 없음
	반환값    : string productName
*/
string ClothingProductData::getProductName() {
	return this->productName;
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
	함수 이름 : getRemainQuantity()
	기능	  : 멤버변수 remainQuantity 반환
	전달 인자 : 없음
	반환값    : int remainQuantity
*/
int ClothingProductData::getRemainQuantity(){
    return this->remainQuantity;
}

/*
	함수 이름 : getSalesQuantity()
	기능	  : 멤버변수 salesQuantity 반환
	전달 인자 : 없음
	반환값    : int salesQuantity
*/
int ClothingProductData::getSalesQuantity() {
	return this->salesQuantity;
}

/*
	함수 이름 : getClothingProductStatistics()
	기능	  : 상품 판매 통계정보에 필요한 값을 저장
	전달 인자 : string *productName, int *totalSales, float *average
	반환값    : 없음
*/
void ClothingProductData::getClothingProductStatistics(string *productName, int *totalSales, float *average){
    *productName = this->productName;
    *totalSales = this->price * this->salesQuantity;
	float sumSatisfaction = 0;
	for(int i=0;i<this->salesQuantity;i++){
		sumSatisfaction += this->satisfaction[i];
	}
    if (this->salesQuantity ==0)
		*average = 0;
	else{
		*average = (float) sumSatisfaction / (float) this->salesQuantity;
	}
}

/*
	함수 이름 : getSalesClothingProductDetails()
	기능	  : 판매중인 상품 정보에 필요한 값을 저장
	전달 인자 : string *productName, string *productCompanyName, int* price, int* remainQuantity
	반환값    : 없음
*/
void ClothingProductData::getSalesClothingProductDetails(string *productName, string *productCompanyName, int* price, int* remainQuantity){
    *productName = this->productName;
    *productCompanyName = this->productCompanyName;
    *price = this->price;
    *remainQuantity = this->remainQuantity;
}

void ClothingProductData::getSalesClothingProductDetails(string* productName, string* productCompanyName, int* price, int* remainQuantity, string* sellerID, float* average){
	*productName = this->productName;
	*productCompanyName = this->productCompanyName;
	*price = this->price;
	*remainQuantity = this->remainQuantity;
	*sellerID = this->sellerID;
	float sumSatisfaction=0;
	for(int i=0;i<this->salesQuantity;i++){
		sumSatisfaction += this->satisfaction[i];
	}
    if (this->salesQuantity ==0)
		*average = 0;
	else{
		*average = (float) sumSatisfaction / (float) this->salesQuantity;
	}
}

/*
	함수 이름 : getSoldOutClothingProductDetails()
	기능	  : 판매 완료 상품 정보에 필요한 값을 저장
	전달 인자 : string *productName, string *productCompanyName, int* price, int* salesQuantity, float*average
	반환값    : 없음
*/
void ClothingProductData::getSoldOutClothingProductDetails(string *productName, string *productCompanyName, int* price, int* salesQuantity, float* average){
    *productName = this->productName;
    *productCompanyName = this->productCompanyName;
    *price = this->price;
    *salesQuantity = this->salesQuantity;
	float sumSatisfaction=0;
	for(int i=0;i<this->salesQuantity;i++){
		sumSatisfaction += this->satisfaction[i];
	}
    if (this->salesQuantity ==0)
		*average = 0;
	else{
		*average = (float) sumSatisfaction / (float) this->salesQuantity;
	}
}

/*
	함수 이름 : setBuyerID()
	기능	  : 멤버변수 BuyerID 초기화
	전달 인자 : string buyerID
	반환값    : 없음
*/
void ClothingProductData::setBuyerID(string buyerID) {
	this->buyerID[this->salesQuantity - 1] = buyerID; //upsalesquantity 시점에 따라 조정
}

/*
	함수 이름 : setSatisfaction()
	기능	  : 멤버변수 satisfaction 초기화
	전달 인자 : int satisfaction
	반환값    : 없음
*/
void ClothingProductData::setSatisfaction(int satisfaction) {
	this->satisfaction[this->salesQuantity - 1] = satisfaction;
}

/*
	함수 이름 : setRecentSearch()
	기능	  : 멤버변수 secentSearch 초기화
	전달 인자 : int n
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