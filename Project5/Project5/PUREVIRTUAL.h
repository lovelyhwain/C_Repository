#include <iostream>
using namespace std;

class Polygon {
protected:
	int creator;
	int x_pos, y_pos;

public:
	int Creator();
	virtual void Moves(int delta_x, int delta_y);
	virtual int Perimeter() = 0;
	virtual int Color() = 0;
};

class Rectangle :public Polygon {
private:
	int base, height;
	int color;

public:
	int Perimeter();
	int Color();
	int Base();
	int Height();
};


class Square:public Rectangle {
private:
	int color;

public:
	int Perimeter();
	int Color();
	int Color(int c);
};
