//프로그램 사용자로부터 이름과 전화번호를 문자열의 형태로 입력 받아서, 입력 받은 데이터를 그대로 출력하는 프로그램을 작성해보자
#include <iostream>

//내 풀이
int main(void)
{
	char name[100]; 
	char phone[100];
	
	std::cout << "이름은? ";
	std::cin >> name;

	std::cout << "번호는? ";
	std::cin >> phone;

	std::cout << "이름은 " << name << std::endl;
	std::cout << "번호는 " << phone << std::endl;
	return 0; 
}
//정답