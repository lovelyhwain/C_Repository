#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int a = 10;
	int b = 20;

	printf("before swap: %d %d\n", a, b);
	swap(a, b);
	printf("after swap: %d %d\n", a, b);

	return 0;
}


void swap(int num1, int num2) {
	int tmp;
	tmp = num1;
	num1 = num2;
	num2 = tmp;
}