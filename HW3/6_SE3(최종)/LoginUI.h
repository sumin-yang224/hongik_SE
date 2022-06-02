#pragma once

class Login;//순환참조로 인한 오류 방지

class LoginUI
{
private:
	Login* pLogin;
public:
	LoginUI(Login* login);
	void login();
};