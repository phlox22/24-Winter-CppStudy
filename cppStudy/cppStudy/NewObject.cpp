#include <iostream>
#include <stdlib.h>

class Simple
{
public:
	Simple()
	{
		std::cout << "I'm simple constructor!" << std::endl;
	}
};

int main(void)
{
	std::cout << "case 1: ";
	Simple* sp1 = new Simple;

	std::cout << "case 2: ";
	Simple* sp2 = (Simple*)malloc(sizeof(Simple) * 1);

	std::cout << std::endl << "end of main" << std::endl;
	delete sp1;
	free(sp2);
	return 0;
}
//new와 malloc함수의 동작방식에는 차이가 있다.