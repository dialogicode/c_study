#include <stdio.h>
#include <limits.h>

int main()
{
	char num1 = CHAR_MAX;
	short num2 = SHRT_MAX;
	int num3 = INT_MAX;
	long num4 = LONG_MAX;
	long long num5 = LLONG_MAX;

	printf("부호있는 정수형 최대값: %d %d %d %ld %lld\n", num1, num2, num3, num4, num5);

	// 오버플로우
	num1 = num1 + 1;
	num2 = num2 + 1;
	num3 = num3 + 1;
	num4 = num4 + 1;
	num5 = num5 + 1;
	printf("오버플로우 발생 시키기: %d %d %d %ld %lld\n", num1, num2, num3, num4, num5);

	return 0;
}