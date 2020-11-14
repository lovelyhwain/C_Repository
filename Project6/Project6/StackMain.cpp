#include <stdlib.h>
#include "Stack.h"

int main() {
	
	//Stack s1;
	Stack* intStack = new Stack;

	intStack->Push(1);
	intStack->Push(2);
	intStack->Push(3);
	
	intStack->Show();

	system("pause");
	return 0;
}


/*
s1.Push(1);
s1.Push(2);
s1.Push(3);
s1.Push(4);
s1.Push(5);
s1.Push(6);

while (!s1.Empty())
	cout << s1.Pop() << endl;
*/