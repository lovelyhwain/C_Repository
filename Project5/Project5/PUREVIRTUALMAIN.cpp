#include "PUREVIRTUAL.h"

void main() {
	Polygon* p2 = new Rectangle();
	cout << endl << "-----Polygon* p2 = new Rectangle()-----" << endl;
	p2->Creator();
	p2->Perimeter();
	p2->Color();
	p2->Moves(1, 2);

	Polygon* p3 = new Square();
	cout << endl << "-----Polygon* p3 = new Square()-----" << endl;
	p3->Creator();
	p3->Perimeter();
	p3->Color();
	p3->Moves(10, 20);

	Rectangle* r1 = new Rectangle();
	cout << endl << "-----Rectangle* r1 = new Rectangle()-----" << endl;
	r1->Creator();
	r1->Perimeter();
	r1->Color();
	r1->Moves(10, 20);
	r1->Base();
	r1->Height();

	Square* s = new Square();
	cout << endl << "-----Square* s = new Square()-----" << endl;
	s->Creator();
	s->Perimeter();
	s->Color();
	s->Color(20);
	s->Moves(20, 30);
	s->Base();
	s->Height();

}