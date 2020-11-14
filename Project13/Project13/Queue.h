#include <iostream>
using namespace std;

struct Node {
	int data;
	Node* next;
};

class Queue {
public:
	Node* front;
	Node* rear;
	int length;

	Queue();
	~Queue();

	bool isEmpty() const;

	void enqueue(int item);
	void posEnqueue(int pos, int item);
	int dequeue();
	int peek();

	void display();
};