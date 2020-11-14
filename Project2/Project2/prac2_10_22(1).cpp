#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printSeats(int arr1[][5], int arr2[][5]);


int main(void) {

    
    int seats[5][5] = { 0, };
    int reSeats[5][5] = { 0, };
    
    char code1;
    int code2 = 0;

    static int totalSeats = 0;
    //int col = sizeof(seats[0]) / sizeof(int);      
    //int row = sizeof(seats) / sizeof(seats[0]);

    //printSeats(seats, reSeats);

    while (1) {

        printSeats(seats, reSeats);

        printf("예약할 좌석코드를 입력하세요\n");
        printf("(대문자+숫자)>>");
        scanf("%c%d", &code1, &code2);

        //좌석 A, 0-5
        if ((code1 == 'A') && code2 == 1) {
            reSeats[0][0] = 1;
            totalSeats++;
            printf("25개의 좌석중에 %d개", totalSeats);
        }
        else if ((code1 == 'A') && code2 == 2) {
            reSeats[0][1] = 1;
            totalSeats++;
            printf("25개의 좌석중에 %d개", totalSeats);
        }
        else if ((code1 == 'A') && code2 == 3) {
            reSeats[0][2] = 1;
            totalSeats++;
            printf("25개의 좌석중에 %d개", totalSeats);
        }
        else if ((code1 == 'A') && code2 == 4) {
            reSeats[0][3] = 1;
            totalSeats++;
            printf("25개의 좌석중에 %d개", totalSeats);
        }
        else if ((code1 == 'A') && code2 == 5) {
            reSeats[0][4] = 1;
            totalSeats++;
            printf("25개의 좌석중에 %d개", totalSeats);
        }
        //좌석 B, 0-5
        else if ((code1 == 'B') && code2 == 1) {
            reSeats[1][0] = 1;
            totalSeats++;
            printf("25개의 좌석중에 %d개", totalSeats);
        }
        else if ((code1 == 'B') && code2 == 2) {
            reSeats[1][1] = 1;
            totalSeats++;
            printf("25개의 좌석중에 %d개", totalSeats);
        }
        else if ((code1 == 'B') && code2 == 3) {
            reSeats[1][2] = 1;
            totalSeats++;
            printf("25개의 좌석중에 %d개", totalSeats);
        }
        else if ((code1 == 'B') && code2 == 4) {
            reSeats[1][3] = 1;
            totalSeats++;
            printf("25개의 좌석중에 %d개", totalSeats);
        }
        else if ((code1 == 'B') && code2 == 5) {
            reSeats[1][4] = 1;
            totalSeats++;
            printf("25개의 좌석중에 %d개", totalSeats);
        }
        //좌석 C, 0-5
        else if ((code1 == 'C') && code2 == 1) {
            reSeats[2][0] = 1;
            totalSeats++;
            printf("25개의 좌석중에 %d개", totalSeats);
        }
        else if ((code1 == 'C') && code2 == 2) {
            reSeats[2][1] = 1;
            totalSeats++;
            printf("25개의 좌석중에 %d개", totalSeats);
        }
        else if ((code1 == 'C') && code2 == 3) {
            reSeats[2][2] = 1;
            totalSeats++;
            printf("25개의 좌석중에 %d개", totalSeats);

        }
        else if ((code1 == 'C') && code2 == 4) {
            reSeats[2][3] = 1;
            totalSeats++;
            printf("25개의 좌석중에 %d개", totalSeats);
        }
        else if ((code1 == 'C') && code2 == 5) {
            reSeats[2][4] = 1;
            totalSeats++;
            printf("25개의 좌석중에 %d개", totalSeats);
        }
        //좌석 D, 0-5
        else if ((code1 == 'D') && code2 == 1) {
            reSeats[3][0] = 1;
            totalSeats++;
            printf("25개의 좌석중에 %d개", totalSeats);
        }
        else if ((code1 == 'D') && code2 == 2) {
            reSeats[3][1] = 1;
            totalSeats++;
            printf("25개의 좌석중에 %d개", totalSeats);
        }
        else if ((code1 == 'D') && code2 == 3) {
            reSeats[3][2] = 1;
            totalSeats++;
            printf("25개의 좌석중에 %d개", totalSeats);
        }
        else if ((code1 == 'D') && code2 == 4) {
            reSeats[3][3] = 1;
            totalSeats++;
            printf("25개의 좌석중에 %d개", totalSeats);
        }
        else if ((code1 == 'D') && code2 == 5) {
            reSeats[3][4] = 1;
            totalSeats++;
            printf("25개의 좌석중에 %d개", totalSeats);
        }
        //좌석 E, 0-5
        else if ((code1 == 'E') && code2 == 1) {
            reSeats[4][0] = 1;
            totalSeats++;
            printf("25개의 좌석중에 %d개", totalSeats);
        }
        else if ((code1 == 'E') && code2 == 2) {
            reSeats[4][1] = 1;
            totalSeats++;
            printf("25개의 좌석중에 %d개", totalSeats);
        }
        else if ((code1 == 'E') && code2 == 3) {
            reSeats[4][2] = 1;
            totalSeats++;
            printf("25개의 좌석중에 %d개", totalSeats);
        }
        else if ((code1 == 'E') && code2 == 4) {
            reSeats[4][3] = 1;
            totalSeats++;
            printf("25개의 좌석중에 %d개", totalSeats);
        }
        else if ((code1 == 'E') && code2 == 5) {
            reSeats[4][4] = 1;
            totalSeats++;
            printf("25개의 좌석중에 %d개", totalSeats);
        }

        //printf("예약이 완료되었습니다.\n");
        if (totalSeats == 25) {
            printf("자리가 꽉 찼습니다\n");
            break;
            
        }

    }
    

    printSeats(seats, reSeats);
    
    printf("예약이 완료되었습니다.\n");
  
    return 0;
}

//void printSeats(int arr1[][5], int arr2[][5], int cols, int rows){

void printSeats(int arr1[][5], int arr2[][5]) {

    printf("=========좌석 예매 시스템 V1.0=========\n");
    for (int a = 0; a < 5; a++) {
        printf("=======================================\n");

        for (int b = 0; b < 5; b++) {
            printf("[%c%d]: %d ", a + 65, b + 1, arr2[a][b]);
        }
        printf("\n");
        printf("=======================================\n");
    }

}


    /*
    for (int i = 65; i <= 80; i++) {
        for (int j = 0; j < 4; j++) {
            if (j == 2 && i != 80) {
                printf("\t ");
            }
            printf("%c%d ", i, j + 1);
        }
        if (i == 80) {
            printf("%c%d", i, 5);
        }
        printf("\n");
    }
    */

  

//getchar();//문자만 한개 받겠다