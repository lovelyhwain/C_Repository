#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Select_menu(int in);

int main(void) {

	int iin = 0;
	int result = 0;

	printf("========================\n");
	printf("���ϴ� ����� ��ȣ�� �Է��ϼ���\n");
	printf("1.�ݶ� 2.���̴� 3. ������ 4.��Ÿ����\n");
	scanf("%d", &iin);

	Select_menu(iin);

	return 0;
}


void Select_menu(int in) {

	switch (in)
	{
	case 1:
		printf("�ݶ� ���ϴ�.\n");
		break;
	case 2:
		printf("���̴ٸ� ���ϴ�.\n");
		break;
	case 3:
		printf("�������� ���ϴ�.\n");
		break;
	case 4:
		printf("��Ÿ������ ���ϴ�.\n");
		break;

	default:
		printf("���� �޴��Դϴ�.\n");
	}

}



/*
int plusCalc(int n1, int n2);


int main(void) {

	int num1 = 0, num2 = 0;
	int result = 0; //�����

	printf("���� 2���� �Է��ϼ���: ");
	scanf("%d %d", &num1, &num2);
	fflush(stdout);

	result = plusCalc(num1, num2);
	printf("�����������: %d\n", result);

	return 0;
}

int plusCalc(int n1, int n2) {
	int re = 0;
	re = n1 + n2;
	return re;
}

*/