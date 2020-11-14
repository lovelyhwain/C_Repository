#include "Queue.h"

int main(void) {

	Queue q;
	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);
	q.enqueue(4);
	q.posEnqueue(3, 5);

	q.display();
	//q.dequeue();
	//q.peek();
	
	q.dequeue();
	q.dequeue();
	q.display();

	return 0;
}