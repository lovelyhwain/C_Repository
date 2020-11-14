#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main(void) {

	FILE* fp = fopen("test.txt", "rt");

	int v[5] = { 11,22,33,44,55 };

	fwrite(v, sizeof(int), 5, fp);

	fclose(fp);

	return 0;
}