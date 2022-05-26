#include <stdio.h>

int main()
{
	// 문자 0 을 저장
	char c1 = '0';

	// 숫자 0 을 저장
	char c2 = 0;

	// 문자 상태로 0 출력
	// 문자 0 의 ASCII 코드 48 출력
	printf("%c, %d\n", c1, c1);

	// ASCII 코드 0 은 널문자 이므로 출력되지 않음
	// 정수 0 이 출력
	printf("%c, %d\n", c2, c2);

	return 0;
}