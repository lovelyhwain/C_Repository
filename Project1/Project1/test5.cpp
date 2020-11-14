#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>



int main(void) {

	setbuf(stdout, NULL);

	int x = 0;

	scanf("%d", &x);
	fflush(stdout);

	printf("%s", (x>=5) ? "5보다 크거나 같다\n":"5보다 작다\n");


}


	/*
	float n1 = 0.0;
	float n2 = 0.0;
	float result = 0.0;

	char op; //연산자


	printf("정수 두 개를 입력하세요:");
	scanf("%f %c %f", &n1, &op, &n2);

	if (op == '+') {
		result = n1 + n2;
		printf("%f + %f = %3.1f\n", n1, n2, result);
	}
	else if (op == '-') {
		result = n1 - n2;
		printf("%f - %f = %3.1f\n", n1, n2, result);
	}
	else if (op == '*') {
		result = n1 * n2;
		printf("%f * %f = %3.1f\n", n1, n2, result);
	}
	else if (op == '/') {
		result = n1 / n2;
		printf("%f / %f = %3.1f\n", n1, n2, result);
	}
	else if (op == '%') {
		result = (int)n1 % (int)n2;
		printf("%f %% %f = %3.1f\n", n1, n2, result);
	}
	else{
		printf("경고!! +, -, *, /, % 외의 연산자가 들어왔습니다. 다시 입력해주세요\n");
	}

}

*/


/*
int main(void) {

	float n1 = 0.0;
	float n2 = 0.0;
	float result = 0.0;
	
	int num = 0;

	printf("정수 두 개를 입력하세요:");
	scanf("%f %f", &n1, &n2);

	printf("어떤 연산을 원하세요?\n");
	printf("1. 덧셈\n");
	printf("2. 뺄셈\n");
	printf("3. 곱셈\n");
	printf("4. 나눗셈\n");
	printf("5. 나머지\n");

	printf("원하는 연산의 번호를 눌러주세요: ");
	scanf("%d", &num);

	
	if (num == 1) {
		result = n1 + n2;
		printf("%f + %f = %3.1f\n", n1, n2, result);
	}									 
	else if (num == 2) {						 
		result = n1 - n2;				 
		printf("%f - %f = %3.1f\n", n1, n2, result);
	}									
	else if (num == 3) {						
		result = n1 * n2;				
		printf("%f * %f = %3.1f\n", n1, n2, result);
	}									 
	else if (num == 4) {						 
		result = n1 / n2;				 
		printf("%f / %f = %3.1f\n", n1, n2, result);
	}
	else if (num == 5) {
		result = n1 % n2;
		printf("%f / %f = %3.1f\n", n1, n2, result);

	else {


	}
	return 0;
}

*/