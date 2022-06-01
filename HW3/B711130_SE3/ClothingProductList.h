#pragma once
#include <iostream>
#include "ClothingProductData.h"
using namespace std;

#define MAX_CLOTHING_PRODUCT_NUM 50

class ClothingProductData;


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
    void listPurchaseClothingProduct(string, ClothingProductList*);
    int getNumClothingProduct();
    ClothingProductData* getClothingProductData(int);
    ClothingProductData* searchClothingProductData(string);
    ClothingProductData* addSatisfactionOfProduct(string, string, int);
};
