#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 100 //MAX_LENGTH ������� �����

int main(void)
{
	int i=0, sLength=0;
	char str[MAX_LENGTH]; //char�� �迭 �����

	scanf("%[^\n]s", str); //\n�� �޾��ֱ�
	sLength = strlen(str);

	for (i = sLength - 1; i >= 0; i--) //�ݴ�� ����ϱ�
		printf("%c", str[i]); 
	
}

/*
void Palim(char arr[], int length);


int main(void) {

	int i = 0;
	char arr[MAX_LENGTH];
	printf("���ڿ��� �Է��ϼ���: ");
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


