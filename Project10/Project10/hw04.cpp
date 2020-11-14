#include <iostream>
using namespace std;

class Matrix {
	int* p;
	int row;
	int col;
public:
	Matrix(int* a, int r, int c) : p(a), row(r), col(c){}

	void Multi(int* b, int c) {

			for (int i = 0; i < 2; i++) {
				for (int m = 0; m < 4; m++) {
					int num = 0;
					for (int n = 0; n < 3; n++) {
						//arr3[a][b] += ( pa[a+1] * pb[b+4] );
						num += ( p[i * 3 + n] * b[n * 4 + m] );
						//printf("%d", num);
					}
					printf("[%3d]", num);
				}
				printf("\n");
			}
	}
};


int main() {
	int a[2][3] = {{1,2,3},
					{4,5,6}};
	int b[3][4] = { {1,2,3,4},
				   {5,6,7,8},
				   {9,10,11,12} };

	Matrix A((int*)a, 2, 3);
	A.Multi((int*)b, 4);

	return 0;

}