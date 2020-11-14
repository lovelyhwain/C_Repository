#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//시도2

int main(void) {

	int answ[6] = { 0, };
	int num = 0;
	int tries = 0;
	int i = 0;

	srand(time(NULL));

	while (1) {
		num = rand() % 100 + 1;
		if (num >= 90) {
			answ[tries] = num;
			for (int i = 0; i < tries; i++) //난수가 겹치는지 확인
				if (answ[i] == num) 
					tries--;
			tries++;
		}
		if (tries == 6)
			break;
	}

	for (i = 0; i < 6; ++i) 
		printf("answ[%d]=%4d\n", i, answ[i]);
	

	return 0;
}
	



	//시도1
	/*
	while (1) {
		num = rand() % 100 + 1;
		if (num >= 90) {
			answ[tries] = num;
			tries++;
			if (tries == 6) {
				break;
			}
		}
	}
	*/

	/*
	for (int i = 0; i < 6; i++) {
		
		num = rand() % 100 + 1;
		if (num >= 90) {
			answ[i] = rand() % 45 + 1;
		}

	}
	*/

