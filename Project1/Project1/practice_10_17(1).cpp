#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void changeMoney(int m);

int main(void) {

    int money = 0;

    printf("�ݾ��� �Է��ϼ���: ");
    scanf("%d", &money);

    changeMoney(money);
    return 0;
}

void changeMoney(int m) {
    int money = m;
    int m50000 = 0, m10000 = 0, m5000 = 0;
    int m1000 = 0, m500 = 0, m100 = 0, m50 = 0, m10 = 0;
    int m5 = 0, m1 = 0;

    while (money != 0) { //���� 211,510���� ���
        m50000 = money / 50000; // m50000=4��
        money = money - (m50000 * 50000); //11,510�� ����

        m10000 = money / 10000; // 11,510 / 10000 = 1
        money = money - (m10000 * 10000); //1,510���� ����

        m5000 = money / 5000;
        money = money - (m5000 * 5000);

        m1000 = money / 1000; // 1,510 /1000 =1��
        money = money - (m1000 * 1000); //510�� ����

        m500 = money / 500; // 510/500 = 1��
        money = money - (m500 * 500); //10�� ����

        m100 = money / 100;
        money = money - (m100 * 100);

        m50 = money / 50;
        money = money - (m50 * 50);

        m10 = money / 10; // 10/10 = 1��
        money = money - (m10 * 10);

        m5 = money / 5;
        money = money - (m5 * 5);

        m1 = money / 1;
        money = money - (m1 * 1);
    }
    printf("50000����: %d��\n10000����: %d��\n5000����: %d��\n1000����: %d��\n500����: %d��\n100����: %d��\n50����: %d��\n10����: %d��\n5����: %d��\n1����: %d��\n", m50000, m10000, m5000, m1000, m500, m100, m50, m10, m5,m1);
}