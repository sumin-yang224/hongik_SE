#include "ClothingProductList.h"
using namespace std;

/*
	함수 이름 : ClothingProductList()
	기능	  : 생성자
	전달 인자 : 없음
	반환값    : ClothingProductList Instance
*/
ClothingProductList::ClothingProductList() {
	this->numClothingProducts = 0;
}

/*
	함수 이름 : getNumClothingProduct()
	기능	  : 멤버변수 numClothingProducts 반환
	전달 인자 : 없음
	반환값    : int numClothingProducts
*/
int ClothingProductList::getNumClothingProduct() {
	return numClothingProducts;
}

/*
	함수 이름 : getClothingProductData()
	기능	  : ClothingProductList에 존재하는 i번째 ClothingProductData 반환
	전달 인자 : int i
	반환값    : ClothingProductData* clothingProductList[i]
*/
ClothingProductData* ClothingProductList::getClothingProductData(int i) {
	return this->clothingProductList[i];
}

/*
	함수 이름 : searchClothingProductData()
	기능	  : 상품명과 일치하는 0개 이상인 상품을 찾아 리스트에 추가
	전달 인자 : string productName
	반환값    : ClothingProductData* clothingProductList[i]
*/
ClothingProductData* ClothingProductList::searchClothingProductData(string productName) {
	for (int i = 0; i < this->numClothingProducts; i++) {
		clothingProductList[i]->setRecentSearch(0); //전부 recentSearch = 0으로 초기화.
	}
	for (int i = 0; i < this->numClothingProducts; i++) {	
		if (this->clothingProductList[i]->getProductName() == productName && this->clothingProductList[i]->getRemainQuantity() != 0) {
			clothingProductList[i]->setRecentSearch(1); //가장 최근 검색한 상품은 recentSearch = 1로 초기화.
			return this->clothingProductList[i];
		}
	}
}

/*
	함수 이름 : addNewClothingProduct()
	기능	  : ClothingProductList에 매개변수로 넘겨받은 ClothingProductData를 추가
	전달 인자 : ClothingProductData* clothingProductData
	반환값    : 없음
*/
void ClothingProductList::addNewClothingProduct(ClothingProductData* clothingProductData) {
	clothingProductList[numClothingProducts++] = clothingProductData;
}

/*
	함수 이름 : listSalesClothingProduct()
	기능	  : 로그인한 유저의 현재 판매중인 상품의 ClothingProductList를 넘겨줌
	전달 인자 : string userID, ClothingProductList* clothingProductList
	반환값    : 없음
*/
void ClothingProductList::listSalesClothingProduct(string userID, ClothingProductList* clothingProductList) {
	for (int i = 0; i < this->numClothingProducts; i++) {
		if (this->clothingProductList[i]->getSellerID() == userID && this->clothingProductList[i]->getRemainQuantity() != 0) {
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
void ClothingProductList::listSoldOutClothingProduct(string userID, ClothingProductList* clothingProductList) {
	for (int i = 0; i < this->numClothingProducts; i++) {
		if (this->clothingProductList[i]->getSellerID() == userID && this->clothingProductList[i]->getRemainQuantity() == 0) {
			clothingProductList->addNewClothingProduct(this->clothingProductList[i]);
		}
	}
}

/*
	함수 이름 : listAllClothingProduct()
	기능	  : 로그인한 유저가 판매하는/판매된 모든 상품의 ClothingList를 넘겨줌
	전달 인자 : string userID, ClothingProductList* clothingProductList
	반환값    : 없음
*/
void ClothingProductList::listAllClothingProduct(string userID, ClothingProductList* clothingProductList) {
	for (int i = 0; i < this->numClothingProducts; i++) {
		if (this->clothingProductList[i]->getSellerID() == userID) {
			clothingProductList->addNewClothingProduct(this->clothingProductList[i]);
		}
	}
}

/*
	함수 이름 : listPurchaseClothingProducts()
	기능	  : 로그인한 유저가 구매한 모든 상품의 ClothingList를 넘겨줌
	전달 인자 : string userID, ClothingProductList* clothingProductList
	반환값    : 없음
*/
void ClothingProductList::listPurchaseClothingProduct(string userID, ClothingProductList* clothingProductList) {
	
	for (int i = 0; i < this->numClothingProducts; i++) {
		for (int j = 0; j < this->clothingProductList[i]->getSalesQuantity(); j++) {
			if (this->clothingProductList[i]->getBuyerID(j) == userID) {
				clothingProductList->addNewClothingProduct(this->clothingProductList[i]);
			}
		}
	}
}


/*
	함수 이름 : addSatisfactionOfProduct()
	기능	  : 로그인한 유저가 구매한 상품에 구매만족도를 추가
	전달 인자 : string userID, ClothingProductList* clothingProductList, int satisfaction
	반환값    : 없음
*/
ClothingProductData* ClothingProductList::addSatisfactionOfProduct(string userID, string productName, int satisfaction) {
	int checkNull = 1;
	for (int i = 0; i < this->numClothingProducts; i++) {
		for (int j = 0; j < this->clothingProductList[i]->getSalesQuantity(); j++) {
			if (this->clothingProductList[i]->getBuyerID(j) == userID && this->clothingProductList[i]->getProductName() == productName) {
				this->clothingProductList[i]->setSatisfaction(satisfaction);
				checkNull = 0;
				return this->clothingProductList[i];
			}	
		}
	}
	if(checkNull) {
		return NULL;
	}
}
