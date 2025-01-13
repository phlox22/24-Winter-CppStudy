#include <iostream>

int RefRetFuncTwo(int& ref)
{
	ref++;
	return ref;
}

int main(void)
{
	int num1 = 1;
	int num2 = RefRetFuncTwo(num1); //반드시 변수에 저장(반환형이 기본자료형 int이기 때문)

	num1 += 1;
	num2 += 100;
	std::cout << "num1: " << num1 << std::endl;
	std::cout << "num2: " << num2 << std::endl;
	return 0;
}