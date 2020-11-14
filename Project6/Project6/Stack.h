#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

#define TYPE int

const int SIZE = 10;

class Stack {
	int* data;
	int nElements;
public:
	Stack();
	~Stack();

	void Push(int item);
	TYPE Pop();
	int Number();
	int Empty();
	int Full();
	void howmany();
	void Show();
};