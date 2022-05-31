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
    this->average = 0;
    this->satisfaction = 0;
    this->sellerID= sellerID;
}

/*
	함수 이름 : getSellerID()
	기능	  : 멤버변수 sellerID 반환
	전달 인자 : 없음
	반환값    : string sellerID 
*/
string ClothingProductData::getSellerID(){
    return this->sellerID;
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
	함수 이름 : getClothingProductStatistics()
	기능	  : 상품 판매 통계정보에 필요한 값을 저장
	전달 인자 : string *productName, int *totalSales, int *average
	반환값    : 없음
*/
void ClothingProductData::getClothingProductStatistics(string *productName, int *totalSales, float *average){
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
void ClothingProductData::getSalesClothingProductDetails(string *productName, string *productCompanyName, int* price, int* remainQuantity){
    *productName = this->productName;
    *productCompanyName = this->productCompanyName;
    *price = this->price;
    *remainQuantity = this->remainQuantity;
}

/*
	함수 이름 : getSoldOutClothingProductDetails()
	기능	  : 판매 완료 상품 정보에 필요한 값을 저장
	전달 인자 : string *productName, string *productCompanyName, int* price, int* salesQuantity, int*average
	반환값    : 없음
*/
void ClothingProductData::getSoldOutClothingProductDetails(string *productName, string *productCompanyName, int* price, int* salesQuantity, float* average){
    *productName = this->productName;
    *productCompanyName = this->productCompanyName;
    *price = this->price;
    *salesQuantity = this->salesQuantity;
    *average = this->average;
}