#include <stdio.h>

int main()
{
	// 지수표기법으로 300000
	float num1 = 3.e5f;

	// 지수표기법으로 -0.013827
	double num2 = -1.3827e-2;

	// 지수표기법으로 5210000000
	long double num3 = 5.21e+9L;

	printf("%f %f %Lf\n", num1, num2, num3);

	printf("%e %e %Le\n", num1, num2, num3);

	return 0;
}