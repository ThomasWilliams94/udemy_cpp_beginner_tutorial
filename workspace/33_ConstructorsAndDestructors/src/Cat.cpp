/*
 * Cat.cpp
 *
 *  Created on: 6 Oct 2016
 *      Author: Thomas
 */

#include <iostream>

#include "Cat.h"

using namespace std;

Cat::Cat() {
	cout << "Cat created." << endl;

	happy = true;
}

Cat::~Cat() {
	cout << "Cat destroyed." << endl;
}

void Cat::speak() {
	if (happy) {
		cout << "Meeooooow!" << endl;
	} else {
		cout << "Tsssss!!" << endl;
	}
}
