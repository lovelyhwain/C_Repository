#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printSeats(int arr[4][6]);

int main(void) {

    int seats[4][6] = { 0, };
    char code1;
    int code2 = 0;
    static int totalSeats = 0;

    while (1) {
        printf("예약할 좌석코드를 입력하세요\n");
        printf("(대문자+숫자)>>");
        scanf("%c%d", &code1, &code2);
        fflush(stdout);

        if (seats[code1 - 65][code2 - 1] == 0) {
            seats[code1 - 65][code2 - 1] = 1;
            printSeats(seats);
        }
        else if (seats[code1 - 65][code2 - 1] == 1) {
            printf("이미 예약되어있습니다. 다시 골라주세요\n");
        }
        else if ((code1 < 65 || code1>69) || (code2 < 0 || code2>6)) {
            printf("없는 좌석을 입력하였습니다.\n");
        }
        else if (totalSeats == 24) {
            printf("좌석이 만석입니다\n");
            break;
        }

    }

	return 0;
}

    void printSeats(int arr[4][6]) {
        //printf("================좌석 예매 시스템 V1.0================\n");
        for (int a = 0; a < 4; a++) {
            printf("==================================================\n");
            for (int b = 0; b < 6; b++) {
                printf("[%c%d]: %d ", a + 65, b + 1, arr[a][b]);
            }
            printf("\n");
            printf("==================================================\n");
        }
    }

        
   