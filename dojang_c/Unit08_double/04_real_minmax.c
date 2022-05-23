#include <stdio.h>
#include <float.h>

int main()
{
	float num1 = FLT_MIN;         // float 자료형의 양수 최소값
	float num2 = FLT_MAX;         // float 자료형의 양수 최대값
	double num3 = DBL_MIN;        // double 자료형의 양수 최소값
	double num4 = DBL_MAX;        // double 자료형의 양수 최대값
	long double num5 = LDBL_MIN;  // long double 자료형의 양수 최소값
	long double num6 = LDBL_MAX;  // long double 자료형의 양수 최대값

	printf("%.40f %.2f\n", num1, num2);
	printf("%e %e\n", num3, num4);
	printf("%Le %Le\n", num5, num6);

	return 0;
}