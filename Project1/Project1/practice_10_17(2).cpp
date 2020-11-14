#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

	int num = 0;
	int answer = 0;
	static int tries = 0;

	printf("1-100 사이의 정수 하나를 입력하시오:");
	scanf("%d", &num);
	fflush(stdout);
	
	srand(time(NULL));
	answer = rand() % 100 + 1;
	
	//while (num != answer) {

	while (1) {
		if (num > answer) {
			printf("입력하신 숫자는 정답보다 큽니다!\n");
			tries++;
			printf("당신의 현재 시도 횟수는 %d번입니다\n", tries);
			printf("다른 숫자를 입력해주세요:\n");
			scanf("%d", &num);
		}
		else if (num < answer) {
			printf("입력하신 숫자는 정답보다 작습니다!\n");
			tries++;
			printf("당신의 현재 시도 횟수는 %d번입니다\n", tries);
			printf("다른 숫자를 입력해주세요:\n");
			scanf("%d", &num);
		}
		else if (num == answer) {
			printf("정답입니다!!\n");
			tries++;
			printf("당신의 최종 시도 횟수는 %d번입니다\n", tries);
			break;
		}


	}
	
	return 0;
}

//printf("%d\n", rand()%10 );
/*
	time_t rawtime;
	time(&rawtime);
	printf("The current local time is: %s", ctime(&rawtime));

	printf("===================");

	*/