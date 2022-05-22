#include <stdio.h>
#include <stdint.h>

int main()
{
	// C99 표준부터는 stdint.h 헤더 파일이 추가
	// stdint의 최소, 최댓값은 stdint.h 헤더 파일 안에 정의

	int8_t num1 = INT8_MIN;			//  8비트 부호있는 정수형
	int16_t num2 = INT16_MIN;		// 16비트 부호있는 정수형
	int32_t num3 = INT32_MIN;		// 32비트 부호있는 정수형
	int64_t num4 = INT64_MIN;		// 64비트 부호있는 정수형

	printf("부호있는 정수 최소값: %d %d %d %lld\n", num1, num2, num3, num4);

	num1 = INT8_MAX;			//  8비트 부호있는 정수형
	num2 = INT16_MAX;		// 16비트 부호있는 정수형
	num3 = INT32_MAX;		// 32비트 부호있는 정수형
	num4 = INT64_MAX;		// 64비트 부호있는 정수형

	printf("부호있는 정수 최대값: %d %d %d %lld\n", num1, num2, num3, num4);

	uint8_t num5 = UINT8_MAX;		//  8비트 부호없는 정수형
	uint16_t num6 = UINT16_MAX;	// 16비트 부호없는 정수형
	uint32_t num7 = UINT32_MAX;	// 32비트 부호없는 정수형
	uint64_t num8 = UINT64_MAX;	// 64비트 부호없는 정수형

	printf("부호없는 정수 최대값: %u %u %u %llu\n", num5, num6, num7, num8);

	return 0;
}