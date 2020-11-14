#include "linkedList.h"

Stack::Stack() {
	topPtr = NULL;
}

Stack::~Stack() {
	Node* tmpPtr = topPtr;
	while (tmpPtr != NULL) {
		topPtr = topPtr->next;
		delete tmpPtr;
	}
} 

bool Stack::isEmpty() const {
	return (topPtr == NULL);
}
                                                      
void Stack::Push(int e) {
	Node* newNode = new Node;
	newNode->data = e;
	newNode->next = topPtr;
	topPtr = newNode;

}

int Stack::Pop() {
	if (isEmpty()) {
		cout << "���� �������" << endl;
		return 0;
	} 
	else {
		int item;
		Node* tmpPtr = topPtr;
		item = topPtr->data;
		topPtr = topPtr->next;
		delete tmpPtr;
		return item;
	}

}

int Stack::Peek() const { //���� �ֱٿ� ���� ���� ������
	if(isEmpty()) {
		cout << "���� �������" << endl;
	}
	else {
		return topPtr->data;
		//cout << topPtr->data << endl;
	}
}

void Stack::display() const{
	Node* location = topPtr;
	cout << "��� ��ü ��� ���" << endl;
	while (location!=NULL) {
		cout << location->data << endl;
		location = location->next;
	}
}