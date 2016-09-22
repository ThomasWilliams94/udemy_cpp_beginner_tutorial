//============================================================================
// Name        : 10_IntegerTypes.cpp
// Author      : Thomas Williams
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <climits>
using namespace std;

int main() {

	int value = -54645;
	cout << value << endl;

	cout << "Max int value: " << INT_MAX << endl;
	cout << "Min int value: " << INT_MIN << endl;
	cout << "Long max value: " << LONG_MAX << endl;

	long long int lValue = 234543453453;
	cout << lValue << endl;

	short int sValue = 23434;
	cout << sValue << endl;

	cout << "Size of int: " << sizeof(int) << endl;
	cout << "Size of long int: " << sizeof(long int) << endl;
	cout << "Size of long long int: " << sizeof(long long int) << endl;
	cout << "Size of short int: " << sizeof(short int) << endl;

	unsigned int uValue = 25468;
	cout << uValue << endl;
	cout << "Size of unsigned int: " << sizeof(unsigned int) << endl;

	return 0;
}
