#include "test01.h"

void runprint(A& x);

void main() {
	A* a = new A();;
	A* b = new B();
	A* c = new C();;
	//B d;
	B* d = new B();
	C e;

	a->Dynamic();
	a->Static();

	b->Dynamic();
	b->Static();

	a = b;

	a->Dynamic();
	a->Static();

	c->Dynamic();
	c->Static();

	cout << endl;
	
	A* mixed[4];
	mixed[0] = a;
	mixed[1] = b;
	mixed[2] = c;

	mixed[3] = d;
	
	for (int I = 0; I < 4; I++)
		runprint(*mixed[I]);

	cout << endl;
	cout << "문제 3번 실행 결과\n";

	//문제 3번
	a->Checking();
	b->Checking();
	c->Checking();
	//d.Checking();
	e.Checking();

	cout << "문제 4번 실행 결과\n";

	e.a1 = 0; //문제 4번
	
	delete a;
	delete b;
	delete c;
	delete d;

}

void runprint(A& x) {


	x.Dynamic();
	x.Static();
}

