#include <iostream>
using namespace std;

class A {
public:
	virtual void Print() {
		cout << "A" << endl;
	}
};

class B:public A{
public:
	void Print() {
		cout << "B" << endl;
	}
};


class C: public B {
public:
	void Print() {
		cout << "C" << endl;
	}
};