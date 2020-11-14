#include "doubleLinkedList.h"

doublyLinkedList::doublyLinkedList() {
    head = NULL;
    //location = NULL;
    length = 0;
}

doublyLinkedList::~doublyLinkedList() {
    doubleNode* tmpPtr = head;
    while (tmpPtr != NULL) {
        head = head->next;
        delete tmpPtr;
    }
}

bool doublyLinkedList::isEmpty() const {
    return (head == NULL);
}

void doublyLinkedList::Push(int num) {
    if (isEmpty()) {
        doubleNode* newNode = new doubleNode;
        newNode->data = num;
        newNode->prev = NULL;
        newNode->next = NULL;
        head = newNode;
        length++;
    }
    else {
        doubleNode* newNode = new doubleNode;
        newNode->data = num;
        newNode->next = head;
        head->prev = newNode->next;
        head = newNode;
        length++;
    }
}

void doublyLinkedList::indexPush(int pos, int num) {
    doubleNode* newNode = new doubleNode;
    doubleNode* tmpLocation = head;

    if (pos == length) {
        newNode->data = num;
        newNode->next = head;
        newNode->prev = NULL;
        head = newNode;
    }
    else {
        for (int i = pos - 2; i > 0; i++) {
            tmpLocation = tmpLocation->next;
        }
        newNode->data = num;
        newNode->next = tmpLocation->next;
        tmpLocation->next = newNode;
        length++;
    }
}

void doublyLinkedList::Pop() {
    doubleNode* tmpLocation = head;
    cout << head->data << endl;
    tmpLocation = tmpLocation->next;
    head = tmpLocation;
    length--;
}

void doublyLinkedList::Peek() {
    cout << head->data << endl;
}

void doublyLinkedList::display() {
    doubleNode* tmpLocation = head;
    while (tmpLocation != NULL) {
        cout << tmpLocation->data << endl;
        tmpLocation = tmpLocation->next;
    }
}