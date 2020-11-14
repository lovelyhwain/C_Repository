#include "Person.H"

Person::Person(const string name, const string gender, int age, float height){ //생성자
	cout << "생성자 호출" << endl;
	this->name = name;
	this->gender = gender;
	this->age = age;
	this->height = height;
}

Person::~Person(){ //소멸자
	cout << "소멸자 호출" << endl;
}

string Person::getName() const{ //이름 getter
	return name;
}

void Person::setName(const string name){ //이름 setter
	this->name = name;
}

string Person::getGender() const {
	return gender;
}

void Person::setGender(const string gender) {
	this->gender = gender;
}

int Person::getAge() const {
	return age;
}

void Person::setAge(int age) {
	this->age = age;
}

float Person::getHeight() const{
	return height;
}

void Person::setHeight(float height) {
	this->height = height;
}

void Person::printAll() {
	cout << "이름: " << name << "\n";
	cout << "성별: " << gender << "\n";
	cout << "나이: " << age << "\n";
	cout << "키: " << height << "\n";
}
