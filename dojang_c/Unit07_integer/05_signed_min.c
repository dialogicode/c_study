#include <stdio.h>
#include <limits.h>

int main()
{
	char num1 = CHAR_MIN;
	short num2 = SHRT_MIN;
	int num3 = INT_MIN;
	long num4 = LONG_MIN;
	long long num5 = LLONG_MIN;

	printf("부호있는 정수형 최소값: %d %d %d %ld %lld\n", num1, num2, num3, num4, num5);

	// 언더플로우
	num1 = num1 - 1;
	num2 = num2 - 1;
	num3 = num3 - 1;
	num4 = num4 - 1;
	num5 = num5 - 1;
	printf("언더플로우 발생 시키기: %d %d %d %ld %lld\n", num1, num2, num3, num4, num5);

	return 0;
}