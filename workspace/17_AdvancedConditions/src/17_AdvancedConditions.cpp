//============================================================================
// Name        : 17_AdvancedConditions.cpp
// Author      : Thomas Williams
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
 * == equality test
 * != now equal
 * <  less then
 * >  greater than
 * <= less than or equal to
 * >= great than or equal to
 */

#include <iostream>
using namespace std;

int main() {

	int value1 = 7;
	int value2 = 4;

	if (value1 >= 5) {
		cout << "Condition 1: true" << endl;
	} else {
		cout << "Condition 1: false" << endl;
	}

	if (value1 == 7 && value2 < 3) {
		cout << "Condition 2: true" << endl;
	} else {
		cout << "Condition 2: false" << endl;
	}

	if (value1 == 7 || value2 < 3) {
		cout << "Condition 3: true" << endl;
	} else {
		cout << "Condition 3: false" << endl;
	}

	// better to break up statements if possible.
	if ((value2 != 8 && value1 == 10) || value1 < 10) {
		cout << "Condition 4: true" << endl;
	} else {
		cout << "Condition 4: false" << endl;
	}

	bool condition1 = (value2 != 8) && (value1 == 10);
	cout << condition1 << endl;
	bool condition2 = value1 < 10;
	cout << condition2 << endl;

	bool condition3 = condition1 || condition2;
	cout << condition3 << endl;

	return 0;
}
