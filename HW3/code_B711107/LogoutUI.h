#pragma once
#include "Logout.h"

class Logout;//순환참조로 인한 오류 방지

class LogoutUI
{
private:
	Logout* pLogout;
public:
	LogoutUI(Logout* logOut);
	void logout();
};