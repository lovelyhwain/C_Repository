#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main(void) {

	//int stdID = 202083353; //�й�
	//char Name[20] = { "��ȭ��" }; //�̸�
	//int age = 20; //����

	FILE* fp = fopen("test.txt", "rt");
	char str[64];
	
	while (fgets(str,64,fp)) {
		printf("%s", str);
	}

	fclose(fp);

	/*
	FILE* fp = fopen("test.txt", "at");

	for (int i = 0; i < 100; i++) {
		fprintf(fp, "%d\n", i);
	}
	for (int i = 0; i < 100; i++) {
		fprintf(fp, "%d\n", i);
	}
	for (int i = 0; i < 100; i++) {
		fprintf(fp, "%d\n", i);
	}
	*/
	
}


	/*
	printf("���̵� �̸� ���̼����� �Է��ϼ���: ");

	scanf("%d %s %d", &stdID, Name, &age);

	fprintf(fp, "%d %s %d", stdID, Name, age); // fprintf�� ���� txt���Ϸ� �Ѱ��ش�. (�ܼ�->txt����)
	fclose(fp); //�Է��� �ڷ���� ���Ͽ� ����


	//����ȭ�ϰ� �ҷ����� �ܰ�
	fscanf(fp, "%d %s %d", &stdID, Name, &age); //fscanf�� ���� txt������ ���� ������ �����Ѵ�. (txt����->�ܼ�)
	printf("�й�: %d\n�̸�: %s\n����: %d\n", stdID, Name, age); //. printf�� ���� ����Ѵ�. (�ܼ� â�� ����Ѵ�.)
	*/

	//C:\Users\�����ɷ°����Ʒ� 403_15��\source\repos\Project1\Project1 �� �ؽ�Ʈ������ �����


