#pragma once
#include "UserList.h"

class SatisfactionAssessment;

class SatisfactionAssessmentUI
{
private:
	SatisfactionAssessment* pSatisfactionAssessment;
	UserList* pUserList;
public:
	SatisfactionAssessmentUI(SatisfactionAssessment* satisfactionAssessment, UserList* userList);
	void enterSatisfaction();
};
