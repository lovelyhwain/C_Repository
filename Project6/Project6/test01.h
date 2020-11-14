#include <iostream>
using namespace std;

class A {
public:
	int a1;
	A(int a=1):a1(a){}
	virtual void Dynamic() {
		cout << "Dynamic A" << endl;
	}
	virtual void Static() {
		cout << "Static A" << endl;
	}
	virtual void Checking() { //문제 3번 정의된 변수가 가르키는 데이터 출력
		cout << "클래스 A" << endl;
	}
};

class B :public A {
	int b1;
public:
	B(){}
	virtual void Dynamic() {
		cout << "Dynamic B" << endl;
	}
	void Static() {
		cout << "Static B" << endl;
	}
	void Checking() {
		cout << "클래스 B" << endl;
	}
};

class C :public B {
	int c1;
public:
	C(){}
	void Dynamic() {
		cout << "Dynamic C" << endl;
	}
	void Static() {
		cout << "Static C" << endl;
	}
	void Checking() {
		cout << "클래스 C" << endl;
	}
};
