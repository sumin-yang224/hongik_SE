#pragma once
#include "UserList.h"

class SatisfactionAssessment;

class SatisfactionAssessmentUI
{
private:
	SatisfactionAssessment *pSatisfactionAssessment;

public:
	SatisfactionAssessmentUI(SatisfactionAssessment *satisfactionAssessment);
	void enterSatisfaction();
};