//사용자로부터 총 5개의 정수를 입력받아서, 그 합을 출력하는 프로그램을 작성해보자
#include <iostream>


//for문을 이용한 책 답지

int main(void)
{
	int num = 0;
	int input;

	for (int i = 0; i < 5; i++)
	{
		std::cout << i + 1 << "번째 정수 입력";
		std::cin >> input;
		num += input;
	}

	std::cout << "합계: " << num << std::endl;
	return 0;
}


// 내가 푼 풀이
//int main(void)
//{
//	int val1, val2, val3, val4, val5;
//	std::cout << "1번째 정수 입력: ";
//	std::cin >> val1;
//
//	std::cout << "2번째 정수 입력: ";
//	std::cin >> val2;
//
//	std::cout << "3번째 정수 입력: ";
//	std::cin >> val3;
//
//	std::cout << "4번째 정수 입력: ";
//	std::cin >> val4;
//
//	std::cout << "5번째 정수 입력: ";
//	std::cin >> val5;
//
//	int res = val1 + val2 + val3 + val4 + val5;
//	std::cout << "합계: " << res << std::endl;
//	return 0;
//}