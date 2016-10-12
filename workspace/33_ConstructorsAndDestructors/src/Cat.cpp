/*
 * Cat.cpp
 *
 *  Created on: 6 Oct 2016
 *      Author: Thomas
 */

#include <iostream>

#include "Cat.h"

using namespace std;

void Cat::speak() {
	if (happy) {
		cout << "Meeooooow!" << endl;
	} else {
		cout << "Tsssss!!" << endl;
	}
}
