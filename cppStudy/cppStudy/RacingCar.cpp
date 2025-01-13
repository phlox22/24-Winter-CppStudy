#include <iostream>

#define ID_LEN 20
#define MAX_SPD 200
#define FUEL_STEP 2
#define ACC_STEP 10
#define BRK_STEP 10

struct Car
{
	char gamerID[ID_LEN]; //게이머 아이디
	int fuelGauge; //연료 게이지
	int curSpeed;  //현재 스피드
};

void showCarState(const Car& car) //차 상태 보여주는 함수
{
	std::cout << "소유자 ID : " << car.gamerID << std::endl;
	std::cout << "연료량 : " << car.fuelGauge << "%"<< std::endl;
	std::cout << "현재속도 : " << car.curSpeed << "km/s" << std::endl << std::endl;
}

void Accel(Car& car) //악셀 밟았을 때 cur speed 추가하는 함수
{
	if (car.fuelGauge <= 0) return;
	else car.fuelGauge -= FUEL_STEP;

	if (car.curSpeed + ACC_STEP >= MAX_SPD)
	{
		car.curSpeed = MAX_SPD;
		return;
	}
	car.curSpeed += ACC_STEP;
}

void Break(Car& car)
{
	if (car.curSpeed < BRK_STEP)
	{
		car.curSpeed = 0;
		return;
	}
	car.curSpeed -= BRK_STEP;
}

int main(void)
{
	Car run99 = { "run99",100,0 };
	Accel(run99);
	Accel(run99);
	showCarState(run99);
	Break(run99);
	showCarState(run99);

	Car sped77 = { "sped77",100,0 };
	Accel(sped77);
	Break(sped77);
	showCarState(sped77);
	return 0;
}