#include <iostream>
#include <stdlib.h>
using namespace std;
#include "STACK3.cpp"

void main() {
	Stack <int> intStack;

	intStack.Push(500);
	intStack.Push(1992);
	intStack.Push(33);
	intStack.Push(1024);

	while (!intStack.Empty())
		cout << intStack.Pop() << endl;


	system("pasuse");
}
