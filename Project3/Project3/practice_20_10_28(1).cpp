#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
#define SENTS_SIZE 100

 int main(void) {

	int choice = 0;

	char sentsRead[SENTS_SIZE];
	char sentsWrite[SENTS_SIZE];

	FILE* filep=NULL;

	printf("첫 사용자라면 파일기록부터 해주세요.무엇을 하기겠습니까?\n");
	
	while (choice!=3) {
		printf("무엇을 하시겠습니까\n");
		printf("1.기록 2.읽기 3.중단\n");
		scanf("%d", &choice);

		if (choice == 1) {
			printf("기록하세요\n");
			filep = fopen("test.txt", "a");
			scanf(" %[^\n]s", sentsWrite);
			fprintf(filep, "%s\n", sentsWrite);
			puts(sentsWrite);
			printf("\n");
			fclose(filep);
		}
		else if (choice == 2) {

			filep = fopen("test.txt", "r");
			fgets(sentsRead, sizeof(sentsRead), filep);

			//여러줄 읽기
			printf("===========================\n");
			printf("%s", sentsRead);
			for (int i = 0; i < 10; i++) {
				//for(int i=0; feof(filep)==0; i++) {
				if (fgets(sentsRead, sizeof(sentsRead), filep) == NULL) {
					break;
				}
				printf("%s", sentsRead);
			}
			printf("===========================\n");
			fclose(filep);
		}
	}
	return 0;
}



/*
int main(void) {

	char ss[20];
	FILE* filep;
	filep = fopen("text.txt", "r");

	fgets(ss, sizeof(ss), filep); //기록하기
	//puts(ss); //읽어서 여기 담기

	printf("%s", ss);

	fclose(filep);

	return 0;
}


int main(void) {

	char ss[50]; //읽어올때
	char wr[50]; //집어넣을때

	FILE* filep;
	filep = fopen("test.txt", "a");
	scanf("%s", wr);
	fprintf(filep, "%s", wr);
	puts(wr);

	fclose(filep);
	return 0;
}

*/