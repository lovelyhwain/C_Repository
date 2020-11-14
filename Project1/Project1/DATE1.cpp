#include "DATE1.H"

Date::Date(int m, int d, int y) : month(m), day(d), year(y) {
	cout << "contructor" << endl;
}
Date::~Date() {
	cout << "destructor" << endl;
}

int Date::Month() {
	return month;
}
int Date::Day() {
	return day;
}
int Date::Year() {
	return year;
}

int Date::LeapYear() {
	if (year % 4 != 0)
		return 0;
	else {
		if (year % 100 != 0)
			return 1;
		else if (year % 400 != 0)
			return 0;
		else
			return 1;
	}
}


int Date::DaysInMonth() {
	switch (month) {
	case 2:
		if (LeapYear())
			return 29;
		else
			return 28;
	case 4:
	case 6:
	case 9:
	case 11:
		return 30;
	default:
		return 31;
	}
}

void Date::IncreaseDate() {
	if (day < DaysInMonth())
		day++;
	else {
		day = 1;
		if (month != 12)
			month++;
		else {
			month = 1;
			year++;
		}
	}
}

void Date::printDate() {
	cout << endl << "Date: " << month << "/" << day << "/" << year << endl;
}

void Date::PrintLeap() {
	cout << endl << "The year " << year;
	if (LeapYear())
		cout << " is a leap-year";
	else
		cout << " is not a leap-year";
}
