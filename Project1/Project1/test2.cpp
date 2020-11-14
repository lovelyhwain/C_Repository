#include <iostream>
#include <limits.h>
#include <stdint.h>

using namespace std;

int main(void) {

	int8_t n1 = INT8_MIN;
	int16_t n2 = INT16_MIN;
	int32_t n3 = INT32_MIN;
	int64_t n4 = INT64_MIN;

	printf("%d %d %d %ld %ld\n", n1, n2, n3, n4);


	return 0;
}


/*
	char n1 = CHAR_MIN;
	short n2 = SHRT_MIN;
	int n3 = INT_MIN;
	long n4 = LONG_MIN;
	long long n5 = LLONG_MIN;
*/