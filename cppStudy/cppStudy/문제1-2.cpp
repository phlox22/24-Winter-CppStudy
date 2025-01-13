//다음 main 함수에서 필요로 하는 swap 함수를 오버로딩 해서 구현해보자.
#include <iostream>

//정딥
void swap(int* num1, int* num2)
{
	int t = *num1;
	*num1 = *num2;
	*num2 = t;
}

void swap(char* num1, char* num2)
{
	char t = *num1;
	*num1 = *num2;
	*num2 = t;
}

void swap(double* num1, double* num2)
{
	double t = *num1;
	*num1 = *num2;
	*num2 = t;
}

//내 답안(틀림-포인터에 대한 이해 부족)
//void swap(int* num1, int* num2)
//{
//	int *t = num1;
//	num1 = num2;
//	num2 = t;
//}
//
//void swap(char* num1, char* num2)
//{
//	char* t = num1;
//	num1 = num2;
//	num2 = t;
//}
//
//void swap(double* num1,double* num2)
//{
//	double* t = num1;
//	num1 = num2;
//	num2 = t;
//}

//문제 제시
int main(void)
{
	int num1 = 20, num2 = 30;
	swap(&num1, &num2);
	std::cout << num1 << ' ' << num2 << std::endl;
	
	char ch1 = 'A', ch2 = 'Z';
	swap(&ch1, &ch2);
	std::cout << ch1 << ' ' << ch2 << std::endl;

	double dbl1 = 1.111, dbl2 = 5.555;
	swap(&dbl1, &dbl2);
	std::cout << dbl1 << ' ' << dbl2 << std::endl;
	return 0;
}