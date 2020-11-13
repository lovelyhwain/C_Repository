#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <string>
#include <ctime>
#include <Windows.h>
using namespace std;

int bugCheck(int arr[][5]);
void bugDisplay(int arr[][5]);

int main() {

	int matrix[5][5] = { {0, } };
	int num = 0; //방향 0-8번
	int x = 0; //x좌표
	int y = 0; //y좌표
	int check; //Check()함수에 사용되는 변수

	x = rand() % 5; //0-4
	y = rand() % 5;
	matrix[x][y] = 1;

	while (1) {
		num = rand() % 8; // 방향 0-7
		//printf("rand()를 이용한 방향값 결과: %d", num);

		switch (num) {
		case 0:
			x--;
			break;
		case 1:
			x--;
			y++;
			break;
		case 2:
			y++;
			break;
		case 3:
			x++;
			y++;
			break;
		case 4:
			x++;
			break;
		case 5:
			x++;
			y--;
			break;
		case 6:
			y--;
			break;
		case 7:
			x--;
			y--;
			break;
		}

		if (x < 0)
			x = 0;
		if (y < 0)
			y = 0;
		if (x > 4)
			x = 4;
		if (y > 4)
			y = 4;

		matrix[x][y] = 1;
		Sleep(70);
		system("cls");
		//printf("현재배열위치: matrix[%d][%d]", x, y);
		bugDisplay(matrix);

		check = bugCheck(matrix);
		if (check)
			break;
	}

	//bugDisplay(matrix);
	system("pause");
	return 0;
}

int bugCheck(int arr[][5]) {
	int count = 0;
	for (int i = 0; i < 5; i++)
		for (int m = 0; m < 5; m++)
			if (arr[i][m] == 0)
				return 0;
			else
				return 1;
}

/*
int bugCheck(int arr[][5]) {
	int count = 0;
	for (int i = 0; i < 5; i++)
		for (int m = 0; m < 5; m++)
			if (arr[i][m] == 1)
				count++;
	return count;
}
*/


void bugDisplay(int(*arr)[5]) {
	cout << "\n===bug matrix===" << endl;
	for (int i = 0; i < 5; i++) {
		for (int m = 0; m < 5; m++) {
			//printf("[%1d]", arr[i][m]);
			printf("[%1d]", *(*(arr + i) + m));
		}
		printf("\n");
	}
	cout << "===============" << endl;
}
