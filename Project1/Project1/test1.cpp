#include <iostream>
#include<stdio.h>
#include <Windows.h>
#include <stdlib.h>
using namespace std;


/*
* 
*
int main(void) {

	
//����1

	float gravity = 0.17;
	float b = 78, c = 62, d = 1;

	d = gravity * (b + c);

	printf("���� �߷��� ������ 17%%�̶�� �Ѵ�.\n"

		"Num1�� �����԰� 78kg�̰� \n"

		"Num2�� �����԰� 62kg�� �� \n"

		"�޿��� ���� ������ ���� : %.3fKg\n", d);

	printf("\n");

	//����2

	int e = 0X3F2D, f = 0731, g = 0;
	g = e + f;

	printf("0X3F2D(16����)�� 0731(8����)�� ���� \n"
		"%d + %d = %d\n", e, f, g);

	system("Pause");

	


	//����3
	const int Bit = 12220496;
	const int Eth = 393400;

	float myBit = 0.846;
	float myEth = 12.34;
	
	float ResultBit = 1;
	float ResultEth = 1;
	
	printf("======================\n");
	printf("�̸�: ��ȭ��\n");
	printf("�Ҽ�: Bit coin\n");

	printf("======================\n");
	printf("����: 0.846bit\n");
	printf("�ü�: 12,220,496��(1BIT)\n");
	ResultBit = myBit * Bit;
	printf("ȯ��: %.f��\n", ResultBit);
	
	printf("======================\n");

	//�̴�����
	printf("����: 12.34Eth\n");
	printf("�ü�: 393,400��\n");
	ResultEth = myEth * Eth;
	printf("ȯ��: %.f��\n", ResultEth);

	printf("======================\n");

	system("pause");

	return 0;

}
*/

int main(void) {

	const int Bit = 12993000; //����Ʈ���� �ü�
	const int Eoth = 3022; //���̿��� �ü�
	const float dollar = 1148.81; //�� �޷��ü�

	float myBit = 1.72; //���� ������ �ִ� ��Ʈ����
	float myEoth = 13.27; //���� ������ �ִ� �̿���8

	
	printf("======================\n");
	printf("        ��Ʈ����      \n");
	printf("======================\n");
	printf("����: %3.2fbit\n", myBit);
	printf("�޷�: $%.f\n", Bit * dollar);
	printf("��ȭ: %.f��\n", myBit*Bit);
	printf("�ü�: %d��\n", Bit);
	
	printf("======================\n");
	printf("         �̿���       \n");
	printf("======================\n");
	printf("����: %4.2fEOS\n", myEoth);
	printf("�޷�: $%.f\n", Eoth*dollar);;
	printf("��ȭ: %.2f��\n", myEoth*Eoth);
	printf("�ü�: %d��\n", Eoth);


	return 0;
}