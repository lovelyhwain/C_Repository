#include "hw01.h"
void calcMatrix(const Matrix& arr1, const Matrix& arr2);

int main() {

	int row = 0;
	int col = 0;

	cout << "2���� �迭�� ��� ���� ������ �Է����ּ���:";
	cin >> row >> col;
	Matrix m1(row, col);

	cout << "2���� �迭�� ��� ���� ������ �Է����ּ���:";
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
	cout << "���Ͻô� ����� ����ּ���" << endl;
	cout << "1.���� 2. ���� 3.����" << endl;
	cin >> choice;



	if (arr1.cols == arr2.rows) {  // 3*2  2*4�ΰ��
		if (choice == 1) {
			for (int a = 0; a < arr1.rows; a++) {
				for (int b = 0; b < arr1.cols; b++) {
					arr1. 
				}
			}
		}


	}
	else {
		printf("arr1[%d][%d] * arr2[%d][%d]�̹Ƿ� ����� �Ұ��մϴ�!\n", arr1.rows, arr1.cols, arr2.rows, arr2.cols);
	}

