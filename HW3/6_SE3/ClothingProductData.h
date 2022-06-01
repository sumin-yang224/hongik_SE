#pragma once

#include <iostream>
#define MAX_BUYER_NUM 50
using namespace std;

class ClothingProductData
{
private:
    string productName;
    string productCompanyName;
    string sellerID;
    string buyerID[MAX_BUYER_NUM];
    int price;
    int remainQuantity;
    int salesQuantity;
    int satisfaction[MAX_BUYER_NUM];
    int recentSearch;

public:
    ClothingProductData(string, string, int, int, string);
    string getBuyerID(int);
    string getSellerID();
    string getProductName();
    int getRecentSearch();
    int getRemainQuantity();
    int getSalesQuantity();
    void getSalesClothingProductDetails(string*, string*, int*, int*);
    void getSalesClothingProductDetails(string*, string*, int*, int*, string*, float*);
    void getSoldOutClothingProductDetails(string*, string*, int*, int*, float*);
    void getClothingProductStatistics(string*, int*, float*);

    void setBuyerID(string);
    void setSatisfaction(int);
    void setRecentSearch(int);

    void downremainQuantity();
    void upsalesQuantity();
};