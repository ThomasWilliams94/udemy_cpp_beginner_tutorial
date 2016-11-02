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

	if (!screen.init()) {
		cout << "Error initialising SDL." << endl;
	}

	while (true) {
		// Update particles
		// Draw particles
		for(int y=0; y < Screen::SCREEN_HEIGHT; y++) {
			for(int x=0; x < Screen::SCREEN_WIDTH; x++) {
				screen.sexPixel(x, y, 128, 0, 255);
			}
		}

		screen.sexPixel(400, 300, 255, 255, 255);

		// Draw the screen
		screen.update();

			// Check for messages/events
		if (!screen.processEvents()) {
			break;
		}
	}

	screen.close();

	return 0;
}
