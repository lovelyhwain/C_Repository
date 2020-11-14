#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>

using namespace std;

#include <stdio.h>

int main(void) {

    //큰 숫자를 순서대로 출력하기

    int n1 = 0, n2 = 0, n3 = 0, n4 = 0 ;
    int first = 0, second = 0, third = 0, fourth = 0;

    printf("정수 4개를 입력받으세요:");
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


    printf("가장 큰 숫자부터 배열한 결과: %d %d %d %d", first, second, third, fourth);

    return 0;
}