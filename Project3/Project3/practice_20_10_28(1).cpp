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

	printf("ù ����ڶ�� ���ϱ�Ϻ��� ���ּ���.������ �ϱ�ڽ��ϱ�?\n");
	
	while (choice!=3) {
		printf("������ �Ͻðڽ��ϱ�\n");
		printf("1.��� 2.�б� 3.�ߴ�\n");
		scanf("%d", &choice);

		if (choice == 1) {
			printf("����ϼ���\n");
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

			//������ �б�
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

	fgets(ss, sizeof(ss), filep); //����ϱ�
	//puts(ss); //�о ���� ���

	printf("%s", ss);

	fclose(filep);

	return 0;
}


int main(void) {

	char ss[50]; //�о�ö�
	char wr[50]; //���������

	FILE* filep;
	filep = fopen("test.txt", "a");
	scanf("%s", wr);
	fprintf(filep, "%s", wr);
	puts(wr);

	fclose(filep);
	return 0;
}

*/