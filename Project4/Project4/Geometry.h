#include<iostream>
#include<string>
#define PI 3.1415

using namespace std;

typedef struct point {
	double x;
	double y;
}POINT, * LPPOINT;

class Geometry {
public:
	//POINT pt;
	POINT* p;
	Geometry(double x = 0.0, double y = 0.0);
	~Geometry();
	void printAll();
};

class Point :public Geometry {
public:
	string name;

	Point(double x, double y, string name = "");
	~Point();
	void printAll();
};

class Circle : public Geometry {
public:
	double radian;

	Circle(double x, double y, double radian = 0.0);
	~Circle();
	void printAll();

	double getArea(double radian);
};


class Line:public Geometry{
private:
	int pLength;
	//POINT* p;
public:
	Line(int pLength=50);
	~Line();
	void printArr();
};