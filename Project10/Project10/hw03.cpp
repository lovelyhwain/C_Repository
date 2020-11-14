#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <string>
#include <ctime>
#include <Windows.h>
using namespace std;

#define arr1Row 2;
#define arr1Col 3;
#define arr2Row 3;
#define arr2Col 4;

int main(void) {

	int arr1[2][3] = { 0, };
	int arr2[3][4] = { 0, };

	int arr3[2][4] = { 0, };

	int* pa = (int*)arr1;
	int* pb = (int*)arr2;

	int num = 0;
	
	for (int a = 0; a < 2; a++) {
		for (int b = 0; b < 3; b++) {
			num = (rand() % 10) + 1; //1-10
			arr1[a][b] = num;
			printf("[%2d]", arr1[a][b]);
		}
		printf("\n");
	}
	
	for (int a = 0; a < 3; a++) {
		for (int b = 0; b < 4; b++) {
			num = (rand() % 10) + 1; //1-10
			arr2[a][b] = num;
			printf("[%2d]", arr2[a][b]);
		}
		printf("\n");
	}

	//34 45 35
	
	//规过1
	/*
	for (int a = 0; a < 2; a++) {
		for (int b = 0; b < 4; b++) {
			for (int c = 0; c < 3; c++) {
				arr3[a][b] += (arr1[a][c]*arr2[c][b]);
			}
		}
	}
	*/

	//规过2
	for (int a = 0; a < 2; a++) {
		for (int b = 0; b < 4; b++) {
			for (int c = 0; c < 3; c++) {
				//arr3[a][b] += ( pa[a+1] * pb[b+4] );
				arr3[a][b] += (pa[a*3+c] * pb[c*4+b]);
			}
		}
	}


	cout << "arr3 楷魂 搬苞" << endl;
	for (int i = 0; i < 2; i++) {
		for (int m = 0; m < 4; m++) {
			printf("[%5d]", arr3[i][m]);
		}
		printf("\n");
	}




	return 0;
}