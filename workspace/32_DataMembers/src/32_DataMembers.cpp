//============================================================================
// Name        : 32_DataMembers.cpp
// Author      : Thomas Williams
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include "Cat.h"

using namespace std;

int main() {

	Cat tom;
	tom.makeHappy();
	tom.speak();

	Cat bob;
	bob.makeSad();
	bob.speak();

	return 0;
}
