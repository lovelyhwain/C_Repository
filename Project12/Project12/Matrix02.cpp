#include<iostream> 
#include<vector>
using namespace std;

typedef struct Point {

    int x;
    int y;

}POINT;

class bugPoint {
public:

    vector<POINT> v;

public:
    //bugPoint() {}

    void Chase() {
        POINT pt;
        pt.x = 0; pt.y = 0;
        v.push_back(pt);

        while (1)
        {
            pt.x += (rand() % 5 - 2); // x 움직이는 범위 지정-2 ~ +2
            pt.y += (rand() % 5 - 2);
            if (pt.x < 0) {
                pt.x = 0;
            }
            else if (pt.x > 18) {
                pt.x = 18;
            }
            if (pt.y < 0) {
                pt.y = 0;
            }
            else if (pt.y > 18) {
                pt.y = 18;
            }
            v.push_back(pt);

            if (pt.x == 18 && pt.y == 18) { break; }
        }
    }

    void Print() {
        for (int i = 1; i < v.size(); i++) {
            cout << i << "번째 : " << v[i].x << "," << v[i].y << endl;
        }
    }

};
