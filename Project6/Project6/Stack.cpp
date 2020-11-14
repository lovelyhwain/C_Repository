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
		cout << "������ �� á���ϴ�" << endl;
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
	printf("'i' ,'o' ,'e' �߿� ������\n");
	scanf("%c", &choice);
	while (choice!='e') {
		if (choice == 'i') {  //������
			cout << "��� ��������?" << endl;
			cin >> num;
			for (int i = 0; i < nElements; i++) {
				cout << n;
				data[i] = n;
			}
		}
		else if (choice == 'o') { //�� ��
			cout << "��� ������?" << endl;
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