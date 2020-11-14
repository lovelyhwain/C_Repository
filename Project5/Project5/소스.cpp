#include "소스.h"

void main() {

	A* a;
	A* b = new B;
	A* c = new C;

	a = b;
	b = c;
	//A* a = new B;
	//A* b = new C;

	a->Display();
	a->Print();
	a->Show();

	b->Display();
	b->Print();
	b->Show();

	c->Display(); 
	c->Print();
	c->Show();

	c->CheckAB(); //문제 5번
	c->CheckDataAB(); //문제 4번
	



	delete a;
	delete b;
	delete c;
}