#pragma once

class Login;//��ȯ������ ���� ���� ����

class LoginUI
{
private:
	Login* pLogin;
public:
	LoginUI(Login* login);
	void login();
};