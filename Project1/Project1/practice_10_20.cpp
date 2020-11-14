#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void printSeats(int arr1[], int arr2[]);

int main(void) {

	int ticket[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int reTicket[10] = { 0, };

	char answ1;
	int answ2 = 0;

	static int seats = 0;

	while (1) {
		printf("좌석을 예약하시겠습니까?(y 또는 n)");
		scanf("%s", &answ1);
		if (answ1 == 'y') {
			printSeats(ticket, reTicket);

			printf("몇번째 좌석을 예약하시겠습니까?\n");
			scanf("%d", &answ2);

			if (answ2 == 1) {
				if (reTicket[answ2 - 1] != 1) {
					reTicket[answ2 - 1] = 1;
					printSeats(ticket, reTicket);
					printf("정상예약되었습니다.\n");
				}
				else {
					printf("이미 예약된 자리입니다.\n");
					printf("다시 좌석을 선택해주세요.\n");

				}
			}
			else if (answ2 == 2) {
				if (reTicket[answ2 - 1] != 1) {
					reTicket[answ2 - 1] = 1;
					printSeats(ticket, reTicket);
					printf("정상예약되었습니다.\n");
				}
				else {
					printf("이미 예약된 자리입니다.\n");
					printf("다시 좌석을 선택해주세요.\n");

				}
			}
			else if (answ2 == 3) {
				if (reTicket[answ2 - 1] != 1) {
					reTicket[answ2 - 1] = 1;
					printSeats(ticket, reTicket);
					printf("정상예약되었습니다.\n");
				}
				else {
					printf("이미 예약된 자리입니다.\n");
					printf("다시 좌석을 선택해주세요.\n");

				}
			}
			else if (answ2 == 4) {
				if (reTicket[answ2 - 1] != 1) {
					reTicket[answ2 - 1] = 1;
					printSeats(ticket, reTicket);
					printf("정상예약되었습니다.\n");
				}
				else {
					printf("이미 예약된 자리입니다.\n");
					printf("다시 좌석을 선택해주세요.\n");

				}
			}
			else if (answ2 == 5) {
				if (reTicket[answ2 - 1] != 1) {
					reTicket[answ2 - 1] = 1;
					printSeats(ticket, reTicket);
					printf("정상예약되었습니다.\n");
				}
				else {
					printf("이미 예약된 자리입니다.\n");
					printf("다시 좌석을 선택해주세요.\n");

				}
			}
			else if (answ2 == 6) {
				if (reTicket[answ2 - 1] != 1) {
					reTicket[answ2 - 1] = 1;
					printSeats(ticket, reTicket);
					printf("정상예약되었습니다.\n");
				}
				else {
					printf("이미 예약된 자리입니다.\n");
					printf("다시 좌석을 선택해주세요.\n");

				}
			}
			else if (answ2 == 7) {
				if (reTicket[answ2 - 1] != 1) {
					reTicket[answ2 - 1] = 1;
					printSeats(ticket, reTicket);
					printf("정상예약되었습니다.\n");
				}
				else {
					printf("이미 예약된 자리입니다.\n");
					printf("다시 좌석을 선택해주세요.\n");

				}
			}
			else if (answ2 == 8) {
				if (reTicket[answ2 - 1] != 1) {
					reTicket[answ2 - 1] = 1;
					printSeats(ticket, reTicket);
					printf("정상예약되었습니다.\n");
				}
				else {
					printf("이미 예약된 자리입니다.\n");
					printf("다시 좌석을 선택해주세요.\n");

				}
			}
			else if (answ2 == 9) {
				if (reTicket[answ2 - 1] != 1) {
					reTicket[answ2 - 1] = 1;
					printSeats(ticket, reTicket);
					printf("정상예약되었습니다.\n");
				}
				else {
					printf("이미 예약된 자리입니다.\n");
					printf("다시 좌석을 선택해주세요.\n");

				}
			}
			else if (answ2 == 10) {
				if (reTicket[answ2 - 1] != 1) {
					reTicket[answ2 - 1] = 1;
					printSeats(ticket, reTicket);
					printf("정상예약되었습니다.\n");
				}
				else {
					printf("이미 예약된 자리입니다.\n");
					printf("다시 좌석을 선택해주세요.\n");

				}
			}
			else { //예외처리
				printf("잘못 입력하셨습니다.\n");
				printf("1-10사이의 좌석을 입력해주세요.\n");
			}

		}
		

		else if (answ1 == 'n') {
			break;
		}
	}
	system("pause");

	return 0;
}

void printSeats(int arr1[], int arr2[]) {

	printf("======================\n");
	for (int i = 0; i < 10; i++)
		printf("%d ", arr1[i]);
	printf("\n======================\n");
	for (int i = 0; i < 10; i++)
		printf("%d ", arr2[i]);
	printf("\n======================\n");
}
