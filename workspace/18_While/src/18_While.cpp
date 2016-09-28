//============================================================================
// Name        : 18_While.cpp
// Author      : Thomas Williams
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int i = 0;

	cout << "Starting loop." << endl;

	while (i < 5) {
		cout << i << endl;
		++i;
	}

	cout << "Programming quitting..." << endl;

	return 0;
}
