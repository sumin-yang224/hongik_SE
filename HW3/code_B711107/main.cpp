#include <iostream>
#include <cstring>
#include <fstream>

#include "ClothingProductList.h"
#include "PrintProductSalesStatistics.h"
#include "UserList.h"

using namespace std;

// 상수 선언
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// 함수 선언
void run();

// 변수 선언
// FILE* in_fp, *out_fp;
ifstream readFile;
ofstream writeFile;


int main()
{
    // 파일 입출력을 위한 초기화
    readFile.open(INPUT_FILE_NAME);
    writeFile.open(OUTPUT_FILE_NAME);
    
    /*...*/
    run();

    readFile.close();
    writeFile.close();
}



void run()
{
    UserList* userList = new UserList();
    ClothingProductList *clothingProductList = new ClothingProductList();

    // 메뉴 파싱을 위한 level 구분을 위한 변수
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;

    while(!is_program_exit)
    {
        // 입력파일에서 메뉴 숫자 2개를 읽기
        readFile >> menu_level_1;
        readFile >> menu_level_2;

        // 메뉴 구분 및 해당 연산 수행
        switch(menu_level_1)
        {
            case 1:
            {
                switch(menu_level_2)
                {
                    case 1: //1.1. 회원가입
                    {
                        // SignUp signUp(userList);
                        cout << "회원가입 완료" << endl;
                        break;
                    }
                    case 2: //1.2. 회원탈퇴
                    {
                        /*...*/
                        break;
                    }
                }
            }
            case 2:
            {
                switch(menu_level_2)
                {
                    case 1: // 2.1. 로그인
                    {
                        // 2.1() 함수에서 해당 기능 수행 
                        // Login login(userList);
                        cout << "로그인 완료" << endl;
                        break;
                    }
                    case 2: // 2.2. 로그아웃
                    {
                        
                        break;
                    }
                }
            }
            case 3:
            {
              switch(menu_level_2)
                {
                    case 1:   // "3.1. 판매 의류 등록" 메뉴 부분
                    {
            	        // join() 함수에서 해당 기능 수행 
                        
                        break;
                    }
                    case 2:   // "3.2. 등록 상품 조회" 메뉴 부분
                    {
                        /*...*/
                        break;
                    }
                    case 3:   // "3.3. 판매 완료 상품 조회" 메뉴 부분
                    {

                        break;
                    }
                }
            }
            case 4:
            {
              switch(menu_level_2)
                {
                    case 1:   // "4.1. 상품 정보 검색" 메뉴 부분
                    {
            	        // join() 함수에서 해당 기능 수행 
                        
                        break;
                    }
                    case 2:   // "4.2. 상품 구매" 메뉴 부분
                    {
                        /*...*/
                        break;
                    }
                    case 3:   // "4.3. 상품 구매 내역 조회" 메뉴 부분
                    {

                        break;
                    }
                    case 4:   // "4.4. 상품 구매만족도 평가" 메뉴 부분
                    {

                        break;
                    }
                }
            }
            case 5:
            {
              switch(menu_level_2)
                {
                    case 1:   // "5.1. 판매 상품 통계" 메뉴 부분
                    {
            	        PrintProductSalesStatistics printProductSalesStatistics(clothingProductList, userList);
                        cout << "판매 상품 통계 출력 완료" << endl;
                        break;
                    }
                }
            }
            /*...*/
            case 6:
            {
                switch(menu_level_2)
                {
                    case 1:   // 6.1. 종료
                    {
            	        is_program_exit = 1;
                        break;
                    }        
                }
            }
        }
    }
}

