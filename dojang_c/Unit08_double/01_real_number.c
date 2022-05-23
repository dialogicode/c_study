#include <stdio.h>

int main()
{
	float num1 = 0.1F;            // 단정밀도 부동소수점 변수. float 상수에는 f or F를 붙임
	double num2 = 3867.215820;    // 배정밀도 부동소수점 변수. double 상수에는 아무것도 붙이지 않음
	long double num3 = 0.1L;      // 배정밀도 부동소수점 변수. long double 상수에는 l or L을 붙인다

	// float과 double은 %f로 출력, long double은 %Lf로 출력
	printf("%f %f %Lf\n", num1, num2, num3);

	return 0;
}