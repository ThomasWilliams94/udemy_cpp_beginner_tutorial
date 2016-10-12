/*
 * Person.h
 *
 *  Created on: 12 Oct 2016
 *      Author: Thomas
 */

#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>

using namespace std;

class Person {
private:
	string name;
	int age;

public:
	Person();
	Person(string _name) { name = _name; age = 0; };
	Person(string _name, int _age);

	string toString();
};

#endif /* PERSON_H_ */
