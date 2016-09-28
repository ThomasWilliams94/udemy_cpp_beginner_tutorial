//============================================================================
// Name        : 19_DoWhile.cpp
// Author      : Thomas Williams
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	// preliminary example
	int value = 7;

	do {
		cout << "Hello" << endl;
	} while (value < 7);

	// Lesson code

	const string password = "hello"; // cannot reassign value of password with const

	string input;

	do {
		cout << "Enter your password > " << flush;

		cin >> input;

		if (input != password) {
			cout << "Access denied." << endl;
		}

	} while (input != password);

	cout << "Password accepted." << endl;

}
