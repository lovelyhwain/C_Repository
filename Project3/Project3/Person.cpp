#include "PERSON.H"


//Person Ŭ����
Person::Person() {
	cout << "Person �⺻ ������\n";
}
Person::Person(string id, string name) {
	cout << "Person ������\n";
	this->id = id;
	this->name = name;
}
Person::~Person() {
	cout << "Person �Ҹ��� \n";
}
void Person::setId(string id) {
	this->id = id;
}
string Person::getId() {
	return this->id;
}
void Person::setName(string name) {
	this->name = name;
}
string Person::getName() {
	return this->name;
}
void Person::printAll() {
	cout << "ID " << id << "\n";
	cout << "Name " << name << "\n";
}

//SchoolPerson Ŭ����
SchoolPerson::SchoolPerson() {
	cout << "SchollPerson �⺻������\n";
}
SchoolPerson::SchoolPerson(string univ) {
	cout << "SchollPerson ������\n";
	this->univ = univ;
}
SchoolPerson::~SchoolPerson() {
	cout << "SchoolPerson �Ҹ���\n";
}
void SchoolPerson::setUniv(string id) {
	setId(id);
}
string SchoolPerson::getUniv() {
	return univ;
}
void SchoolPerson::printAll() {
	Person::printAll();
	cout << "�б�: " << univ << "\n";
}


//Student Ŭ����
Student::Student() {
	cout << "Student ������\n";
	this->years = 0;
	this->classes = 0;
}
Student::Student(int years, int classes) {
	cout << "Student ������\n";
	this->years = years;
	this->classes = classes;
}
Student::~Student() {
	cout << "Student �Ҹ���\n";
}
void Student::setYears(int years) {
	this->years = years;
}
int Student::getYears() {
	return years;
}
void Student::setClasses(int classes) {
	this->classes = classes;
}
int Student::getClasses() {
	return classes;
}
void Student::printAll() {
	SchoolPerson::printAll();
	cout << "Years " << years << "\n";
	cout << "Classes " << classes << "\n";
}
//Teacher Ŭ����
Teacher::Teacher() {
	cout << "Teacher �⺻ ������\n";
}
Teacher::Teacher(string subject) {
	cout << "Teacher ������\n";
	this->subject = subject;
}
Teacher::~Teacher() {
	cout << "Teacher �Ҹ���\n";
}
void Teacher::setSubject(string subject) {
	this->subject = subject;
}
string Teacher::getSubject() {
	return subject;
}
void Teacher::printAll() {
	SchoolPerson::printAll();
	cout << "Subject " << subject << "\n";
}