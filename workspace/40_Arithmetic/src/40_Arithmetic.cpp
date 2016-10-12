//============================================================================
// Name        : 40_Arithmetic.cpp
// Author      : Thomas Williams
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	double value1 = (double)7/2;
	cout << value1 << endl;

	int value2 = (int)7.3;
	cout << value2 << endl;

	int value3 = 8;
	value3 += 1; // value3 = value3 + 1 OR value3++ OR ++value3;
	cout << value3 << endl;

	int value4 = 10;
	value4 /= 5;
	cout << value4 << endl;

	int value5 = 17%3;
	cout << value5 << endl;

	int value6 = 17;
	value6 %= 3;
	cout << value6 << endl;

	return 0;
}
