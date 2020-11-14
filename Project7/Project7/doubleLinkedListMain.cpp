#include <iostream>
using namespace std;
#include "doubleLinkedList.h"

int main(void) {

	doublyLinkedList d;
	d.Push(1);
	d.Push(2);
	d.Push(3);
	d.Push(4);
	d.Push(5);
	d.indexPush(2, 6);
	d.display();


	return 0;
}