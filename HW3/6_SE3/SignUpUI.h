#pragma once
#include "SignUp.h"
class SignUp;//��ȯ������ ���� ���� ����

class SignUpUI
{
private:
	SignUp* pSignUp;
public:
	SignUpUI(SignUp* signUp);
	void createNewUser();
};