#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Select_menu(int in);

int main(void) {

	int iin = 0;
	int result = 0;

	printf("========================\n");
	printf("원하는 음료수 번호를 입력하세요\n");
	printf("1.콜라 2.사이다 3. 오렌지 4.스타벅스\n");
	scanf("%d", &iin);

	Select_menu(iin);

	return 0;
}


void Select_menu(int in) {

	switch (in)
	{
	case 1:
		printf("콜라를 냅니다.\n");
		break;
	case 2:
		printf("사이다를 냅니다.\n");
		break;
	case 3:
		printf("오랜지를 냅니다.\n");
		break;
	case 4:
		printf("스타벅스를 냅니다.\n");
		break;

	default:
		printf("없는 메뉴입니다.\n");
	}

}



/*
int plusCalc(int n1, int n2);


int main(void) {

	int num1 = 0, num2 = 0;
	int result = 0; //결과값

	printf("정수 2개를 입력하세요: ");
	scanf("%d %d", &num1, &num2);
	fflush(stdout);

	result = plusCalc(num1, num2);
	printf("덧셈결과값은: %d\n", result);

	return 0;
}

int plusCalc(int n1, int n2) {
	int re = 0;
	re = n1 + n2;
	return re;
}

*/