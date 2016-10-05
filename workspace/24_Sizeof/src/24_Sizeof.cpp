//============================================================================
// Name        : 24_Sizeof.cpp
// Author      : Thomas Williams
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int values[] = {4, 3, 7, 8};

	cout << sizeof(values) << endl;
	cout << sizeof(int) << endl;

	for(unsigned int i=0; i<sizeof(values)/sizeof(int); i++) {
		cout << values[i] << " " << flush;
	}

	cout << endl;

	return 0;
}
