//============================================================================
// Name        : 39_Pointers.cpp
// Author      : Thomas Williams
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

// Purpose of function was changed throughout tutorial,
// and I couldn't be bothered to commit different versions
// and explain what was going on >_<
void manipulate(double* value) {
	*value = 10.2;
	cout << "Value of double in manipulate: " << *value << endl;
}

int main() {

	int nValue = 8;

	// can also write:
	// int *pnValue = &nValue;
	int* pnValue = &nValue;

	cout << "Int value: " << nValue << endl;
	cout << "Pointer to int value: " << pnValue << endl << endl;

	nValue = 9;

	cout << "Int value: " << nValue << endl;
	cout << "Pointer to int value: " << pnValue << endl;
	cout << "Int value via pointer: " << *pnValue << endl;

	cout << endl << "===================" << endl;

	double dValue = 1.234;

	cout << "1. dValue: " << dValue << endl;
	manipulate(&dValue);
	cout << "2. dValue: " << dValue << endl;

	return 0;
}
