//============================================================================
// Name        : 61_BasicSDLProgram.cpp
// Author      : Thomas Williams
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <SDL.h>
#include <math.h>
#include "Screen.h"

using namespace std;
using namespace tjw;

int main(int argc, char* argv[]) {

	Screen screen;

	if (!screen.init()) {
		cout << "Error initialising SDL." << endl;
	}

	int max = 0;

	while (true) {
		// Update particles

		// Draw particles
		int elapsed = SDL_GetTicks();
		unsigned char red = (1 + sin(elapsed*0.0005))*128;
		unsigned char green = (1 + sin(elapsed*0.0003))*128;
		unsigned char blue = (1 + sin(elapsed*0.0002))*128;

		for(int y=0; y < Screen::SCREEN_HEIGHT; y++) {
			for(int x=0; x < Screen::SCREEN_WIDTH; x++) {
				screen.setPixel(x, y, red, green, blue);
			}
		}

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
