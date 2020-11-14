#include <iostream>
using namespace std;
#include <vector>

stack<A*> s;
s.push(new A);
s.push(new B);
s.push(new C);
cout << "size: " << s.size() << endl;

A* t = s.top();
t->Print();
s.pop();
delete t;

t = s.top();
t->Print();
s.pop();
delete t;

t = s.top();
t->Print();
s.pop();
delete t;