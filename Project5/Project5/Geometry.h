#include <iostream>
#include <cmath>
using namespace std;

typedef struct point {
    double x;
    double y;
}POINT;

class Geometry
{
public:
    POINT* pt;
    int count;

    Geometry(double x = 0, double y = 0, int count = 0) {
        this->count = count;
        if (count == 0){
            pt = new POINT[1];  
          //pt = (POINT*)malloc(sizeof(POINT));
            pt->x = x; 
            pt->y = y;
        }
        else{
            pt = new POINT[count];
        }
    }

    ~Geometry() {
        delete[] pt;
        //free(pt);  //malloc사용시 메모리 할당 해제
    }

    void print() {
        cout << "(" << pt->x << "," << pt->y << ")" << endl;
    }
};

class Point : public Geometry
{
public:
    string name;

    Point(double x, double y, string n) :Geometry(x, y), name(n) {}
    void print(){
        Geometry::print();
        cout << "Name:" << name << endl;
    }
};

class Circle : public Geometry
{
public:
    double radius;
    double pi = 3.14;

    Circle(double x, double y, double r) :Geometry(x, y), radius(r) {}

    void print(){
        cout << "원주 : " << (2 * pi * radius) << endl;
        cout << "원의 넓이 : " << pi * radius * radius << endl;
    }
};

class Line : public Geometry
{
public:
    Line(int count = 0) : Geometry(0, 0, count) {}

    void setPoint(int idx, double x, double y){
        pt[idx].x = x;
        pt[idx].y = y;
    }

    double getLength(){
        double len = 0.0;
        for (int i = 0; i < count - 1; i++)     
            len += sqrt(pow((pt[i + 1].x - pt[i].x), 2) + pow((pt[i + 1].y - pt[i].y), 2));
        return len;
    }

    void print(){
        cout << "Pointlist" << endl;
        for (int i = 0; i < count; i++){
            cout << "(" << pt[i].x << "," << pt[i].y << ")" << endl;
        }

        cout << "Length:" << getLength() << endl;
    }
};