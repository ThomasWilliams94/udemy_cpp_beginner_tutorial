//============================================================================
// Name        : 44_ReversingStrings.cpp
// Author      : Thomas Williams
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	char text[] = "palindrome";

	int nChars = sizeof(text) - 1; // -1 because of null character at end of string

	// declare pointer to start of array text
	char *pStart = text;

	// declare point to end of array text
	char *pEnd = text + nChars - 1;

	while(pStart < pEnd) {

		char tempStart = *pStart;
		*pStart = *pEnd;
		*pEnd = tempStart;
		++pStart;
		--pEnd;
	}

	cout << text << endl;

	return 0;
}
