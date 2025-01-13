//숫자를 하나 입력받아서 그 숫자에 해당하는 구구단을 출력하는 프로그램을 작성해 보자. 예를 들어서 사용자가 5를 입력한다면 구구단에서 5단을 출력해야한다. 
#include<iostream>

int main(void)
{
	int num;
	std::cout << "몇 단? ";
	std::cin >> num;

	for (int i = 0; i < 9; i++)
	{
		std::cout << num << "X" << i+1 << "=" << (num * (i+1)) << std::endl;
	}
	return 0; 
}
//정답