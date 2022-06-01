#include <iostream>
#include <string>
#include <fstream>
#include "SatisfactionAssessmentUI.h"
#include "SatisfactionAssessment.h"
#include "ClothingProductData.h"
#include "ClothingProductList.h"

using namespace std;

#define MAX_STRING 32
extern ifstream readFile;
extern ofstream writeFile;


/*
	함수 이름 : SatisfactionAssessmentUI()
	기능	  : Boundary class 생성자
	전달 인자 : SatisfactionAssessment* satisfactionAssessment, UserList* userList
	반환값    : SatisfactionAssessmentUI Instance
*/
SatisfactionAssessmentUI::SatisfactionAssessmentUI(SatisfactionAssessment* satisfactionAssessment, UserList* userList)
{
	pSatisfactionAssessment = satisfactionAssessment;
	pUserList = userList;
}

/*
	함수 이름 : enterSatisfaction()
	기능	  : 구매만족도 평가 UI로, 구매한 적이 있는 상품의 만족도를 입력하여 전달
	전달 인자 : 없음
	반환값    : 없음
*/
void SatisfactionAssessmentUI::enterSatisfaction()
{
	string productName;
	string productCompanyName;
	string sellerID;
	int average, satisfaction, price, remainQuantity;
	string userID = this->pUserList->checkLoginUser();

	readFile >> productName;
	readFile >> satisfaction;

	ClothingProductData* data;
	data = pSatisfactionAssessment->addSatisfactionOfProduct(userID, productName, satisfaction);
	if (data == NULL) { //구매하지않은 상품 만족도평가했을 때의 무효처리
		cout << "구매하지않은 물건입니다." << endl;
		return;
	}
	sellerID = data->getSellerID();

	writeFile << "4.4. 상품 구매만족도 평가" << endl;
	writeFile << "> " << sellerID << " " << productName << " " << satisfaction << endl;
}