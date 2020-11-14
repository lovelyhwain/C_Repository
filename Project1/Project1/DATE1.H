#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class Date {
	int month;
	int day;
	int year;

public:

	Date(int m, int d, int y);
	~Date();

	int Month();
	int Day();
	int Year();

	int LeapYear();

	int DaysInMonth();

	void IncreaseDate();

	void printDate();

	void PrintLeap();
};