#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>

using namespace std;

#include <stdio.h>

int main(void) {

    //ū ���ڸ� ������� ����ϱ�

    int n1 = 0, n2 = 0, n3 = 0, n4 = 0 ;
    int first = 0, second = 0, third = 0, fourth = 0;

    printf("���� 4���� �Է¹�������:");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
    getchar();


    if ((n1 > n2) && (n1 > n3) && (n1 > n4 )) {
        first = n1;
        if (n2 > n3 && n2 > n4) {
            second = n2;
            if (n3 > n4) {
                third = n3;
            }
            else {
                fourth = n4;
            }
        }

        else if (n3 > n2 && n3 > n4) {
            second = n3;
            if (n2 > n4) {
                third = n2;
            }
            else {
                fourth = n4;
            }

        }
        else if (n4 > n2 && n4 > n3) {
            second = n4;
            if (n2 > n3) {
                third = n2;
            }
            else {
                fourth = n3;
            }
        }

    }
    

    else if ((n2 > n1) && (n2 > n3) && (n2 > n4)) {
        first = n2;
        if (n1 > n3 && n1 > n4) {
            second = n1;
            if (n3 > n4) {
                third = n3;
            }
            else {
                fourth = n4;
            }
        }

        else if (n3 > n1 && n3 > n4) {
            second = n3;
            if (n1 > n4) {
                third = n1;
            }
            else {
                fourth = n4;
            }
        }

        else if (n4 > n1 && n4 > n3) {
            second = n4;
            if (n1 > n3) {
                third = n1;
            }
            else {
                fourth = n3;
            }
        }


    }
    

    else if ((n3 > n1) && (n3 > n2) && (n3 > n4)) {
        first = n3;
        if (n1 > n2 && n1 > n4) {
            second = n1;
            if (n2 > n4) {
                third = n2;
            }
            else {
                fourth = n4;
            }
        }
        else if (n2 > n1 && n2 > n4) {
            second = n2;
            if (n1 > n4) {
                third = n1;
            }
            else {
                fourth = n4;
            }
        }
        else if (n4 > n1 && n4 > n2) {
            second = n4;
            if (n1 > n2) {
                third = n1;
            }
            else {
                fourth = n2;
            }
        }

    }

    
    else if ((n4 > n1) && (n4 > n2) && (n4 > n3)) {
        first = n4;
        if (n1 > n2 && n1 > n3) {
            second = n1;
            if (n2 > n3) {
                third = n2;
            }
            else {
                fourth = n3;
            }
        }
        else if (n2 > n1 && n2 > n3) {
            second = n2;
            if (n1 > n3) {
                third = n1;
            }
            else {
                fourth = n3;
            }
        }
        else if (n3 > n1 && n3 > n2) {
            second = n3;
            if (n1 > n2) {
                third = n1;
            }
            else {
                fourth = n2;
            }
        }
    }


    printf("���� ū ���ں��� �迭�� ���: %d %d %d %d", first, second, third, fourth);

    return 0;
}