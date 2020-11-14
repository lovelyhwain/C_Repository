#include "Stack.h"

Stack::Stack() {
	data = new int[5];
	nElements = 0;
}
Stack::~Stack() {
	delete []data;
}

void::Stack::Push(int item) {
	if (Full()) {
		cout << "스택이 꽉 찼습니다" << endl;
	}
	else {
		data[nElements] = item;
		nElements++;
	}
}

TYPE Stack::Pop() {
	nElements--;
	return data[nElements];
}

int Stack::Number() {
	return nElements;
}

int Stack::Empty() {
	return (nElements == 0);
}

int Stack::Full() {
	return (nElements == SIZE);
}

void Stack::howmany() {
	char choice;
	int num = 0;
	int n = 0;
	printf("'i' ,'o' ,'e' 중에 고르세요\n");
	scanf("%c", &choice);
	while (choice!='e') {
		if (choice == 'i') {  //넣을때
			cout << "몇번 넣을래요?" << endl;
			cin >> num;
			for (int i = 0; i < nElements; i++) {
				cout << n;
				data[i] = n;
			}
		}
		else if (choice == 'o') { //뺄 때
			cout << "몇번 뺄래요?" << endl;
			cin >> num;
			for (int i = nElements; i > i-num; i--) {
				cout << data[i] << endl;
				nElements--;
			}
		}
	}

}

void::Stack::Show() {
	for (int i = 0; i < nElements; i++) {
		cout << data[i] << endl;
	}
}