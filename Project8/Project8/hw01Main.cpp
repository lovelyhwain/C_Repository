#include "hw01.h"
void calcMatrix(const Matrix& arr1, const Matrix& arr2);

int main() {

	int row = 0;
	int col = 0;

	cout << "2차원 배열의 행과 열의 개수를 입력해주세요:";
	cin >> row >> col;
	Matrix m1(row, col);

	cout << "2차원 배열의 행과 열의 개수를 입력해주세요:";
	cin >> row >> col;
	Matrix m2(row, col);


	calcMatrix(m1, m2);

	/*
	for (int i = 0; i < row; i++) {
		for (int m = 0; m < col; m++) {
			
		}
	}
	*/

	return 0;
}

void calcMatrix(const Matrix& arr1, const Matrix& arr2) {
	int choice = 0;
	int plusResult = 0;
	int multiplR = 0;
	cout << "원하시는 계산을 골라주세요" << endl;
	cout << "1.덧셈 2. 뺄셈 3.곱셈" << endl;
	cin >> choice;



	if (arr1.cols == arr2.rows) {  // 3*2  2*4인경우
		if (choice == 1) {
			for (int a = 0; a < arr1.rows; a++) {
				for (int b = 0; b < arr1.cols; b++) {
					arr1. 
				}
			}
		}


	}
	else {
		printf("arr1[%d][%d] * arr2[%d][%d]이므로 계산이 불가합니다!\n", arr1.rows, arr1.cols, arr2.rows, arr2.cols);
	}

