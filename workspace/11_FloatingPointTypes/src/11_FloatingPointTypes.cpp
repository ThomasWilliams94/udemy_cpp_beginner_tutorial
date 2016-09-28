//============================================================================
// Name        : 11_FloatingPointTypes.cpp
// Author      : Thomas Williams
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	float fValue = 123.456789876543210;

	cout << sizeof(float) << endl;
	cout << sizeof(fValue) << endl;

	// To use "fixed" and "setprecision", must #include <iomanip>
	cout << fixed << fValue << endl;
	cout << setprecision(40) << fValue << endl;

    double dValue = 123.456789876543210;

	cout << sizeof(double) << endl;
	cout << sizeof(dValue) << endl;

	cout << dValue << endl;


	long double lValue = 123.456789876543210123456;

	cout << sizeof(lValue) << endl;

	cout << lValue << endl;

	// It appears that the double type is automatically long
	// with this compiler... but not sure

	return 0;
}
