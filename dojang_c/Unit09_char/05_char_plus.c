#include <stdio.h>

int main()
{
	// a는 ASCII 코드값 97
	// 97에 1을 더하여 98 = b
	printf("%c %d\n", 'a' + 1, 'a' + 1);
	printf("%c %d\n", 97 + 1, 97 + 1);

	char c1 = 'a';
	printf("%c %d\n", c1 + 1, c1 + 1);

	return 0;
}