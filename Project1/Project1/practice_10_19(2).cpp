#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	 
	int arr[5] = { 3,2,5,6,7 };
	int i = 0;

	int max = 0, min = 0;

	max = arr[0];
	min = arr[0];

	for (i = 0; i < 5; i++) {
		
		if (max < arr[i])
			max = arr[i];
	}

	for (i = 0; i < 5; i++) {
		
		if (min > arr[i])
			min = arr[i];
	}

	printf("max: %d min: %d", max, min);


	return 0;
}