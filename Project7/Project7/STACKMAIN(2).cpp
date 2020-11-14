#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;
#include "STACK3.cpp"

void main() {

	Stack<int> intStack;
	Stack <float> floatStack;
	Stack <double> doubleStack;

	intStack.Push(500.01);
	floatStack.Push(500.01);
	doubleStack.Push(500.01);

	intStack.Push(1992);
	floatStack.Push(1992);
	doubleStack.Push(1992);

	intStack.Push(33.33333333333333333);
	floatStack.Push(33.33333333333333333);
	doubleStack.Push(33.33333333333333333);

	intStack.Push(1024.1024);
	floatStack.Push(1024.1024);
	doubleStack.Push(1024.1024);

	cout << endl << "contents of three stacks having a different data type" << endl << "(the same values have been inserted" << endl;

	while (!intStack.Empty())
		cout << "int: " << setw(8) << intStack.Pop()
		<< "\tfloat: " << setw(12) << floatStack.Pop()
		<< "\tdouble: " << setw(12) << doubleStack.Pop() << endl;
}


//Stack <Person*>