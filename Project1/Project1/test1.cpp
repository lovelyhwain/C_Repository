#include <iostream>
#include<stdio.h>
#include <Windows.h>
#include <stdlib.h>
using namespace std;


/*
* 
*
int main(void) {

	
//문제1

	float gravity = 0.17;
	float b = 78, c = 62, d = 1;

	d = gravity * (b + c);

	printf("달의 중력은 지구의 17%%이라고 한다.\n"

		"Num1의 몸무게가 78kg이고 \n"

		"Num2의 몸무게가 62kg일 때 \n"

		"달에서 각각 무게의 총합 : %.3fKg\n", d);

	printf("\n");

	//문제2

	int e = 0X3F2D, f = 0731, g = 0;
	g = e + f;

	printf("0X3F2D(16진수)와 0731(8진수)의 합은 \n"
		"%d + %d = %d\n", e, f, g);

	system("Pause");

	


	//문제3
	const int Bit = 12220496;
	const int Eth = 393400;

	float myBit = 0.846;
	float myEth = 12.34;
	
	float ResultBit = 1;
	float ResultEth = 1;
	
	printf("======================\n");
	printf("이름: 최화인\n");
	printf("소속: Bit coin\n");

	printf("======================\n");
	printf("매입: 0.846bit\n");
	printf("시세: 12,220,496원(1BIT)\n");
	ResultBit = myBit * Bit;
	printf("환전: %.f원\n", ResultBit);
	
	printf("======================\n");

	//이더리움
	printf("매입: 12.34Eth\n");
	printf("시세: 393,400원\n");
	ResultEth = myEth * Eth;
	printf("환전: %.f원\n", ResultEth);

	printf("======================\n");

	system("pause");

	return 0;

}
*/

int main(void) {

	const int Bit = 12993000; //현비트코인 시세
	const int Eoth = 3022; //현이오스 시세
	const float dollar = 1148.81; //현 달러시세

	float myBit = 1.72; //내가 가지고 있는 비트코인
	float myEoth = 13.27; //내가 가지고 있는 이오스8

	
	printf("======================\n");
	printf("        비트코인      \n");
	printf("======================\n");
	printf("코인: %3.2fbit\n", myBit);
	printf("달러: $%.f\n", Bit * dollar);
	printf("원화: %.f원\n", myBit*Bit);
	printf("시세: %d원\n", Bit);
	
	printf("======================\n");
	printf("         이오스       \n");
	printf("======================\n");
	printf("코인: %4.2fEOS\n", myEoth);
	printf("달러: $%.f\n", Eoth*dollar);;
	printf("원화: %.2f원\n", myEoth*Eoth);
	printf("시세: %d원\n", Eoth);


	return 0;
}