#include "Person.H"

Person::Person(const string name, const string gender, int age, float height){ //������
	cout << "������ ȣ��" << endl;
	this->name = name;
	this->gender = gender;
	this->age = age;
	this->height = height;
}

Person::~Person(){ //�Ҹ���
	cout << "�Ҹ��� ȣ��" << endl;
}

string Person::getName() const{ //�̸� getter
	return name;
}

void Person::setName(const string name){ //�̸� setter
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
	cout << "�̸�: " << name << "\n";
	cout << "����: " << gender << "\n";
	cout << "����: " << age << "\n";
	cout << "Ű: " << height << "\n";
}
