#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int n1,n2,n3,n4 = 0;
	int change=0;

	int m5000=0, m1000=0, m500=0, m100=0, m50=0, m10=0;

	printf("1000��~9999�������� �Ž������� �����ÿ�!\n");

	scanf("%d", &change);

	//7890

	if (change >= 5000) {
		m5000++; //5000�� 1��
		change -= 5000; //2890
		m1000 = change;
		m1000 = m1000 / 1000; //1000�� 2��
		change = change % 1000; // 890��

		if (change >= 500) { //�Ž������� 500�� �̻��� ���
			m500++; //500�� 1��
			change = change - 500; //m100 = 390��
			m100 = change / 100; //100�� 1��
			change = change % 100; // 390%100=90��
			if (change >= 50) {
				m50++; //50�� 1��
				change = change - 50; //40��
				m10 = change / 10;
			}
			else {//30��
				m50 = 0;
				m10 = change / 10;

			}
		}
		else { //�Ž������� 500�� �̸��� ���
			m100 = change; //430��
			m100 = change/100; //100���� 4�� 
			change = change - (m100 * 100); //30��
			if (change >= 50) {//�ܵ��� 70���ϰ��
				m50++;
				change = change - 50; //20�� ����
				m10 = change / 10;
			}
			else {//�ܵ��� 40���� ���
				m50 = 0;
				m10 = change / 10;
			}
		}

	}

	else { //5000�� �̸��ϰ�� //4850��
		m5000 = 0;
		m1000 = change / 1000; //1000���� 4��
		change = change - (m1000 * 1000); //850��

		if (change >= 500) { //�ܵ��� 500�� �̻��� ��� //850���϶�
			m500++; //500�� 1��
			change = change - 500;//350��
			m100 = change / 100;//100���� 3��
			change = change - (m100 * 100); //�ܵ��� 50��

			if (change >= 50) {//�ܵ��� 70���ϰ��
				m50++;
				change = change - 50; //20�� ����
				m10 = change / 10;
			}
			else {//�ܵ��� 40���� ���
				m50 = 0;
				m10 = change / 10;
			}

		}

		else { //�Ž������� 500�� �̸��� ���
			m100 = change; //430��
			m100 = change / 100; //100���� 4�� 
			change = change - (m100 * 100); //30��
			if (change >= 50) {//�ܵ��� 70���ϰ��
				m50++;
				change = change - 50; //20�� ����
				m10 = change / 10;
			}
			else {//�ܵ��� 40���� ���
				m50 = 0;
				m10 = change / 10;
			}
		}


	}

	printf("===============================");
	printf("�Ž�������\n");
	printf("5000��: %d��\n",m5000 );
	printf("1000��: %d��\n",m1000 );
	printf("500��: %d��\n", m500);
	printf("100��: %d��\n",m100 );
	printf("50��: %d��\n",m50 );
	printf("10��: %d��\n",m10 );

	

	return 0;
}