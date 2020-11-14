#include <iostream>
using namespace std;

#include<iostream>
using namespace std;

class Person {
protected:
    const char* name;
public:
    Person(const char* n) :name(n) {}
    virtual void Print() {
        cout << "\tPerson.Print(): name is " << name << "\n";
    }
    virtual void Print(const char* ch) {
    
    }
};

class Foreigner : public Person {
public:
    Foreigner(const char* n) :Person(n) {}
    //주석1
       /*
    void PrInt() {
        cout << "\tForeigner.Print() : name = " << name << "\n";
    }
    */

    //주석2
    
    virtual void Print() {
        cout << "\tForeigner.virtual_Print():name = " << name << endl;
    }
    
    void Print(const char* ch) {
        cout << "\tForeigner.Print() : name = " << ch << endl;
    }
};


class ChianaForeigner : public Foreigner {
public:
    ChianaForeigner(const char* n) :Foreigner(n) {}
    void Print() {
        cout << "\tChinaForeigner.Print() : name- " << name << endl;
    }
};
