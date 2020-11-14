#include <iostream>
using namespace std;

class Shape {
public:
	
	virtual void display() {

	}
};

class Rectangle:public Shape {
public:
	void display() {
		cout << "Rectangle" << endl;
	}
};

class Square :public Rectangle {
public:
	void display() {
		cout << "Square" << endl;
	}
};

class Circle :public Shape {
public:
	void display() {
		cout << "Circle" << endl;
	}
};


class ColorRect :public Rectangle {
public:
	void display() {
		cout << "ColorRect" << endl;
	}
};

class Triangle :public Shape {
public:
	void display() {
		cout << "Triangle" << endl;
	}
};

class Eclipse :public Shape {
public:
	void display() {
		cout << "Eclipse" << endl;
	}
};