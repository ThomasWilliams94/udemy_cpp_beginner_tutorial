//============================================================================
// Name        : 12_CharAndBool.cpp
// Author      : Thomas Williams
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	bool bValue = true;
	cout << bValue << endl;

	char cValue1 = '55';
	char cValue2 = 55;

	cout << cValue1 << endl;
	cout << (int)cValue1 << endl;
	cout << cValue2 << endl;
	cout << "Size of char: " << sizeof(char) << endl;

	wchar_t wValue = 'i';

	cout << (char)wValue << endl;
	cout << "Size of wchar_t: " << sizeof(wchar_t) << endl;

	return 0;
}
