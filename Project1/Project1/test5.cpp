#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>



int main(void) {

	setbuf(stdout, NULL);

	int x = 0;

	scanf("%d", &x);
	fflush(stdout);

	printf("%s", (x>=5) ? "5���� ũ�ų� ����\n":"5���� �۴�\n");


}


	/*
	float n1 = 0.0;
	float n2 = 0.0;
	float result = 0.0;

	char op; //������


	printf("���� �� ���� �Է��ϼ���:");
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
		printf("���!! +, -, *, /, % ���� �����ڰ� ���Խ��ϴ�. �ٽ� �Է����ּ���\n");
	}

}

*/


/*
int main(void) {

	float n1 = 0.0;
	float n2 = 0.0;
	float result = 0.0;
	
	int num = 0;

	printf("���� �� ���� �Է��ϼ���:");
	scanf("%f %f", &n1, &n2);

	printf("� ������ ���ϼ���?\n");
	printf("1. ����\n");
	printf("2. ����\n");
	printf("3. ����\n");
	printf("4. ������\n");
	printf("5. ������\n");

	printf("���ϴ� ������ ��ȣ�� �����ּ���: ");
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