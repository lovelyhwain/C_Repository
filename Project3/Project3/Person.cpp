#include "PERSON.H"


//Person 클래스
Person::Person() {
	cout << "Person 기본 생성자\n";
}
Person::Person(string id, string name) {
	cout << "Person 생성자\n";
	this->id = id;
	this->name = name;
}
Person::~Person() {
	cout << "Person 소멸자 \n";
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

//SchoolPerson 클래스
SchoolPerson::SchoolPerson() {
	cout << "SchollPerson 기본생성자\n";
}
SchoolPerson::SchoolPerson(string univ) {
	cout << "SchollPerson 생성자\n";
	this->univ = univ;
}
SchoolPerson::~SchoolPerson() {
	cout << "SchoolPerson 소멸자\n";
}
void SchoolPerson::setUniv(string id) {
	setId(id);
}
string SchoolPerson::getUniv() {
	return univ;
}
void SchoolPerson::printAll() {
	Person::printAll();
	cout << "학교: " << univ << "\n";
}


//Student 클래스
Student::Student() {
	cout << "Student 생성자\n";
	this->years = 0;
	this->classes = 0;
}
Student::Student(int years, int classes) {
	cout << "Student 생성자\n";
	this->years = years;
	this->classes = classes;
}
Student::~Student() {
	cout << "Student 소멸자\n";
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
//Teacher 클래스
Teacher::Teacher() {
	cout << "Teacher 기본 생성자\n";
}
Teacher::Teacher(string subject) {
	cout << "Teacher 생성자\n";
	this->subject = subject;
}
Teacher::~Teacher() {
	cout << "Teacher 소멸자\n";
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