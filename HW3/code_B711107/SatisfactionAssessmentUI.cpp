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

SatisfactionAssessmentUI::SatisfactionAssessmentUI(SatisfactionAssessment *satisfactionAssessment)
{
	pSatisfactionAssessment = satisfactionAssessment;
}

void SatisfactionAssessmentUI::enterSatisfaction()
{
	string productName;
	string productCompanyName;
	string sellerID;
	int average, satisfaction, price, remainQuantity;

	readFile >> productName;
	readFile >> satisfaction;

	bool ret;
	ret = pSatisfactionAssessment->addSatisfactionOfProduct(&sellerID, productName, satisfaction);
	if (ret == false)
	{ //구매하지않은 상품 만족도평가했을 때의 무효처리
		cout << "구매하지않은 물건입니다." << endl;
		return;
	}

	writeFile << "4.4. 상품 구매만족도 평가" << endl;
	writeFile << "> " << sellerID << " " << productName << " " << satisfaction << endl;
}