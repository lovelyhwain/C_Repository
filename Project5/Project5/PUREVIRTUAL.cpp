#include "PUREVIRTUAL.h"

int Polygon::Creator() {
	cout << "Polygon의 Moves()" << endl;
	return creator;
}
void Polygon::Moves(int delta_x, int delta_y) {
	cout << "Polygon의 Moves() " << endl;
	cout << "실행 전 x_pos: " << x_pos << " y_pos: " << y_pos << endl;
	x_pos += delta_x;
	y_pos += delta_y;
	cout << "실행 후 x_pos: " << x_pos << " y_pos: " << y_pos << endl;
}


int Rectangle::Perimeter() {
	cout << "Rectangle의 Permiter() : " << 2 * (height + base) << endl;
		return 2 * (height + base);
}
int Rectangle::Color() {
	cout << "Rectangele의 Color(): " << color << endl;
	return color;
}
int Rectangle::Base() {
	cout << "Rectangele의 Base(): " << base << endl;
	return base;
}
int Rectangle::Height() {
	cout << "Rectangele의 Height(): " << height << endl;
	return height;
}


int Square::Perimeter() {
	cout << "Square의 Perimeter(): " << "0" << endl;
	return 0;
}
int  Square::Color() {
	cout << "Square의 Color(): " << color << endl;
	return color;
}
int  Square::Color(int c) {
	color = c;
	cout << "Square의 Color(int c): " << color << endl;
	return color;
}


