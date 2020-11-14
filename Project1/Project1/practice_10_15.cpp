#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>

using namespace std;

int main(void) {

	int num = 0;
	int result = 0;

	printf("정수 하나를 입력해주세요:");
	scanf("%d", &num);
	fflush(stdout);
	
	if (num % 2 == 0) {
		for (int i = 1; i < num + 1; i++) {
			if (i % 2 == 1) {
				continue;
			}
			printf("%d짝수\n", i);
		}
	}
	
	else{
		for (int i = 1; i < num + 1; i++) {
			if (i % 2 == 0) {
				continue;
			}
			printf("%d홀수\n", i);
		}
	}

	return 0;
}