#include "ClothingProductList.h"

ClothingProductList::ClothingProductList(){
    this->numClothingProducts=0;
}

int ClothingProductList::getNumClothingProduct(){
    return numClothingProducts;
}

ClothingProductData* ClothingProductList::getClothingProductData(){
    return this->clothingProductList[MAX_CLOTHING_PRODUCT_NUM];
}

void ClothingProductList::addNewClothingProduct(ClothingProductData* clothingProductData){
    clothingProductList[numClothingProducts++] = clothingProductData;
}

void ClothingProductList::listSalesClothingProduct(string userID, ClothingProductList* clothingProductList){
    for(int i=0;i<this->numClothingProducts;i++){
        if(this->clothingProductList[i]->getSellerID() == userID && this->clothingProductList[i]->getRemainQuantity() != 0){
            clothingProductList->addNewClothingProduct(this->clothingProductList[i]);
        }
    }
}

void ClothingProductList::listSoldOutClothingProduct(string userID, ClothingProductList* clothingProductList){
    for(int i=0;i<this->numClothingProducts;i++){
        if(this->clothingProductList[i]->getSellerID() == userID && this->clothingProductList[i]->getRemainQuantity() == 0){
            clothingProductList->addNewClothingProduct(this->clothingProductList[i]);
        }
    }
}

void ClothingProductList::listAllClothingProduct(string userID, ClothingProductList* clothingProductList){
    for(int i=0;i<this->numClothingProducts;i++){
        if(this->clothingProductList[i]->getSellerID() == userID){
            clothingProductList->addNewClothingProduct(this->clothingProductList[i]);
        }
    }
}

void ClothingProductList::listPurchaseClothingProducts(){

}

