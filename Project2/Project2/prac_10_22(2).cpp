#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printSeats(int arr[4][6]);

int main(void) {

    int seats[4][6] = { 0, };
    char code1;
    int code2 = 0;
    static int totalSeats = 0;

    while (1) {
        printf("������ �¼��ڵ带 �Է��ϼ���\n");
        printf("(�빮��+����)>>");
        scanf("%c%d", &code1, &code2);
        fflush(stdout);

        if (seats[code1 - 65][code2 - 1] == 0) {
            seats[code1 - 65][code2 - 1] = 1;
            printSeats(seats);
        }
        else if (seats[code1 - 65][code2 - 1] == 1) {
            printf("�̹� ����Ǿ��ֽ��ϴ�. �ٽ� ����ּ���\n");
        }
        else if ((code1 < 65 || code1>69) || (code2 < 0 || code2>6)) {
            printf("���� �¼��� �Է��Ͽ����ϴ�.\n");
        }
        else if (totalSeats == 24) {
            printf("�¼��� �����Դϴ�\n");
            break;
        }

    }

	return 0;
}

    void printSeats(int arr[4][6]) {
        //printf("================�¼� ���� �ý��� V1.0================\n");
        for (int a = 0; a < 4; a++) {
            printf("==================================================\n");
            for (int b = 0; b < 6; b++) {
                printf("[%c%d]: %d ", a + 65, b + 1, arr[a][b]);
            }
            printf("\n");
            printf("==================================================\n");
        }
    }

        
   