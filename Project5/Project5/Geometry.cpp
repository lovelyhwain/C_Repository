#include "Geometry.h"

//Geometry Ŭ����
Geometry::Geometry(double x, double y, int count) {
    if (count == 0) {
        pt = new POINT[1];
        pt->x = x;
        pt->y = y;
    }
    else{
        pt = new POINT[count];
    }
}

Geometry::~Geometry() {
    delete[] pt;
}

void Geometry::Print() {
    cout << "��ǥ�� (" << pt->x << "," << pt->y << ")" << endl;
}

void Point::Print() {
    Geometry::Print();
    cout << Name << endl;
}


//Circle Ŭ����
void Circle::Print() {
    Geometry::Print();
    cout << "�������� " << R << endl;
}

/*
void Circle::Paint() {
    for (double x = -2 * R; x <= 2 * R; x += 2) {
        for (double y = -R; y <= R; y++) {
            if ((x * x + y * y) >= R * R - R / 1.3 && (x * x + y * y) <= R * R + R / 1.3)
                printf("*");
            else printf(" ");
        }
        printf("\n");
    }
}
*/

void Line::setPoint(int idx, double x, double y) {
    pt[idx].x = x;
    pt[idx].y = y;
}

double Line::getLength() {
    double len = 0.0;
    for (int i = 0; i < count - 1; i++)
    {
        // pt[i] -  pt[i+1]
    }
    return len;
}

void Line::print() {
    for (int i = 0; i < count; i++) {
        cout << "\t(" << pt[i].x << "," << pt[i].y << ")" << endl;
    }
    double len = getLength();
    cout << "Total Length:" << len << endl;
}
