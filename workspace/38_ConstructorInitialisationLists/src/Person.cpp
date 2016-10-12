/*
 * Person.cpp
 *
 *  Created on: 12 Oct 2016
 *      Author: Thomas
 */

#include <sstream>
#include "Person.h"

Person::Person(string name, int age): name(name), age(age) {

}

string Person::toString() {
	stringstream ss;

	ss << "Name: ";
	ss << name;
	ss << "; Age: ";
	ss << age;

	return ss.str();
}
