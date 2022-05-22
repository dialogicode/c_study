#include <stdio.h>

int main()
{
	unsigned char num1 = 200;					// 1바이트 부호없는 정수
	unsigned short num2 = 60000;			// 2바이트 부호없는 정수
	unsigned int num3 = 123456789;  	// 4바이트 부호없는 정수
	unsigned long num4 = 123456789; 	// 4바이트 부호없는 정수
	unsigned long long num5 = 1234567890123456789;	// 8바이트 부호없는 정수

	// char, short, int는 %u로 출력
	// long은 %lu, long long은 %llu로 출력
	printf("%d %d %d %ld %lld\n", num1, num2, num3, num4, num5);

	return 0;
}