//============================================================================
// Name        : 26_Switch.cpp
// Author      : Thomas Williams
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int value = 18;

	switch (value) {
	case 4:
		cout << "Value is 4." << endl;
		break;
	case 5:
		cout << "Value is 5." << endl;
		break;
	case 6:
		cout << "Value is 6." << endl;
		break;
	default:
		cout << "Unrecognised value." << endl;
	}

	return 0;
}
