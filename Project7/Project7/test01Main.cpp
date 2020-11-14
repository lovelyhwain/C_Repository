#include "test01.h"
#include <fstream>

bool isOpen(char symbol);
bool isClosed(char symbol);
bool matches(char symbol, char opensSymbol);

int main() {
	char symbol;
	Stack stack;
	bool balanced = true;
	char openSymbol;
	ifstream fin;
	fin.open("test.txt");

	while (fin.get(symbol) && balanced) {  //get�Լ�: ��Ʈ������ ���� �� ���� �����µ�, �� ���� �����Ѵ� (int �� ����ȯ ��)
		if (isOpen(symbol))
			stack.Push(symbol);
		else if (isClosed(symbol)) {
			if (stack.Empty())
				balanced = false;
			else {
				openSymbol = stack.Pop();
				balanced = matches(symbol, openSymbol);
			}
		}
	}

	if (!balanced)
		cout << "unbalanced" << endl;
	else if (stack.Empty())
		cout << "balanced" << endl;
	else
		cout << "unbalanced" << endl;

	fin.close();

	return 0;
}


bool isOpen(char symbol) {
	if (symbol == '{' || symbol == '(' || symbol == '[') {
		return true;
	}
	else
		return false;
}


bool isClosed(char symbol) {
	if (symbol == '}' || symbol == ')' || symbol == ']') {
		return true;
	}
	else
		return false;

}
bool matches(char symbol, char opensSymbol) {
	return (  (opensSymbol == '{' && symbol == '}')  || (opensSymbol == '(' && symbol == ')') ||
		(opensSymbol == '[' && symbol == ']') );
}



/*
bool checkMatching(char* filename) {

	int nLine = 1; //���� ����
	int nChar = 0;

	Stack s1; //��ü ����

	char ch;

	FILE* fp = fopen(filename, "r");
	if (fp == '\0') {
		cout << "������ ������������" << endl;
	}
	while ((ch = getc(fp)) != EOF) {
		if (ch == '\n') {
			nLine++;
		}
		nChar++;
		if (ch == '{' || ch == '(' || ch == '[')
			s1.Push(ch);
		else if (ch == '}' || ch == ')' || ch == ']') {
			char prev = s1.Pop();
			if ((ch == '}' && prev != '{') || (ch == ')' && prev != '(') || (ch == ']' && prev != '[')) {
				break;
			}
		}	
	}
	fclose(fp);


	if (!s1.Empty())
		printf("Error! �����߰� (���μ�: %d ���ڼ�: %d", nLine, nChar);
	else
		printf("��ȣ�ݱ����� (���μ�: %d ���ڼ�: %d", nLine, nChar);

	return s1.Empty();
}

void main() {

	checkMatching((char*)"test01.cpp");
	checkMatching((char*)"checkMatching");

}

*/
