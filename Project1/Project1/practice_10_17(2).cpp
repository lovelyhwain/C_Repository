#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

	int num = 0;
	int answer = 0;
	static int tries = 0;

	printf("1-100 ������ ���� �ϳ��� �Է��Ͻÿ�:");
	scanf("%d", &num);
	fflush(stdout);
	
	srand(time(NULL));
	answer = rand() % 100 + 1;
	
	//while (num != answer) {

	while (1) {
		if (num > answer) {
			printf("�Է��Ͻ� ���ڴ� ���亸�� Ů�ϴ�!\n");
			tries++;
			printf("����� ���� �õ� Ƚ���� %d���Դϴ�\n", tries);
			printf("�ٸ� ���ڸ� �Է����ּ���:\n");
			scanf("%d", &num);
		}
		else if (num < answer) {
			printf("�Է��Ͻ� ���ڴ� ���亸�� �۽��ϴ�!\n");
			tries++;
			printf("����� ���� �õ� Ƚ���� %d���Դϴ�\n", tries);
			printf("�ٸ� ���ڸ� �Է����ּ���:\n");
			scanf("%d", &num);
		}
		else if (num == answer) {
			printf("�����Դϴ�!!\n");
			tries++;
			printf("����� ���� �õ� Ƚ���� %d���Դϴ�\n", tries);
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