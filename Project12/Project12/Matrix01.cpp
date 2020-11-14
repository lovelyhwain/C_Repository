#define _CRT_SECURE_NO_WARNINGSS
#include<iostream>
#include<ctime>
#include<cstdlib>
#include <Windows.h>
using namespace std;

int main(void) {
	int currentX = 0; //현재위치
	int currentY = 0;

	int x = 0;
	int y = 0;
	int num = 0;

	int matrix[8][8] = { 0, };
	
	//moveX = (rand() % 3) - 1; // -1 , 0 , 1
	//moveY = (rand() % 3) - 1; // -1 , 0 , 1

	while (1) {
		cout << "matrix start!" << endl;
		num = rand() % 8 + 1; //1-8

		if (currentX>8 || currentY>8 || currentX<0 || currentY<0) {
			cout << "지정된 범위를 나갔습니다" << endl;
			break;
		}

		if (currentX > 7)
			currentX = 7;
		else if (currentX < 0)
			currentX = 0;
		else if (currentY > 7)
			currentY = 7;
		else if (currentY < 0)
			currentY = 0;

		else if (num == 1) {
			if (matrix[currentX][currentY] == 0) {
				cout << "num=1" << endl;
				currentX -= 1;
				currentY = y;
				matrix[currentX][currentY] = 1;
			}
		}
		else if (num == 2) {
			cout << "num=2" << endl;
			if (matrix[currentX][currentY] == 0) {
				currentX -= 1;
				currentY += 1;
				matrix[currentX][currentY] = 1;
			}
		}
		else if (num == 3) {
			cout << "num=3" << endl;
			if (matrix[currentX][currentY] == 0) {
				currentX = x;
				currentY += 1;
				matrix[currentX][currentY] = 1;
			}
		}
		else if (num == 4) {
			cout << "num=4" << endl;
			if (matrix[currentX][currentY] == 0) {
				currentX += 1;
				currentY += 1;
				matrix[currentX][currentY] = 1;
			}
		}
		else if (num == 5) {
			cout << "num=5" << endl;
			if (matrix[currentX][currentY] == 0) {
				currentX += 1;
				currentY = y;
				matrix[currentX][currentY] = 1;
			}
		}
		else if (num == 6) {
			cout << "num=6" << endl;
			if (matrix[currentX][currentY] == 0) {
				currentX -= 1;
				currentY += 1;
				matrix[currentX][currentY] = 1;
			}
		}
		else if (num == 7) {
			cout << "num=7" << endl;
			if (matrix[currentX][currentY] == 0) {
				currentX = x;
				currentY -= 1;
				matrix[currentX][currentY] = 1;
			}
		}
		
		else if (num == 8) {
			cout << "num=8" << endl;
			if (matrix[currentX][currentY] == 0) {
				currentX -= 1;
				currentY -= 1;
				matrix[currentX][currentY] = 1;
			}
		}

	}
	//system("pause");
	return 0;
}