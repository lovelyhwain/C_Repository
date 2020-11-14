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
    for (int a = 0; a < rows; a++) //row 행
        arr[a] = new int[cols];

    for (int a = 0; a < rows; a++) //column 열
        for (int b = 0; b < cols; b++)
            arr[a][b] = 0; //0으로 초기화
}

Matrix::~Matrix() {  //동적할당 삭제
    for (int i = 0; i < rows; i++)
        delete[] arr[i];
    delete[] arr;
}

void Matrix::pushMatrix() {

    int num = 0;
    int count = 0;
    int totalCount = rows * cols; //숫자를 입력하는 횟수

    for (int a = 0; a < rows; a++) { //column
        printf("2차원 배열의 %d번째 행에 들어갈 숫자를 %d개 적어주세요\n", a + 1, cols);
        for (int b = 0; b < cols; b++) {
            printf("값을 입력해주세요\n");
            scanf("%d", &num);
            //fflush(stdout)
            arr[a][b] = num; //0으로 초기화
            printf("arr[%d][%d]= %d\n", a, b, num); //방금 배열에 넣은 숫자 출력
        }
    }
}

void Matrix::display() {

    cout << "배열 전체 출력" << endl;

    for (int a = 0; a < rows; a++)  //column
        for (int b = 0; b < cols; b++)
            printf("arr[%d][%d]=%d\n", a, b, arr[a][b]);
    //cout << arr[a][b] << endl;
}

/*
void Matrix::CalcMatrix() {  //더

    int choice = 0;
    int plusResult = 0;
    int multiplR = 0;

    cout << "원하시는 계산을 골라주세요" << endl;
    cout << "1.덧셈 2.곱셈" << endl;
    cin >> choice;
    if (choice == 1) { //덧셈연산
        for (int a = 0; a < rows; a++) {
            for (int b = 0; b < cols; b++) {
                plusResult += arr[a][b];
            }
        }
        printf("[%d][%d]행렬의 덧셈연산결과 = %d\n", rows, cols, plusResult);
    }

    else if (choice == 2) { //곱셈연산
        for (int a = 0; a < rows; a++) {
            for (int b = 0; b < cols; b++) {
                multiplR *= arr[a][b];
            }
        }
        printf("[%d][%d]행렬의 덧셈연산결과 = %d\n", rows, cols, multiplR);
    }

}
*/

