//============================================================================
// Name        : 23_MultidimensionalArrays.cpp
// Author      : Thomas Williams
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	// Can leave the 2, but 3 is necessary
	string animals[2][3] = {
			{"fox", "dog", "cat"},
			{"mouse", "squirrel", "parrot"}
	};

	for(int i=0; i<2; i++) {
		for(int j=0; j<3; j++) {
			cout << animals[i][j] << "\t " << flush;
		}

		cout << endl;
	}

	// Writing out 12 multiplication table (exercise)

	cout << endl << "Multiplication table:" << endl;
	cout <<         "=====================" << endl;

	// Header
	cout << "\t| " << flush;
	for(int i=1; i<=12; i++) {
		cout << i << "\t" << flush;
	}

	// bit of a hack...
	cout << endl <<"--------|------------------------------------------------------------------------------------------" << endl;

	for(int i=1; i<=10; i++) {
		// Column header
		cout << i << "\t| " << flush;

		for(int j=1; j<=12; j++) {
			cout << i*j << "\t" << flush;
		}

		cout << endl;
	}

	return 0;
}
