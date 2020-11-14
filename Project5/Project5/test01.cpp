#include "test01.h"

int main() {

	A* a = new A;
	a->print();
	B* b = new B;
	b->print();

	A* ab = new B;
	((B *)ab)->print();

	delete a;
	delete b;
	delete ab;

	return 0;
}
