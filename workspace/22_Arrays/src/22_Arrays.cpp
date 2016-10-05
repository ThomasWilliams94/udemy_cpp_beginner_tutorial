//============================================================================
// Name        : 22_Arrays.cpp
// Author      : Thomas Williams
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int values[3];

	values[0] = 4;

	cout << "Array of integers" << endl;
	cout << "=================" << endl;

	cout << values[0] << endl;
	cout << values[1] << endl;
	cout << values[2] << endl;

	cout << endl << "Array of doubles" << endl;
	cout << "================" << endl;

	double numbers[4] = { 2.4, 5.6, 7.8, 9.1 };

	cout << numbers[1] << endl;

	for (int i = 0; i < 4; ++i) {
		cout << "Element at index " << i << ": " << numbers[i] << endl;
	}

	cout << endl << "Initialising with zero values" << endl;
	cout << "================" << endl;

	int numberArray[8] = { };

	for (int i = 0; i < 8; ++i) {
		cout << "Element at index " << i << ": " << numberArray[i] << endl;
	}

	string texts[] = { "apple", "banana", "orange" };

	for (int i = 0; i < 3; ++i) {
		cout << "Element at index " << i << ": " << texts[i] << endl;
	}

	return 0;
}
