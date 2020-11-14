#include <iostream>
using namespace std;

class A {
public:
	int data;

	A(int data=0) {

	}
	virtual ~A(){
		cout << "A class 소멸자" << endl;
	}
	void Display() {
		cout << "class A: Display()" << endl;
	}
	virtual void Print() {
		cout << "class A: Print()" << endl;
	}
	virtual void Show() {

	}
	void CheckAB() {
		cout << "문제 5번 Display()가 갖는 data가 class A입니다." << endl;
	}
	void CheckDataAB() {
		cout << "문제 4번 변수 c가 갖는 data가 class A입니다." << endl;
	}
};

class B : public A {
public:
	int data;
	B(int data=0){

	}

	virtual ~B() {
		cout << "B class 소멸자" << endl;
	}

	void Display() {
		cout << "class B: Display()" << endl;
	}

	void Show() {
		cout << "class B: Show()" << endl;
	}

	void CheckAB() {
		cout << "문제 5번 Display()가 갖는 data가 class A입니다." << endl;
	}
	void CheckDataAB() {
		cout << "문제 4번 변수 c가 갖는 data가 class B입니다." << endl;
	}
};

class C : public B {
public:
	C() {

	}
	virtual ~C() {
		cout << "C class 소멸자" << endl;
	}
	void Show() {
		cout << "class C: Show()" << endl;
	}
	
	void CheckAB() { //문제 5번
		
	}
	void CheckDataAB(){   //문제4번
		
	}
	
};

