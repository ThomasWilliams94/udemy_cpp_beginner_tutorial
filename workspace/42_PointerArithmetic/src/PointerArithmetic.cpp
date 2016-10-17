//============================================================================
// Name        : PointerArithmetic.cpp
// Author      : Thomas Williams
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	const int NSTRINGS = 5;

	string texts[NSTRINGS] = { "one", "two", "three", "four", "five" };

	// This makes *pTexts a pointer to the first element in the array.
	string *pTexts = texts;

	cout << *pTexts << endl;

	++pTexts;

	cout << *pTexts << endl;

	pTexts += 2;

	cout << *pTexts << endl;

	pTexts -= 3;

	cout << *pTexts << endl;

	cout << endl;

	// NB can point to a memory location off the end of an array, and this
	// can be useful in this example, where we want to output all of the
	// elements using the chosen construction
	string *pEnd = &texts[NSTRINGS];

	while (pTexts != pEnd) {
		cout << *pTexts << endl;
		pTexts++;
	}

	cout << endl;

	// Set pTexts back to start
	pTexts = &texts[0];
	long elements = (long) (pEnd - pTexts);

	cout << elements << endl;

	cout << endl;

	// Set pTexts back to start
	pTexts = &texts[0];
	pTexts += NSTRINGS / 2;

	cout << *pTexts << endl;

	return 0;
}
