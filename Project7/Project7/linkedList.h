#include <iostream>
using namespace std;

//���Ḯ��Ʈ�� �̿��� ������ ����
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

