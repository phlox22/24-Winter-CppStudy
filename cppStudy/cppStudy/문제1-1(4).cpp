/*판매원들의 급여 계산 프로그램 작성
* 이 회사는 모든 판매원에게 매달 50만원의 기본급 + 물품 판매 가격의 12%에 해당하는 돈 지급
* 급여의 계산은 -1이 입력되기 전까지 계속 진행
*/
#include<iostream>
//답지 풀이 (함수 이용)
int CalSalary(int sales)
{
	return (int)(50 + sales * 0.12);
}

int main(void)
{
	int sales;
	while (1)
	{
		std::cout << "판매 금액을 만원 단위로 입력(-1 to end): ";
		std::cin >> sales;
		if (sales == -1) break;
		std::cout << "이번 달 급여: ";
		std::cout << CalSalary(sales) << "만원" << std::endl;
	}
	std::cout << "프로그램을 종료합니다." << std::endl;
	return 0;
}

//내 풀이
//int main(void)
//{
//	int sale=0;
//	while (1)
//	{
//		std::cout << "판매 금액을 만원 단위로 입력(-1 to end): ";
//		std::cin >> sale;
//		if (sale < 0) break;
//		int res = 50 + sale * 0.12;
//		std::cout << "이번 달 급여: " << res << "만원" << std::endl;
//	}
//	std::cout << "프로그램을 종료합니다." << std::endl;
//	return 0;
//}