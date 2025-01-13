#include <iostream>

int main(void)
{
	int val1;
	std::cout << "첫 문자: ";
	std::cin >> val1;

	int val2;
	std::cout << "두번째 문자: ";
	std::cin >> val2;
	
	int result = val1 + val2;
	std::cout << "덧셈결과:" << result << std::endl;
	return 0;
}