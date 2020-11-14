#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Matrix {
	//private:
public:
	int rows, cols;
	int** arr;
	//int* data;
public:
	Matrix();
	Matrix(int r, int c);
	~Matrix();
	void pushMatrix();
	void display();

	//void CalcMatrix();
};