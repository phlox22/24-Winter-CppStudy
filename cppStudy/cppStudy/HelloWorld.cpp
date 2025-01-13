#include <iostream>

int main(void)
{
	int num = 20;
	std::cout << "Hello World!" << std::endl;
	std::cout << "HEllo " << "World!" << std::endl;
	std::cout << num << ' ' << 'A';
	std::cout << ' ' << '3.14' << std::endl; //std::endl은 개행문자
	return 0;
}