#include <stdio.h>

int main()
{
	int num1 = 0;
	int size;

	size = sizeof num1;    // 변수 num1의 자료형 크기를 구함

	printf("num1의 크기: %d\n", size);

	/* sizeof 방식 3가지 */
	// sizeof 표현식;
	// sizeof(자료형);
	// sizeof(표현식);

	printf("char: %d, short: %d, int: %d, long: %d, long long: %d\n",
		sizeof(char),				// 1: sizeof로 char 자료형 크기 구하기
		sizeof(short),			// 2: sizeof로 short 자료형 크기 구하기
		sizeof(int),				// 4: sizeof로 int 자료형 크기 구하기
		sizeof(long),				// 4: sizeof로 long 자료형 크기 구하기
		sizeof(long long)		// 8: sizeof로 long long 자료형 크기 구하기
	);

	return 0;
}