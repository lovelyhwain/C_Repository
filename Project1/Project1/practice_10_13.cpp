#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main(void) {

	char answer1 = 'f';
	char answer2 = 'u';
	char answer3 = 'n';

	char a;
	char b;
	char c;

	char encode1;
	char encode2;
	char encode3;

	static int tries = 0; //�õ�Ƚ��

	int num = 1;

	//char decode1;
	//char decode2;
	//char decode3;


	while (num < 2) {


		printf("�ܾ� �����ڸ� �ϳ��� �Է��ϼ���: \n");
		scanf("%c %c %c", &a, &b, &c);
		getchar();

		tries++;

		//enocde��
		encode1 = a + 3;
		encode2 = b + 1;
		encode3 = c + 5;

		printf("%c %c %c�� ���Խ��ϴ�\n", encode1, encode2, encode3);

		if ((a == answer1) && (b == answer2) && (c == answer3)) {
			printf("�����߽��ϴ�\n");
			printf("����� ����Ƚ���� %d���Դϴ�\n", tries);
			num = 3;
		}
		else {
			printf("����� ���� �õ�Ƚ���� %d���Դϴ�\n", tries);
			printf("�ٽ� �õ��ϰ������ ���� 1�� �Է��ϰ� �׸��ϰ������ ���� 2�� �Է��ϼ���\n");
			scanf("%d", &num);
			getchar();
		
		}

		num = (num > 2 ? 3 : 1);
		
	}
	system("pause");

	return 0;
}




//decode��
//decode1 = encode1 - 3;
//decode2 = encode2 - 1 ;
//decode3 = encode3 - 5;

//printf("%c %c %c\n", decode1, decode2, decode3);


