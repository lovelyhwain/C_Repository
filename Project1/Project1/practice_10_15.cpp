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

	printf("���� �ϳ��� �Է����ּ���:");
	scanf("%d", &num);
	fflush(stdout);
	
	if (num % 2 == 0) {
		for (int i = 1; i < num + 1; i++) {
			if (i % 2 == 1) {
				continue;
			}
			printf("%d¦��\n", i);
		}
	}
	
	else{
		for (int i = 1; i < num + 1; i++) {
			if (i % 2 == 0) {
				continue;
			}
			printf("%dȦ��\n", i);
		}
	}

	return 0;
}