#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>

int main(void) {
	int arr[3]; //���� 3���� �޴� �迭
	int max = 0; //�ִ밪
	int min = 0; //�ּҰ�
	printf("���� 3���� �Է��ϼ���: ");
	for (int i = 0; i < 3; i++) {
		scanf_s("%d", &arr[i]); //�迭�� ���� 3�� �Է¹ޱ�
	}
	max = arr[0];
	min = arr[0];

	for (int i = 0; i < 3; i++) { //max���ϱ�
		if (max < arr[i])
			max = arr[i];
	}

	for (int i = 0; i < 3; i++) { //min���ϱ�
		if (min > arr[i])
			min = arr[i];
	}

	printf("max: %d min: %d", max, min);
	return 0;
}

