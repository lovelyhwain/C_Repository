#include "PUREVIRTUAL.h"

int Polygon::Creator() {
	cout << "Polygon�� Moves()" << endl;
	return creator;
}
void Polygon::Moves(int delta_x, int delta_y) {
	cout << "Polygon�� Moves() " << endl;
	cout << "���� �� x_pos: " << x_pos << " y_pos: " << y_pos << endl;
	x_pos += delta_x;
	y_pos += delta_y;
	cout << "���� �� x_pos: " << x_pos << " y_pos: " << y_pos << endl;
}


int Rectangle::Perimeter() {
	cout << "Rectangle�� Permiter() : " << 2 * (height + base) << endl;
		return 2 * (height + base);
}
int Rectangle::Color() {
	cout << "Rectangele�� Color(): " << color << endl;
	return color;
}
int Rectangle::Base() {
	cout << "Rectangele�� Base(): " << base << endl;
	return base;
}
int Rectangle::Height() {
	cout << "Rectangele�� Height(): " << height << endl;
	return height;
}


int Square::Perimeter() {
	cout << "Square�� Perimeter(): " << "0" << endl;
	return 0;
}
int  Square::Color() {
	cout << "Square�� Color(): " << color << endl;
	return color;
}
int  Square::Color(int c) {
	color = c;
	cout << "Square�� Color(int c): " << color << endl;
	return color;
}


