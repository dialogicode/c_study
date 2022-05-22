#include <stdio.h>

int main()
{
	// 오버플로우 : 타입에 저장할 수 있는 범위를 벗어난 큰 값을 할당

	// char에 저장할 수 있는 최대값 127 보다 더 큰 수를 할당
	char num1 = 128;
	// unsigned char에 저장할 수 있는 최대값 127 보다 더 큰 수를 할당
	unsigned char num2 = 256;

	printf("%d %u\n", num1, num2);

	// 언더플로우 : 타입에 저장할 수 있는 범위를 벗어난 작은 값을 할당
	num1 = -129;
	num2 = -1;
	printf("%d %u\n", num1, num2);

	return 0;
}