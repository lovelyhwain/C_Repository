#include <iostream>
using namespace std;

#define SIZE 100
//const int MAX = 100;

class Queue {
public:
	Queue();
	~Queue();

	bool empty() const;
	bool full() const;
	int size() const;
	int front() const;
	void pushBack(const int data);
	int popFront();

	void display() const;

private:
	int* queue;
	int maxSize;
	int dataSize;
	int frontIndex;
	int rearIndex;

};