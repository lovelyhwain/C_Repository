#include <iostream>
using namespace std;
#include <vector>
#include <stdlib.h>

typedef struct Point {
    int x;
    int y;
}POINT;





int main(void) {
    //vector<vector<int>> temp(행 크기, vector<int>(열 크기));
    //vector<vector<POINT>> v(8, vector<POINT>(8); //v라는 이차원 벡터배열 
    // vector<vector<POINT>> matrix;
    vector<vector<int>>V;
    vector<int>innerV;

    int num;
    cin >> num;

    for (int a = 0; a < num; a++) {
        for (int b = 0; b < num; b++) {
            V[a][b] = 0;
            cout << V[a][b] << endl;
        }
       
    }

    //system("pause");
	return 0;
}


   /*
    //값 삽입
    int serial = 0;
    for (int i = 0; i < 6; i++)
        for (int j = 0; j < 5; j++)
            arr[i][j] = serial++;

    //값 출력
    for (vector<int> vec : arr) {
        for (int n : vec)
            printf("%3d ", n);
        cout << endl;
    }
    */