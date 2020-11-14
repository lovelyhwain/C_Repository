#include "Stack.h"
#include <stack>


stack<A*> s;
s.push(new A);
s.push(new B);
s.push(new C);
cout << "size: " << s.size() << endl;

A* t = s.top();
t->Print();
s.pop();
delete t;

t = s.top();
t->Print();
s.pop();
delete t;

t = s.top();
t->Print();
s.pop();
delete t;

int main() {

	stack<A*> s;
	

	s.push(new A);
	s.push(new B);
	s.push(new C);
	cout << "size: " << s.size() << endl;

	A* t = s.top();
	t->Print();
	s.pop();
	delete t;

	t = s.top();
	t->Print();
	s.pop();
	delete t;

	t = s.top();
	t->Print();
	s.pop();
	delete t;


	

}


/*
stack <int> s;

	s.push(1);
	s.push(3);
	s.push(5);
	s.push(15);
	s.push(11);
	s.push(12);

	cout << s.top() << endl;
	s.pop();

*/