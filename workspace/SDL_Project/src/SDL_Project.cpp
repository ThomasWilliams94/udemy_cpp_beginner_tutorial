//============================================================================
// Name        : 61_BasicSDLProgram.cpp
// Author      : Thomas Williams
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <SDL.h>
#include "Screen.h"

using namespace std;
using namespace tjw;

int main(int argc, char* argv[]) {

	Screen screen;

	if(!screen.init()) {
		cout << "Error initialising SDL." << endl;
	}

	while (true) {
		// Update particles
		// Draw particles
		// Check for messages/events

		if(!screen.processEvents()) {
			break;
		}
	}

	screen.close();

	return 0;
}
