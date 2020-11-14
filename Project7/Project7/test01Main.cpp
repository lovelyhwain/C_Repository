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

	while (fin.get(symbol) && balanced) {  //get함수: 스트림에서 문자 한 개를 가져온뒤, 그 값을 리턴한다 (int 로 형변환 됨)
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

	int nLine = 1; //문장 개수
	int nChar = 0;

	Stack s1; //객체 생성

	char ch;

	FILE* fp = fopen(filename, "r");
	if (fp == '\0') {
		cout << "파일이 존재하지않음" << endl;
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
		printf("Error! 문제발견 (라인수: %d 문자수: %d", nLine, nChar);
	else
		printf("괄호닫기정상 (라인수: %d 문자수: %d", nLine, nChar);

	return s1.Empty();
}

void main() {

	checkMatching((char*)"test01.cpp");
	checkMatching((char*)"checkMatching");

}

*/
