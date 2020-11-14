#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>

int main(void) {
	int arr[3]; //정수 3개를 받는 배열
	int max = 0; //최대값
	int min = 0; //최소값
	printf("정수 3개를 입력하세요: ");
	for (int i = 0; i < 3; i++) {
		scanf_s("%d", &arr[i]); //배열에 정수 3개 입력받기
	}
	max = arr[0];
	min = arr[0];

	for (int i = 0; i < 3; i++) { //max구하기
		if (max < arr[i])
			max = arr[i];
	}

	for (int i = 0; i < 3; i++) { //min구하기
		if (min > arr[i])
			min = arr[i];
	}

	printf("max: %d min: %d", max, min);
	return 0;
}

