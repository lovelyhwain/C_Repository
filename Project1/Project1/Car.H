#include <iostream>
#include <string>

using namespace std;

class Car {
private:
	string color;
	int speed;
	int gear;
public:
	Car(string color, int speed, int gear);
	~Car();

	string getColor();
	void setColor(string color);

	int getSpeed();
	void setSpeed(int speed);

	int getGear();
	void setGear(int gear);

	void speedUp(int speed);
	void speedDown(int speed);

	void printAll();
};