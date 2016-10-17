//============================================================================
// Name        : 43_CharArrays.cpp
// Author      : Thomas Williams
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	string text = "hello";

	cout << text << endl;

	char textArray[] = "hello";

	cout << textArray << endl;

	// note the null string character
	for (int i = 0; i < sizeof(textArray); i++) {
		cout << i << ": " << textArray[i] << endl;
	}

	int k = 0;

	while (true) {

		if (text[k] == 0) {
			break;
		}

		cout << text[k] << flush;

		k++;
	}

	return 0;
}
