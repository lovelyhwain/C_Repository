#include <iostream>
using namespace std;

class A {
public:
	int data;

	A(int data=0) {

	}
	virtual ~A(){
		cout << "A class �Ҹ���" << endl;
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
		cout << "���� 5�� Display()�� ���� data�� class A�Դϴ�." << endl;
	}
	void CheckDataAB() {
		cout << "���� 4�� ���� c�� ���� data�� class A�Դϴ�." << endl;
	}
};

class B : public A {
public:
	int data;
	B(int data=0){

	}

	virtual ~B() {
		cout << "B class �Ҹ���" << endl;
	}

	void Display() {
		cout << "class B: Display()" << endl;
	}

	void Show() {
		cout << "class B: Show()" << endl;
	}

	void CheckAB() {
		cout << "���� 5�� Display()�� ���� data�� class A�Դϴ�." << endl;
	}
	void CheckDataAB() {
		cout << "���� 4�� ���� c�� ���� data�� class B�Դϴ�." << endl;
	}
};

class C : public B {
public:
	C() {

	}
	virtual ~C() {
		cout << "C class �Ҹ���" << endl;
	}
	void Show() {
		cout << "class C: Show()" << endl;
	}
	
	void CheckAB() { //���� 5��
		
	}
	void CheckDataAB(){   //����4��
		
	}
	
};

