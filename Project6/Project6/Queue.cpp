#include "Queue.h"

Queue::Queue() {
    queue = new int[SIZE];
    maxSize = SIZE;
    dataSize = 0;
    frontIndex = 0;
    rearIndex = 0;
}

Queue::~Queue() {
    delete[] queue;
}

bool Queue::empty() const {
    return dataSize == 0;
}

bool Queue::full() const {
    return dataSize == maxSize;
}

int Queue::size() const {
    return dataSize;
}

int Queue::front() const {
    if (empty()) {
        cout << "Queue is empty!" << endl;
    }
    return queue[frontIndex];
}

void Queue::pushBack(const int data) {
    if (full()) {
        cout << "Queue is full!" << endl;
    }
    else {
        queue[rearIndex] = data;
        rearIndex = (rearIndex + 1) % maxSize;// circular array
        dataSize++;
    }
}

int Queue::popFront() {
    int frontData = front();// if empty, error occurred
    frontIndex = (frontIndex + 1) % maxSize;// circular array
    dataSize--;
    return frontData;
}

void Queue::display() const {
    for (int i = 0; i < dataSize; i++) {
        int tempIndex = (frontIndex + i) % maxSize;
        printf("[%d] ", queue[tempIndex]);
    }
}