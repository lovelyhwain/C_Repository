#include "Geometry.h"

int main()
{
	//Geometry g(10, 20);
	//g.print();

	//Point pt(4, 5, "Kim");
	//pt.print();

	//Circle c1(4, 5, 6);
	//c1.print();

	Line m(5);
	m.setPoint(0, 1, 12);
	m.setPoint(1, 10, 62);
	m.setPoint(2, 15, 52);
	m.setPoint(3, 16, 22);
	m.setPoint(4, 18, 82);

	m.print();

	return 0;
}