//============================================================================
// Name        : 52_Namespaces.cpp
// Author      : Thomas Williams
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Cat.h"
#include "Animals.h"
using namespace std;
using namespace tjw;

int main() {

	Cat cat;
	cat.speak();

	cats::Cat cat2;
	cat2.speak();

	cout << tjw::CATNAME << endl;
	cout << cats::CATNAME << endl;
	cout << CATNAME << endl;
	return 0;
}
