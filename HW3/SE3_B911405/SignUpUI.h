#pragma once

class SignUp;//��ȯ������ ���� ���� ����

class SignUpUI
{
private:
	SignUp* pSignUp;
public:
	SignUpUI(SignUp* signUp);
	void createNewUser();
};