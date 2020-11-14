#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

using namespace std;

class Person {
private:
	string name; //이름
	string gender; //성별 
	int age; //나이
	float height; //키
	
public:
	Person(const string name, string gender, int age, float height);
	~Person();

	string getName() const;
	void setName(const string name);

	string getGender() const;
	void setGender(const string gender);

	int getAge() const;
	void setAge(int age);

	float getHeight() const;
	void setHeight(float height);

	void printAll();
};


