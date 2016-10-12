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

Person::Person(string name, int age) {
	this->name = name;
	this->age = age;

	cout << "Memory location of object: " << this << endl;
}

string Person::toString() {
	stringstream ss;

	ss << "Name: ";
	ss << name;
	ss << "; Age: ";
	ss << age;

	return ss.str();
}
