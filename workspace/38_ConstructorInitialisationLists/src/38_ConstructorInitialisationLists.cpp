//============================================================================
// Name        : 38_ConstructorInitialisationLists.cpp
// Author      : Thomas Williams
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Person.h"
using namespace std;

int main() {

	Person person1("Bob", 42);
	Person person2("Sue", 28);
	Person person3;

	cout << person1.toString() << endl;

	cout << person2.toString() << endl;
	cout << person3.toString() << endl;
	return 0;
}
