//============================================================================
// Name        : 33_ConstructorsAndDestructors.cpp
// Author      : Thomas Williams
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Cat.h"
using namespace std;

int main() {
	cout << "Starting program..." << endl;

	// Curly brackets here force destruction of cat object
	{
		Cat bob;
		bob.speak();
	}

	cout << "Ending program..." << endl;

	return 0;
}
