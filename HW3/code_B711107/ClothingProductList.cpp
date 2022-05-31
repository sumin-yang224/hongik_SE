#include "ClothingProductList.h"

using namespace std;

/*
	함수 이름 : ClothingProductList()
	기능	  : 생성자
	전달 인자 : 없음
	반환값    : ClothingProductList Instance
*/
ClothingProductList::ClothingProductList(){
    this->numClothingProducts=0;
}

/*
	함수 이름 : getNumClothingProduct()
	기능	  : 멤버변수 numClothingProducts 반환
	전달 인자 : 없음
	반환값    : int numClothingProducts
*/
int ClothingProductList::getNumClothingProduct(){
    return numClothingProducts;
}

/*
	함수 이름 : getClothingProductData()
	기능	  : ClothingProductList에 존재하는 i번째 ClothingProductData 반환
	전달 인자 : int i
	반환값    : ClothingProductData* clothingProductList[i]
*/
ClothingProductData* ClothingProductList::getClothingProductData(int i){
    return this->clothingProductList[i];
}

/*
	함수 이름 : addNewClothingProduct()
	기능	  : ClothingProductList에 매개변수로 넘겨받은 ClothingProductData를 추가
	전달 인자 : ClothingProductData* clothingProductData
	반환값    : 없음
*/
void ClothingProductList::addNewClothingProduct(ClothingProductData* clothingProductData){
    clothingProductList[numClothingProducts++] = clothingProductData;
}

/*
	함수 이름 : listSalesClothingProduct()
	기능	  : 로그인한 유저의 현재 판매중인 상품의 ClothingProductList를 넘겨줌
	전달 인자 : string userID, ClothingProductList* clothingProductList
	반환값    : 없음
*/
void ClothingProductList::listSalesClothingProduct(string userID, ClothingProductList* clothingProductList){
    for(int i=0;i<this->numClothingProducts;i++){
        if(this->clothingProductList[i]->getSellerID() == userID && this->clothingProductList[i]->getRemainQuantity() != 0){
            clothingProductList->addNewClothingProduct(this->clothingProductList[i]);
        }
    }
}

/*
	함수 이름 : listSoldOutClothingProduct()
	기능	  : 로그인한 유저의 판매 완료된 상품의 ClothingProductList를 넘겨줌
	전달 인자 : string userID, ClothingProductList* clothingProductList
	반환값    : 없음
*/
void ClothingProductList::listSoldOutClothingProduct(string userID, ClothingProductList* clothingProductList){
    for(int i=0;i<this->numClothingProducts;i++){
        if(this->clothingProductList[i]->getSellerID() == userID && this->clothingProductList[i]->getRemainQuantity() == 0){
            clothingProductList->addNewClothingProduct(this->clothingProductList[i]);
        }
    }
}

/*
	함수 이름 : listSalesClothingProduct()
	기능	  : 로그인한 유저가 판매하는/판매된 모든 상품의 ClothingList를 넘겨줌
	전달 인자 : string userID, ClothingProductList* clothingProductList
	반환값    : 없음
*/
void ClothingProductList::listAllClothingProduct(string userID, ClothingProductList* clothingProductList){
    for(int i=0;i<this->numClothingProducts;i++){
        if(this->clothingProductList[i]->getSellerID() == userID){
            clothingProductList->addNewClothingProduct(this->clothingProductList[i]);
        }
    }
}

