#include "ClothingProductData.h"

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

string ClothingProductData::getSellerID(){
    return this->sellerID;
}

int ClothingProductData::getRemainQuantity(){
    return this->remainQuantity;
}

void ClothingProductData::getClothingProductStatistics(string productName, int *totalSales, int *average){
    productName = this->productName;
    *totalSales = this->price * this->salesQuantity;
    *average = this->average;
}

void ClothingProductData::getSalesClothingProductDetails(string productName, string productCompanyName, int* price, int* remainQuantity){
    productName = this->productName;
    productCompanyName = this->productCompanyName;
    *price = this->price;
    *remainQuantity = this->remainQuantity;
}

void ClothingProductData::getSoldOutClothingProductDetails(string productName, string productCompanyName, int* price, int* salesQuantity, int*average){
    productName = this->productName;
    productCompanyName = this->productCompanyName;
    *price = this->price;
    *salesQuantity = this->salesQuantity;
    *average = this->average;
}