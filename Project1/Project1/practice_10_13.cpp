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

	static int tries = 0; //시도횟수

	int num = 1;

	//char decode1;
	//char decode2;
	//char decode3;


	while (num < 2) {


		printf("단어 세글자를 하나씩 입력하세요: \n");
		scanf("%c %c %c", &a, &b, &c);
		getchar();

		tries++;

		//enocde식
		encode1 = a + 3;
		encode2 = b + 1;
		encode3 = c + 5;

		printf("%c %c %c가 나왔습니다\n", encode1, encode2, encode3);

		if ((a == answer1) && (b == answer2) && (c == answer3)) {
			printf("성공했습니다\n");
			printf("당신의 최종횟수는 %d번입니다\n", tries);
			num = 3;
		}
		else {
			printf("당신의 현재 시도횟수는 %d번입니다\n", tries);
			printf("다시 시도하고싶으면 숫자 1을 입력하고 그만하고싶으면 숫자 2를 입력하세요\n");
			scanf("%d", &num);
			getchar();
		
		}

		num = (num > 2 ? 3 : 1);
		
	}
	system("pause");

	return 0;
}




//decode식
//decode1 = encode1 - 3;
//decode2 = encode2 - 1 ;
//decode3 = encode3 - 5;

//printf("%c %c %c\n", decode1, decode2, decode3);


