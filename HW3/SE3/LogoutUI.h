#pragma once

class Logout;//��ȯ������ ���� ���� ����

class LogoutUI
{
private:
	Logout* pLogout;
public:
	LogoutUI(Logout* logOut);
	void logout();
};
