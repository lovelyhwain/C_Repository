#include"GEOMETRY.H"

//GEOMETRY class
Geometry::Geometry(double x, double y) {
	pt.x = x;
	pt.y = y;
}
Geometry::~Geometry() {
	//Geometry 社瑚切
}
void Geometry::printAll() {
	cout << "Point X =" << pt.x << "\n";
	cout << "Point Y =" << pt.y << "\n";
}

Point::Point(double x, double y, string name) {
	pt.x = x;
	pt.y = y;
	this->name = name;
}
Point::~Point() {
	//Point 社瑚切
}
void Point::printAll() {
	Geometry::printAll();
	cout << "Point Name =" << name << "\n";
}

Circle::Circle(double x, double y, double radian) {
	pt.x = x;
	pt.y = y;
	this->radian = radian;
}
Circle::~Circle() {
	//Circle 社瑚切
}

double Circle::getArea(double radian) {
	double re = 0.0;
	re = radian * radian * 3.14;
	return re;
}

void Circle::printAll() {
	double Circumference = radian * PI * 2;
	double Area = radian * radian * PI;
	Geometry::printAll();
	cout << "Circle radian =" << radian << "\n";
	cout << "Circumference =" << Circumference << "\n";
	cout << "Area =" << Area << "\n";
}


Line::Line(int pLength) {
	p = new point[pLength];
	p[0].x = 1;
	p[0].y = 1;
	p[1].x = 2;
	p[1].y = 2;
	p[2].x = 3;
	p[2].y = 3;
	
	
	//p = (struct point*)malloc(sizeof (struct point));
	//p->x = 0.0;
	//p->y = 0.0;

}

Line::~Line() {
	//free(p);
	delete []p;
}

void Line::printArr() {
	for (int i = 0; i < sizeof(p) / sizeof(struct point*); i++) {
		cout << "x: "<< p[i].x << endl;
		cout << "y: "<< p[i].y << endl;
	}
}