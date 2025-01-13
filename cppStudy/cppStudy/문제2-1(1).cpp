//참조자를 이용해서 다음 요구사항에 부합하는 함수를 각각 정의하여라
//인자로 전달된 int형 변수의 값을 1씩 증가시키는 함수 
//인자로 전달된 int형 변수의 부호를 바꾸는 함수
//그리고 위의 각 함수를 호출하여 그 결과를 확인하는 main 함수까지 작성하여라.

#include <iostream>

void PlusOne(int& ref)
{
	ref++;
}

void ChangePM(int& ref)
{
	ref *= -1;
}

int main(void)
{
	int num;
	std::cout << "Enter the number" << std::endl;
	std::cin >> num;
	PlusOne(num);
	std::cout << "PlusOne: " << num << std::endl;
	ChangePM(num);
	std::cout << "ChangePM: " <<num<< std::endl;
	return 0;
}
//정답