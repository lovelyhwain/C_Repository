#ifndef HASH_H
#define HASH_H

class myHash {
private:
	int code;
public:
	myHash(int c) {
		if (c % 10 == 0)
			c--;
		code = c;
	}

	int Hash(const char* key) {
		int sum = 0;
		int len = strlen(key);
		for (int i = 0; i < len; i++)
			sum += (key[i] * code);
		return sum;
	}
};

class Node {
	int data;
	Node* prev;
	Node* next;
public:
	Node(int d) :data(d) {
		prev = next = NULL;
	}
};

#endif

