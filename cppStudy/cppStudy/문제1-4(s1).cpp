//예제 NampSp2.cpp를 3개의 파일로 분할해서 컴파일
/*
* 헤더파일 : main 함수를 제외한 나머지 함수의 선언을 삽입한다.
* 소스피알1 : main 함수를 제외한 나머지 두 함수의 정의를 삽입한다.
* 소스파일 3 : main 함수만 삽입한다.
*/
#include <iostream>
#include "문제1-4.h"

void BestComImpl::SimpleFunc(void) //정의
{
	std::cout << "BestCom이 정의한 함수" << std::endl;
}

void ProgComImpl::SimpleFunc(void) //정의
{
	std::cout << "ProgCom이 정의한 함수" << std::endl;
}