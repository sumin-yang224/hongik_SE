#include "ClothingProductData.h"

ClothingProductData::ClothingProductData(){
    productName;
    productCompanyName;
    price;
    remainQuantity;
    salesQuantity=0;
    average;
    satisfaction;
    sellerID;
}

string ClothingProductData::getSellerID(){
    return this->sellerID;
}

int ClothingProductData::getQuantity(){
    return this->quantity;
}

void ClothingProductData::getClothingProductStatistics(string productName, int *totalSales, int *average){
    productName = this->productName;
    *totalSales = this->price * this->salesQuantity;
    *average = this->average;
}

void ClothingProductData::getSalesClothingProductDetails(string productName, string productCompanyName, int* price, int* quantity){
    this->productName = productName;
    this->productCompanyName = productCompanyName;
    this->price = *price;
    this->quantity = *quantity;
}

void ClothingProductData::getSoldOutClothingProductDetails(string productName, string productCompanyName, int* price, int* totalQuantity, int*average){
    this->productName = productName;
    this->productCompanyName = productCompanyName;
    this->price = *price;
    this->totalQuantity = *totalQuantity;
    this->average = *average;
}