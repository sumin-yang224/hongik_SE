#pragma once
#include "SignUp.h"

class SignUp;//순환참조로 인한 오류 방지

class SignUpUI
{
private:
	SignUp* pSignUp;
public:
	SignUpUI(SignUp* signUp);
	void createNewUser();
};