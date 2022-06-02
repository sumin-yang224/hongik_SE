#include "UserList.h"

/*
	함수 이름 : UserList()
	기능	  : UserList 생성자
	전달 인자 : 없음
	반환값    : 없음
*/
UserList::UserList()
{
	numUsers = 0;
}


/*
	함수 이름 : addNewUser()
	기능	  : 유저리스트에 유저를 추가
	전달 인자 : User* user
	반환값    : 없음
*/
void UserList::addNewUser(User* user)
{
	userList[numUsers++] = user;
}


/*
	함수 이름 : removeUser()
	기능	  : 유저리스트에서 유저를 삭제
	전달 인자 : 없음
	반환값    : string
*/
string UserList::removeUser()
{
	string id;
	for (int i = 0; i < numUsers; i++)
	{
		if (userList[i]->checkLog())
		{
			id = userList[i]->getId();
			numUsers--;
			for (int j = i; j < numUsers; j++)
			{
				userList[j] = userList[j + 1];
			}
		}
	}
	return id;
}


/*
	함수 이름 : checkLogin()
	기능	  : 유저리스트에 저장된 아이디와 비밀번호가 맞는지 비교
	전달 인자 : 없음
	반환값    : string
*/
void UserList::checkLogin(char* id, char* pw)
{
	
	for (int i = 0; i < numUsers; i++)
	{
		if (id == userList[i]->getId()&&pw==userList[i]->getPw())
		{
			userList[i]->changeLoginStatus();
		}
	}
}


/*
	함수 이름 : checkLoginUser()
	기능	  : 로그인된 유저의 아이디를 가져옴
	전달 인자 : 없음
	반환값    : string
*/
string UserList::checkLoginUser()
{
	string id;
	for (int i = 0; i < numUsers; i++)
	{
		if (userList[i]->checkLog())
			id = userList[i]->getId();
	}
	return id;
}


/*
	함수 이름 : checkLogout()
	기능	  : 로그인된 유저를 로그아웃 상태로 전환
	전달 인자 : 없음
	반환값    : string
*/
string UserList::checkLogout()
{
	string id;
	for (int i = 0; i < numUsers; i++)
	{
		if (userList[i]->checkLog())
		{
			userList[i]->changeLoginStatus();
			id = userList[i]->getId();
		}
	}
	return id;
}
