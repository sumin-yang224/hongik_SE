#include "ClothingProductList.h"

ClothingProductList::ClothingProductList(){
    this->numClothingProducts=0;
}

int ClothingProductList::getNumClothingProduct(){
    return numClothingProducts;
}

void ClothingProductList::addNewClothingProduct(ClothingProductData* clothingProductData){
    clothingProductList[numClothingProducts++] = clothingProductData;
}

void ClothingProductList::listSalesClothingProduct(string userID, ClothingProductList* clothingProductList){
    for(int i;i<this->numClothingProducts;i++){
        if(this->clothingProductList[i]->getSellerID() == userID && this->clothingProductList[i]->getQuantity() != 0){
            clothingProductList->addNewClothingProduct(this->clothingProductList[i]);
        }
    }
}

void ClothingProductList::listSoldOutClothingProduct(string userID, ClothingProductList* clothingProductList){
    for(int i;i<this->numClothingProducts;i++){
        if(this->clothingProductList[i]->getSellerID() == userID && this->clothingProductList[i]->getQuantity() == 0){
            clothingProductList->addNewClothingProduct(this->clothingProductList[i]);
        }
    }
}

void ClothingProductList::listAllClothingProduct(string userID, ClothingProductList* clothingProductList){
    for(int i;i<this->numClothingProducts;i++){
        if(this->clothingProductList[i]->getSellerID() == userID){
            clothingProductList->addNewClothingProduct(this->clothingProductList[i]);
        }
    }
}

void ClothingProductList::listPurchaseClothingProducts(){
}

