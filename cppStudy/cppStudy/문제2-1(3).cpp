/* ¹®Á¦ÀÇ Á¦½Ã¿¡ ¾Õ¼­ ¸ÕÀú ´ÙÀ½ ÄÚµå¸¦ º¸ÀÚ
* int main(void)
* {
*	int num1=5;
*	int *ptr1=&num1;
*	int num2=10;
*	int *ptr2=&num2;
*  .....
* }
* 
* À§ÀÇ ÄÚµå¸¦ º¸¸é ptr1°ú ptr2°¡ °¢°¢ num1°ú num2¸¦ °¡¸®Å°°í ÀÖ´Ù. ÀÌ¶§ ptr1°ú ptr2¸¦ ´ë»óÀ¸·Î ´ÙÀ½°ú °°ÀÌ ÇÔ¼ö¸¦ È£­„ÇÏ°í ³ª¸é, SwapPointer(ptr1,ptr2);
* ptr1°ú ptr2°¡ °¡¸®Å°´Â ´ë»óÀÌ ¼­·Î ¹Ù²îµµ·Ï SwapPointer ÇÔ¼ö¸¦ Á¤ÀÇÇØº¸ÀÚ
*/

#include <iostream>

void SwapPointer(int* (&pref1), int* (&pref2))
{
	int* ptr = pref1;
	pref1 = pref2;
	pref2 = ptr;
}

int main(void)
{
	int num1 = 5;
	int* ptr1 = &num1;

	int num2 = 10;
	int* ptr2 = &num2;

	std::cout << *ptr1 << std::endl;
	std::cout << *ptr2 << std::endl;

	SwapPointer(ptr1, ptr2);

	std::cout << *ptr1 << std::endl;
	std::cout << *ptr2 << std::endl;
	return 0;
}

//³» ´ä
//void SwapPointer(int* ptr1, int* ptr2, int &num1, int &num2)
//{
//	ptr1 = &num2;
//	ptr2 = &num1;
//}
//
//int main(void)
//{
//	int num1 = 5;
//	int* ptr1 = &num1;
//	int num2 = 10;
//	int* ptr2 = &num2;
//
//	SwapPointer(ptr1, ptr2,num1,num2);
//
//	std::cout << "ptr1: " << *ptr1 << std::endl;
//	std::cout << "ptr2: " << *ptr2 << std::endl;
//	return 0;
//}