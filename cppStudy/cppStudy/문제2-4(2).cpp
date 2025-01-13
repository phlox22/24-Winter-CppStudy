#include <cstdlib>
#include <iostream>
#include <ctime>

int main(void)
{
	int num[5];
	srand(time(NULL)); //¿©±â ¸ô¶úÀ½
	for (int i = 0; i < 5; i++)
	{
		num[i] = rand() % 100;
		std::cout << num[i] << std::endl;
	}
	return 0;
}