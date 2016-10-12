//============================================================================
// Name        : 34_GettersAndSetters.cpp
// Author      : Thomas Williams
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Person.h"
using namespace std;

int main() {

	Person person;

	cout << person.toString() << endl;

	person.setName("Thomas");

	cout << "Name of person using get method: " << person.getName() << endl;

	return 0;
}
