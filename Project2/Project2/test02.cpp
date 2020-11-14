#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 100 //MAX_LENGTH 상수변수 만들기

int main(void)
{
	int i=0, sLength=0;
	char str[MAX_LENGTH]; //char형 배열 만들기

	scanf("%[^\n]s", str); //\n도 받아주기
	sLength = strlen(str);

	for (i = sLength - 1; i >= 0; i--) //반대로 출력하기
		printf("%c", str[i]); 
	
}

/*
void Palim(char arr[], int length);


int main(void) {

	int i = 0;
	char arr[MAX_LENGTH];
	printf("문자열을 입력하세요: ");
	scanf("%[^\n]s", arr);

	Palim(arr, strlen(arr));
	printf("%s\n", arr);
	return 0;
}

void Palim(char arrs[], int length) {
	int i = 0;
	char tmp[MAX_LENGTH];

	for (int i = 0; i < length; i++) {
		tmp[i] = arrs[length - (i + 1)];
	}
	printf("%s\n", arrs);
}
*/


