/*
 * Person.cpp
 *
 *  Created on: 12 Oct 2016
 *      Author: Thomas
 */

#include <sstream>
#include "Person.h"


Person::Person() {
	name = "undefined";
	age = 0;
}

Person::Person(string _name, int _age) {
	name = _name;
	age = _age;
}

string Person::toString() {
	stringstream ss;

	ss << "Name: ";
	ss << name;
	ss << "; Age: ";
	ss << age;

	return ss.str();
}
