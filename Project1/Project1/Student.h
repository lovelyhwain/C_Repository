#include <iostream>
#include <string>

using namespace std;

class Student {
private:
	string name;
	int *age;
	string id;
	string major;

public:
	//Student(); //����Ʈ ������
	Student(string name, int age, string id, string major); //������
	~Student();

	string getName();
	void setName(string name);

	int getAge();
	void setAge(int age);

	string getId();
	void setId(string id);

	string getMajor();
	void setMajor(string major);

	void setStudent(string name, int age, string id, string major);

	void printAll();
};