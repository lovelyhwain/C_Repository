#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
using namespace std;
#include <string>

struct data {
	int a;
	char* b;
};


int main() {
	struct data aData;

	aData.a = 100;
	aData.b = (char*)malloc(20);
	strcpy(aData.b, "Life is egg");

	printf("aData.a=%d\n", aData.a);
	printf("aData.b=%s\n", aData.b);

	free(aData.b);


	return 0;
}


/* 팩토리얼 문제

int Re(int n) {
	static int tries = 0;
	if (tries==3) {
		return 1;
	}
	else{
		tries++;
		return n * Re(n - 1);
	}

}

int main(void) {
	int num;

	printf("펙토리얼 계산할 값을 넣으세요\n");
	scanf("%d", &num);

	int result = Re(num);
	printf("result: %d\n", result);

	
	return 0;
}
*/

/*
	char arr[3][10] = { "가나다", "ABC", "테스트" };
	char(*data)[10];
	data = arr;

	int i;
	printf("%s %x\n", *(data), data);
	printf("%s %x\n", *(data+1), data[1]);
	printf("%s %x\n", *(data+2), data[2]);
	*/