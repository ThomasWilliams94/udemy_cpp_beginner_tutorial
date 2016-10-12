//============================================================================
// Name        : 41_ArrayPointers.cpp
// Author      : Thomas Williams
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	string texts[] = { "one", "two", "three" };

	string* pTexts = texts;

	for (unsigned int i = 0; i < sizeof(texts) / sizeof(string); ++i) {
		cout << pTexts[i] << " " << flush;
	}

	cout << endl;

	for (unsigned int i = 0; i < sizeof(texts) / sizeof(string); ++i, ++pTexts) {
		cout << *pTexts << " " << flush;
	}

	string* pElement = texts;
	string* pEnd = &(texts[2]); // getting last element in array

	cout << endl;

	while(true) {
		cout << *pElement << " " << flush;

		if(pElement == pEnd) {
			break;
		}


		++pElement;

	}





	return 0;
}
