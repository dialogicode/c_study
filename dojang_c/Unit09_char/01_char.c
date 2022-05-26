#include <stdio.h>

int main()
{
	// 문자 변수를 선언하고 문자 a를 저장
	char c1 = 'a';

	// 문자 변수를 선언하고 문자 b를 저장
	char c2 = 'b';

	// char를 %c로 출력하면 문자가 출력
	// char를 %d로 출력하면 정수값이 출력
	printf("%c, %d\n", c1, c1);
	printf("%c, %d\n", c2, c2);

	return 0;
}