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

   

    return 0;
}

void calcMatrix(Matrix& arr1, Matrix& arr2) {
    const int arr1_Rows = arr1.rows;
    const int arr1_Cols = arr1.cols;
    const int arr2_Rows = arr2.rows;
    const int arr2_Cols = arr2.cols;


    int choice = 0;

    int plus = 0;
    int plusResult = 0;

    int minus = 0;
    int minusResult = 0;

    int multipl = 1;
    int multiplResult = 1;

    cout << "���Ͻô� ����� ����ּ���" << endl;
    cout << "1.���� 2. ���� 3.����" << endl;
    cin >> choice;


    if (arr1.rows == arr2.rows && arr1.cols == arr2.cols) {
       
        for (int a = 0; a < arr1.rows; a++) {
            for (int b = 0; b < arr1.cols; b++) {  //����������
                multipl = (arr1.arr[a][b] * arr2.arr[b][a]);
                multiplResult += multipl;
            }



        for (int a = 0; a < arr1.rows; a++) {
            for (int b = 0; b < arr1.cols; b++) {  //����������
                 multipl = (arr1.arr[a][b] * arr2.arr[b][a]);
                 multiplResult += multipl;
            }
        }
        printf("����������: %d\n", plusResult);
        printf("����������: %d\n", minusResult);
        printf("����������: %d\n", multiplResult);
    }

    else if (arr1.cols == arr2.rows) {  // 3*2  2*4�ΰ��
        if (choice == 1) {
            for (int a = 0; a < arr1.rows; a++) {
                for (int b = 0; b < arr1.cols; b++) {
                    multipl = (arr1.arr[a][b] * arr2.arr[b][a]);

                }
            }
        }

    }
    
    else {
        printf("arr1[%d][%d] * arr2[%d][%d]�̹Ƿ� ����� �Ұ��մϴ�!\n", arr1.rows, arr1.cols, arr2.rows, arr2.cols);
    }
