#pragma once
#include "ClothingProductData.h"
#include <iostream>

#define MAX_CLOTHING_PRODUCT_NUM 50

class ClothingProductList
{
private:
    ClothingProductData* clothingProductList[MAX_CLOTHING_PRODUCT_NUM];
    int numClothingProducts;
public: 
    ClothingProductList();
    void addNewClothingProduct(ClothingProductData*);
    void listAllClothingProduct(string, ClothingProductList*);
    void listPurchaseClothingProduct(string, ClothingProductList*);
    void listSalesClothingProduct(string, ClothingProductList*);
    void listSoldOutClothingProduct(string, ClothingProductList*);
    int getNumClothingProduct();
    ClothingProductData* addSatisfactionOfProduct(string,string,int);
    ClothingProductData* getClothingProductData(int);
    ClothingProductData* searchClothingProductData(string);
};
