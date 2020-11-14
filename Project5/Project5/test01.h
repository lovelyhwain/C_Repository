#include <iostream>
using namespace std;

class A {
public:
	virtual void print() {
		cout << "A" << endl;
	}
};

class B :public A {
public:
	void print() {
		cout << "B" << endl;
	}
};