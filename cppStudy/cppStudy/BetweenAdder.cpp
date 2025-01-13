//두 수를 입력받고 그 사이 숫자들 더하기 (for)
#include <iostream>

int main(void)
{
	int val1, val2;

	std::cout << "문자 2개 입력: ";
	std::cin >> val1 >> val2;

	int result=0;
	
	if (val1 > val2)
	{
		for (int i = val2+1; i < val2; i++) result += i;
	}
	else
	{
		for (int i = val1+1; i < val2; i++) result += i;
	}
	std::cout << result<<std::endl;
	return 0;
}
