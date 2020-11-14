#include "Queue.h"

Queue::Queue() {
	front = NULL;
	rear = NULL;
	length = 0;
}

Queue::~Queue() {
	Node* tmpPtr;
	while (front != NULL) {
		tmpPtr = front;
		front = front->next;
		delete tmpPtr;
	}
}

bool Queue::isEmpty() const {
	return (front == NULL);
}

void Queue::enqueue(int item) {
	Node* newNode = new Node;
	newNode->data = item;
	if (front == NULL) {
		front = newNode;
	}
	else {
		rear->next = newNode;
	}
	rear = newNode;
	length++;
}


void Queue::posEnqueue(int pos, int item) {
	Node* newNode = new Node;
	Node* tmpLocation = front;
	newNode->data = item;

	if (pos == 1) {
		newNode->next = front;
		front = newNode;
		
	}
	else {
		for (int i = pos - 2; i > 0; i--) {
			tmpLocation = tmpLocation->next;
		}
		newNode->next = tmpLocation->next;
		tmpLocation->next = newNode;
	}
	length++;
}




int Queue::dequeue() {
	if (isEmpty()) {
		cout << "큐 비어있음" << endl;
		return 0;
	}
	else{
		Node* tmpPtr;
		int item;

		tmpPtr = front;
		item = front->data;
		front = front->next;
		if (front == NULL)
			rear = NULL;
		delete tmpPtr;
		length--;
		return item;
	}
}

int Queue::peek(){
	if (isEmpty()) {
		cout << "큐 비어있음" << endl;
		return 0;
	}
	else {
		cout << "Queue peek() 함수 호출" << endl;
		cout << front->data << endl;
	}
}



void Queue::display() {
	Node* tmpPtr=front;
	while (tmpPtr != NULL) {
		cout << tmpPtr->data << endl;
		tmpPtr = tmpPtr->next;
	}
}

