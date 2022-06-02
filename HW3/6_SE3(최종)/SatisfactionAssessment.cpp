#include "SatisfactionAssessment.h"
#include "UserList.h"
#include <iostream>
#include <string>
using namespace std;


/*
	함수 이름 : SatisfactionAssessment()
	기능	  : Control class 생성자로, boundary class를 생성하고 enterSatisfaction 함수 실행
	전달 인자 : ClothingProductList* pClothingProductList, UserList* userList
	반환값    : SatisfactionAssessment Instance
*/
SatisfactionAssessment::SatisfactionAssessment(ClothingProductList* pClothingProductList, UserList* userList)
{
	this->pClothingProductList = pClothingProductList;
	this->pUserList = userList;
	this->pSatisfactionAssessmentUI = new SatisfactionAssessmentUI(this);
	pSatisfactionAssessmentUI->enterSatisfaction();
}


/*
	함수 이름 : addSatisfactionOfProduct()
	기능	  : 유저아이디, 상품명, 만족도를 받아 상품데이터에 입력
	전달 인자 : string userID, string ProductName, int Satisfaction
	반환값    : ClothingProductData*
*/
bool SatisfactionAssessment::addSatisfactionOfProduct(string* sellerID, string ProductName, int Satisfaction)
{
	ClothingProductData* data;
	string userID = this->pUserList->checkLoginUser();

	data = pClothingProductList->addSatisfactionOfProduct(userID, ProductName, Satisfaction);
	if (data == NULL)
	{ //구매하지않은 상품 만족도평가했을 때의 무효처리
		return false;
	}
	*sellerID = data->getSellerID();

	return true;
}