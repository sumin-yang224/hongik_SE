#pragma once
#include <iostream>
#include <string>
#define MAX 50
using namespace std;

class ClothingProductData
{
private:
    string productName;
    string productCompanyName;
    string sellerID;
    string buyerID[MAX];
    int price;
    int remainQuantity;
    int salesQuantity;
    int average;
    int satisfaction[MAX];
    int recentSearch;

public:
    ClothingProductData(string, string, int, int, string);
    string getSellerID();
    string getBuyerID(int);
    string getProductName();
    void setBuyerID(string);
    int getRecentSearch();
    void setRecentSearch(int);
    void downremainQuantity();
    void upsalesQuantity();
    int getRemainQuantity();
    int getSalesQuantity();
    void setSatisfaction(int);
    void getSalesClothingProductDetails(string*, string*, int*, int*, string*, int*);
    void getSoldOutClothingProductDetails(string*, string*, int*, int*, int*);
    void getClothingProductStatistics(string*, int*, int*);
    
};
