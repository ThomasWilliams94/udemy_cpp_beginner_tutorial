//============================================================================
// Name        : 56_TwosComplement.cpp
// Author      : Thomas Williams
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	char value = 127; // max value you can store in char

	cout << (int)value << endl;

	value++; // "incrementing" makes the value go to min value!

	cout << (int)value << endl;

	return 0;
}
