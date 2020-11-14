#include <iostream>
using namespace std;

struct doubleNode {
	int data;
	doubleNode* next;
	doubleNode* prev;
};

class doublyLinkedList {
private:
	doubleNode* head;
	//doubleNode* location;
	int length;
public:
	doublyLinkedList();
	~doublyLinkedList();

	bool isEmpty() const;
	void Push(int num);
	void indexPush(int pos, int num);
	void Pop();
	void Peek();
	void display();
};