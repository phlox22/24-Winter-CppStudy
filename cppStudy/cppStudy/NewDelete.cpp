#define _CRT_SECURE_NO_WARNINGS
//c언어에서의 동적 할당
#include <iostream>
#include <string.h>
#include <stdlib.h>

char* MakeStrAdr(int len)
{
	//char* str = (char*)malloc(sizeof(char) * len);
	char* str = new char[len];
	return str;
}

int main(void)
{
	char* str = MakeStrAdr(20);
	strcpy(str, "I am so happy~");
	std::cout << str << std::endl;
	//free(str);
	delete[]str;
	return 0;
}