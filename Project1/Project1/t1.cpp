#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main(void) {

	int a=10, b=20;
	int cnt = 10;
	int *num = (int*)malloc(sizeof(int)*cnt);
	
	for (int i = 0; i < 10; i++) 
		num[i] = i + 1;
	
	for (int i = 0; i < 10; i++) 
		printf("%d\n", num[i]);
	
	free(num);

	return 0;
}



	/*
	int b[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* q[5];

	q[0] = b;
	q[1] = b + 2;
	q[2] = b + 4;
	q[3] = b + 6;
	q[4] = b + 8;
	q[3][2] = 55;

	printf("b: %p, q[0]: %p, q[1]: %p, q[2]: %p, q[3]: %p\n", b, q[0], q[1], q[2], q[3]);
	printf("*q[0]: %d\n", *q[0]);
	printf("*q[1]: %d\n", *q[1]);
	printf("*q[2]: %d\n", *q[2]);
	printf("*q[3]: %d\n", *q[3]);
	printf("*q[3][2]: %d, q[4][0]: %d\n", q[3][2], q[4][0]);
	*/





/*
char* p;
	char s[10] = "hello c";

	p = s;
	printf("%c\n", *p);
	printf("%c\n", *(p+1));
	printf("%c\n", *(p+2));

	
*/


/*
int main(void) {

	int salary[] = { 200,100,33,44,22 };
	int* current;
	int* endArray;
	int sum = 0;
	int arr_size = sizeof(salary) / sizeof(salary[0]);

	for (current = salary, endArray = salary + arr_size; current < endArray; current++) {
		sum += *current;
	}
	printf("sum: %d\n", sum);

	return 0;
}
*/