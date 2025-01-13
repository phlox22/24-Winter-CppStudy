#include <iostream>

int Adder(int num1 = 1, int num2 = 2)
{
	return num1 + num2;
}

int main(void)
{
	std::cout << Adder() << std::endl;
	std::cout << Adder(5) << std::endl; //¿ŞÂÊºÎÅÍ Ã¤¿öÁ®¼­ num1=5, num2-2°¡ µÊ
	std::cout << Adder(3, 5) << std::endl;
	return 0;
}