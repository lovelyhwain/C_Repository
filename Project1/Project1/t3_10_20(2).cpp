#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#define COLS 5

using namespace std;

void swap(int value_a, int value_b);
void swap(int* pointer_a, int* pointer_b);
void swap_ref(int& reference_a, int& reference_b);

int main(void) {
	
	int num_1 = 10, num_2 = 20;
	swap(num_1, num_2);
	cout << "after swap (num_1, num_2)::num_1= " << num_1 << ", num_2 = " << num_2 << endl;

	swap(&num_1, &num_2);
	cout << "after swap (&num_1, &num_2)::num_1= " << num_1 << ", num_2 = " << num_2 << endl;

	num_1 = 10;
	num_2 = 20;

	swap_ref(num_1, num_2);
	cout << "after swap_ref (num_1, num_2)::num_1= " << num_1 << ", num_2 = " << num_2 << endl;

	return 0;
}

void swap(int value_a, int value_b) {
	int tmp;
	tmp = value_a;
	value_a = value_b;
	value_b = tmp;
}

void swap(int* pointer_a, int* pointer_b) {
	int tmp;
	tmp = *pointer_a;
	*pointer_a = *pointer_b;
	*pointer_b = tmp;
}

void swap_ref(int& reference_a, int& reference_b) {
	int tmp;
	tmp = reference_a;
	reference_a = reference_b;
	reference_b = tmp;
}

