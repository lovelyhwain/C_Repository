#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
const int& maxInt(int a, int b);

int main(void) {
	int i = 12, j = 13;
	int k = maxInt(i, j);
	printf("&k = %p, maxInt()= %p\n", &k, &maxInt(i, j));

	return 0;
}

const int& maxInt(int a, int b) {
	printf("&a = %p, &b=%p\n", &a, &b);

	return (a > b) ? a : b;
}