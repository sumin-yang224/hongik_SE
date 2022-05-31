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
    void listSalesClothingProduct(string, ClothingProductList*);
    void listSoldOutClothingProduct(string, ClothingProductList*);
    void listAllClothingProduct(string, ClothingProductList*);
    void listPurchaseClothingProducts();
    int getNumClothingProduct();
    ClothingProductData* getClothingProductData(int);
};
