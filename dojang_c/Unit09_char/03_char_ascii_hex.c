#include <stdio.h>

int main()
{
	// a 의 ASCII 코드값 0x61 저장
	char c1 = 0x61;

	// b 의 ASCII 코드값 0x62 저장
	char c2 = 0x62;

	// char를 %c로 출력하면 문자가 출력
	// char를 %d로 출력하면 정수값이 출력
	// char를 %x로 출력하면 16진수로 출력
	printf("%c, %d, 0x%x\n", c1, c1, c1);
	printf("%c, %d, 0x%x\n", c2, c2, c2);

	return 0;
}