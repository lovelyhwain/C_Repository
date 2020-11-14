#include <iostream>
#include "DATE1.H"

int main() {

	Date newYearsDay(1, 1, 2017);

	newYearsDay.printDate();

	newYearsDay.IncreaseDate();
	newYearsDay.printDate();
	newYearsDay.PrintLeap();

	Date d(5, 15, 2016);

	d.IncreaseDate();
	d.printDate();
	d.PrintLeap();

	for (Date dd(2, 25, 2017);dd.Day() < 3 || dd.Day() > 10;dd.IncreaseDate())
		dd.printDate();
}