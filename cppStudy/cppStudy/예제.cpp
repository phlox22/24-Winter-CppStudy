#include <iostream>

int main(void)
{
	int* ptr = new int;
	int& ref = *ptr;
	ref = 20;
	std::cout << *ptr << std::endl;
}