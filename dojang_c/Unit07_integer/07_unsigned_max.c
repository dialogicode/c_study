#include <stdio.h>
#include <limits.h>

int main()
{
	// unsigned 의 최소값은 0

	unsigned char num1 = UCHAR_MAX;
	unsigned short num2 = USHRT_MAX;
	unsigned int num3 = UINT_MAX;
	unsigned long num4 = ULONG_MAX;
	unsigned long long num5 = ULLONG_MAX;

	printf("부호없는 정수형 최대값: %u %u %u %lu %llu\n", num1, num2, num3, num4, num5);

	// 오버플로우
	num1 = num1 + 1;
	num2 = num2 + 1;
	num3 = num3 + 1;
	num4 = num4 + 1;
	num5 = num5 + 1;
	printf("오버플로우 발생 시키기: %u %u %u %lu %llu\n", num1, num2, num3, num4, num5);

	return 0;
}