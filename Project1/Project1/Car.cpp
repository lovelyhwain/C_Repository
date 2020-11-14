#include "Car.H"

Car::Car(string color, int speed, int gear){
	cout << "생성자" << "\n";
	this->color = color;
	this->speed = speed;
	this->gear = gear;
}

Car::~Car() {
	cout << "소멸자" << "\n";
}

string Car::getColor() {
	return color;
}

void Car::setColor(string color) {
	this->color = color;
}

int Car::getSpeed() {
	return speed;
	return speed;
}
void Car::setSpeed(int speed) {
	this->speed = speed;
}

int Car::getGear() {
	return gear;
}
void Car::setGear(int gear) {
	this->gear = gear;
}

void Car::speedUp(int speed) {
	this->speed += speed;
}

void Car::speedDown(int speed) {
	this->speed -= speed;
}

void Car::printAll() {
	cout << "차 색상: " << color << "\n";
	cout << "차 기어: " << gear << "\n";
	cout << "차 스피트: " << speed << "\n";
	
}