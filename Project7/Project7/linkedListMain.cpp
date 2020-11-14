#include "linkedList.h"
#include <stdlib.h>

int main(void) {

	Stack stack;
	stack.Push(1);
	cout << stack.Peek() << endl;
	stack.Push(2);
	cout << stack.Peek() << endl;
	stack.Push(3);
	cout << stack.Peek() << endl;

	stack.display();


	system("pause");
	return 0;
}