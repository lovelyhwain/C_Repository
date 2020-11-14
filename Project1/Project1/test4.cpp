#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int n1,n2,n3,n4 = 0;
	int change=0;

	int m5000=0, m1000=0, m500=0, m100=0, m50=0, m10=0;

	printf("1000원~9999원이하의 거스름돈을 받으시오!\n");

	scanf("%d", &change);

	//7890

	if (change >= 5000) {
		m5000++; //5000원 1장
		change -= 5000; //2890
		m1000 = change;
		m1000 = m1000 / 1000; //1000원 2장
		change = change % 1000; // 890원

		if (change >= 500) { //거스름돈이 500원 이상인 경우
			m500++; //500원 1장
			change = change - 500; //m100 = 390원
			m100 = change / 100; //100원 1장
			change = change % 100; // 390%100=90원
			if (change >= 50) {
				m50++; //50원 1장
				change = change - 50; //40원
				m10 = change / 10;
			}
			else {//30원
				m50 = 0;
				m10 = change / 10;

			}
		}
		else { //거스름돈이 500원 미만인 경우
			m100 = change; //430원
			m100 = change/100; //100원이 4개 
			change = change - (m100 * 100); //30원
			if (change >= 50) {//잔돈이 70원일경우
				m50++;
				change = change - 50; //20원 남음
				m10 = change / 10;
			}
			else {//잔돈이 40원인 경우
				m50 = 0;
				m10 = change / 10;
			}
		}

	}

	else { //5000원 미만일경우 //4850원
		m5000 = 0;
		m1000 = change / 1000; //1000원이 4장
		change = change - (m1000 * 1000); //850원

		if (change >= 500) { //잔돈이 500원 이상인 경우 //850원일때
			m500++; //500원 1장
			change = change - 500;//350원
			m100 = change / 100;//100원이 3장
			change = change - (m100 * 100); //잔돈이 50원

			if (change >= 50) {//잔돈이 70원일경우
				m50++;
				change = change - 50; //20원 남음
				m10 = change / 10;
			}
			else {//잔돈이 40원인 경우
				m50 = 0;
				m10 = change / 10;
			}

		}

		else { //거스름돈이 500원 미만인 경우
			m100 = change; //430원
			m100 = change / 100; //100원이 4개 
			change = change - (m100 * 100); //30원
			if (change >= 50) {//잔돈이 70원일경우
				m50++;
				change = change - 50; //20원 남음
				m10 = change / 10;
			}
			else {//잔돈이 40원인 경우
				m50 = 0;
				m10 = change / 10;
			}
		}


	}

	printf("===============================");
	printf("거스름돈은\n");
	printf("5000원: %d장\n",m5000 );
	printf("1000원: %d장\n",m1000 );
	printf("500원: %d장\n", m500);
	printf("100원: %d장\n",m100 );
	printf("50원: %d장\n",m50 );
	printf("10원: %d장\n",m10 );

	

	return 0;
}