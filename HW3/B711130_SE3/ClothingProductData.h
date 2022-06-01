#pragma once
#include <iostream>
#include <string>

using namespace std;

class ClothingProductData
{
private:
    string productName;
    string productCompanyName;
    string sellerID;
    string buyerID;
    int price;
    int remainQuantity;
    int salesQuantity;
    int average;
    int satisfaction;
    int recentSearch;

public:
    ClothingProductData(string, string, int, int, string);
    string getSellerID();
    string getBuyerID();
    string getProductName();
    void setBuyerID(string);
    int getRecentSearch();
    void setRecentSearch(int);
    void downremainQuantity();
    void upsalesQuantity();
    int getRemainQuantity();
    
    void getSalesClothingProductDetails(string*, string*, int*, int*, string*, int*);
    void createClothingProduct();
    void getSoldOutClothingProductDetails(string*, string*, int*, int*, int*);
    void getClothingProductStatistics(string*, int*, int*);
    void addSatisfactionOfProduct();
};