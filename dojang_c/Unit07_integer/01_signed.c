#include <stdio.h>

int main()
{
	char num1 = -10;				// 1바이트 부호있는 정수
	short num2 = 30000;			// 2바이트 부호있는 정수
	int num3 = -1234567890; // 4바이트 부호있는 정수
	long num4 = 1234567890; // 4바이트 부호있는 정수
	long long num5 = -1234567890123456789;	// 8바이트 부호있는 정수

	// char, short, int는 %d로 출력
	// long은 %ld, long long은 %lld로 출력
	printf("%d %d %d %ld %lld\n", num1, num2, num3, num4, num5);

	return 0;
}