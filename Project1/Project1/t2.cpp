#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main(void) {

	//int stdID = 202083353; //학번
	//char Name[20] = { "최화인" }; //이름
	//int age = 20; //나이

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
	printf("아이디 이름 나이순으로 입력하세요: ");

	scanf("%d %s %d", &stdID, Name, &age);

	fprintf(fp, "%d %s %d", stdID, Name, age); // fprintf를 통해 txt파일로 넘겨준다. (콘솔->txt파일)
	fclose(fp); //입력한 자료들을 파일에 저장


	//파일화하고 불러오기 단계
	fscanf(fp, "%d %s %d", &stdID, Name, &age); //fscanf를 통해 txt파일의 값을 변수에 저장한다. (txt파일->콘솔)
	printf("학번: %d\n이름: %s\n나이: %d\n", stdID, Name, age); //. printf를 통해 출력한다. (콘솔 창에 출력한다.)
	*/

	//C:\Users\직업능력개발훈련 403_15번\source\repos\Project1\Project1 에 텍스트파일이 저장됨


