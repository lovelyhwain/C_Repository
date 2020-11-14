#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

class Person {
	//protected:
private:
	string id;
	string name;

public:
	Person();
	Person(string id, string name);
	~Person();

	void setId(string id);
	string getId();

	void setName(string name);
	string getName();

	void printAll();
};

class SchoolPerson : public Person {
	//protected:
private:
	string univ;

public:
	SchoolPerson();
	SchoolPerson(string univ);
	~SchoolPerson();

	void setUniv(string univ);
	string getUniv();

	void printAll();
};

class Student : public SchoolPerson {
private:
	int years;
	int classes;

public:
	Student();
	Student(int years, int classes);
	~Student();

	void setYears(int years);
	int getYears();

	void setClasses(int classes);
	int getClasses();

	void printAll();

};


class Teacher : public SchoolPerson {
private:
	string subject;

public:
	Teacher();
	Teacher(string _subject);
	~Teacher();

	void setSubject(string subject);
	string getSubject();

	void printAll();
};