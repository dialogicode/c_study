#include <stdio.h>

int main()
{
	float num1 = 0.0f;
	double num2 = 0.0;
	long double num3 = 0.0l;

	printf("float: %d, double: %d, long double: %d",
		sizeof(num1), // 4: float 자료형의 크기
		sizeof(num2), // 8: double 자료형의 크기
		sizeof(num3)  // 8: long double 자료형의 크기 - 12가 나왔네?
	);

	return 0;
}