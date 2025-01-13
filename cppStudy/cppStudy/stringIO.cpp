#include <iostream>

int main(void)
{
	char name[100];
	char lang[200];

	std::cout << "이름: ";
	std::cin >> name;

	std::cout << "좋아하는 프로그래밍 언어: ";
	std::cin >> lang;

	std::cout << "제 이름은 " << name << " 입니다" << std::endl; 
	std::cout << "제가 좋아하는 프로그래밍 언어는 " << lang << " 입니다" << std::endl;
	return 0;
}