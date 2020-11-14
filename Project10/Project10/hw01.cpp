#include "hw01.h"

Matrix::Matrix() {
    rows = 0;
    cols = 0;
    arr = NULL;
}

Matrix::Matrix(int r, int c) {
    rows = r;
    cols = c;

    arr = new int* [rows];
    for (int a = 0; a < rows; a++) //row ��
        arr[a] = new int[cols];

    for (int a = 0; a < rows; a++) //column ��
        for (int b = 0; b < cols; b++)
            arr[a][b] = 0; //0���� �ʱ�ȭ
}

Matrix::~Matrix() {  //�����Ҵ� ����
    for (int i = 0; i < rows; i++)
        delete[] arr[i];
    delete[] arr;
}

void Matrix::pushMatrix() {

    int num = 0;
    int count = 0;
    int totalCount = rows * cols; //���ڸ� �Է��ϴ� Ƚ��

    for (int a = 0; a < rows; a++) { //column
        printf("2���� �迭�� %d��° �࿡ �� ���ڸ� %d�� �����ּ���\n", a + 1, cols);
        for (int b = 0; b < cols; b++) {
            printf("���� �Է����ּ���\n");
            scanf("%d", &num);
            //fflush(stdout)
            arr[a][b] = num; //0���� �ʱ�ȭ
            printf("arr[%d][%d]= %d\n", a, b, num); //��� �迭�� ���� ���� ���
        }
    }
}

void Matrix::display() {

    cout << "�迭 ��ü ���" << endl;

    for (int a = 0; a < rows; a++)  //column
        for (int b = 0; b < cols; b++)
            printf("arr[%d][%d]=%d\n", a, b, arr[a][b]);
    //cout << arr[a][b] << endl;
}

/*
void Matrix::CalcMatrix() {  //��

    int choice = 0;
    int plusResult = 0;
    int multiplR = 0;

    cout << "���Ͻô� ����� ����ּ���" << endl;
    cout << "1.���� 2.����" << endl;
    cin >> choice;
    if (choice == 1) { //��������
        for (int a = 0; a < rows; a++) {
            for (int b = 0; b < cols; b++) {
                plusResult += arr[a][b];
            }
        }
        printf("[%d][%d]����� ���������� = %d\n", rows, cols, plusResult);
    }

    else if (choice == 2) { //��������
        for (int a = 0; a < rows; a++) {
            for (int b = 0; b < cols; b++) {
                multiplR *= arr[a][b];
            }
        }
        printf("[%d][%d]����� ���������� = %d\n", rows, cols, multiplR);
    }

}
*/

