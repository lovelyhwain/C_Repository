#include <iostream>
using namespace std;

//연결리스트를 이용해 구현한 스택
struct Node {
	int data;
	Node* next;
};

class Stack {
private:
	Node* topPtr;

public:
	Stack();
	~Stack();
	bool isEmpty() const;
	//bool isFull() const;
	void Push(int e);
	int Pop();
	int Peek() const;
	void display() const;

