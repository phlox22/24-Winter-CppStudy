#define _CRT_SECURE_NO_WARNINGS

/*다음 표준 함수를 호출하는 예제를 만들되, C++ 헤더를 선언해서 만들어보자.
* 그리고 예제의 내용은 상관이 없지만, 아래의 함수들을 최소 1회 이상 호출해야한다. 참고로 다음 함수들은 C언어의 경우 <string.h>에 선언되어 있다.
* strlen 문자열의 길이 계산
* strcat 문자열의 귀에 덧붙이기
* strcpy 문자열 복사
* strcmp 문자열의 비교
*/

#include <iostream>
#include <cstdio>
#include <cstring>

int main(void)
{
	char str[] = "HELLO";
	std::cout << strlen(str) << std::endl;
	std::cout << strcat(str,"World") << std::endl;
	char cpystr[30];
	std::cout << strcpy(cpystr, str) << std::endl;
	char str2[] = "HI";
	std::cout << strcmp(str,str2) << std::endl;
	return 0;
}
//답 다양 | 정답