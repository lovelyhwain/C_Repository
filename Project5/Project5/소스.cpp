#include "�ҽ�.h"

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

	c->CheckAB(); //���� 5��
	c->CheckDataAB(); //���� 4��
	



	delete a;
	delete b;
	delete c;
}