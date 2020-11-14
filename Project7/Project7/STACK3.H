template <class T>

class Stack {
	T data[50];
	int nElements;
public:
	Stack():nElements(0){}
	void Push(T item);
	T Pop();
	int Number();
	int Empty();

};
