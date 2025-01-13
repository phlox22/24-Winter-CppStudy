#include <iostream>

namespace BestComImpl
{
	void SimpleFunc(void);
} //선언

namespace ProgComImpl
{
	void SimpleFunc(void);
} //선언

int main(void)
{
	BestComImpl::SimpleFunc();
	ProgComImpl::SimpleFunc();
	return 0;
}

void BestComImpl::SimpleFunc(void) //정의
{
	std::cout << "BestCom이 정의한 함수" << std::endl;
}

void ProgComImpl::SimpleFunc(void) //정의
{
	std::cout << "ProgCom이 정의한 함수" << std::endl;
}