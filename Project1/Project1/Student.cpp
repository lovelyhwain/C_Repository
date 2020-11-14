#include "Student.h"


/*
Student::Student() {
	cout << "생성자" << "\n";
	this->age = new int;
	*age = age;

	this->name = name;
	this->age = age;
	this->id = id;
	this->major = major;
}
*/


Student::Student(string name, int age, string id, string major) {
	cout << "생성자" << "\n";
	
	this->name = name;

	this->age = new int;
	*(this->age) = age;
	
	this->id = id;
	this->major = major;
}



Student::~Student() {
	cout << "소멸자" << "\n";
	delete age;
}

string Student::getName() {
	return name;
}
void Student::setName(string name) {
	this->name = name;
}

int Student::getAge() {
	return *age;
}

void Student::setAge(int age) {
	*(this->age) = age;
}

string Student::getId() {
	return id;
}
void Student::setId(string id) {
	this->id = id;
}

string Student::getMajor() {
	return major;
}
void Student::setMajor(string major) {
	this->major = major;
}

void Student::setStudent(string name, int age, string id, string major) {
	this->name = name;
	*(this->age) = age;
	this->id = id;
	this->major = major;
}

void Student::printAll() {
	cout << "이름: " << name<< "\n";
	cout << "나이: " << *age << "\n";
	cout << "ID: " << id << "\n";
	cout << "전공: " << major <<"\n";
}