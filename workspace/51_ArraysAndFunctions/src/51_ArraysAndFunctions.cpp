//============================================================================
// Name        : 51_ArraysAndFunctions.cpp
// Author      : Thomas Williams
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

// with this syntax, we lose the size information from the array
// therefore, it is common to pass in the number of elements
// as a parameter.
void show1(const int nElements, string texts[]) {
	for (int i = 0; i < nElements; i++) {
		cout << texts[i] << endl;
	}
}

void show2(const int nElements, string *texts) {
	for (int i = 0; i < nElements; i++) {
		cout << texts[i] << endl;
	}
}

// This syntax retains size info, but is not very nice...
void show3(string (&texts)[3]) {
	for (int i = 0; i < sizeof(texts)/sizeof(string); i++) {
		cout << texts[i] << endl;
	}
}

char *getMemory () {

	char *pMem = new char[100]; // this memory not deallocated until delete used

	return pMem;
}

void freeMemory(char *pMem) {
	delete [] pMem;
}

int main() {

	string texts[] = { "apple", "orange", "banana" };

	show1(sizeof(texts) / sizeof(string), texts);

	show2(sizeof(texts) / sizeof(string), texts);

	show3(texts);

	char *pMemory = getMemory();
	freeMemory(pMemory);

	return 0;
}
