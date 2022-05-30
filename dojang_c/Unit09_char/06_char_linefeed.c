#include <stdio.h>

int main()
{
	char c1 = 'a'; // 문자 a
	char c2 = 'b'; // 문자 b
	char linefeed = '\n'; // 제어문자 \n

	printf("%c%c%c%c", c1, linefeed, c2, linefeed); // 제어문자도 %c로 출력 가능

	return 0;
}

/* 
	자주 사용하는 제어문자

	10진수	16진수	문자	표기법
	10			0x0A		LF		\n
	13			0x0D		CR		\r
	9				0x09		TAB		\t

	CR : Carriage Return 타자기 앞으로 오기
	LF : Line Feed 타자기 한줄 위로

	운영체제별 줄바꿈 규칙
	Windows	: CR LF
	Unix, Linux, OS X : LF
	Mac OS 9(클래식) : CR
 */