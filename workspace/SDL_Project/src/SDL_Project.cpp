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
#include <stdlib.h>
#include <time.h>
#include "Screen.h"
#include "Swarm.h"

using namespace std;
using namespace tjw;

int main(int argc, char* argv[]) {

	srand(time(NULL));

	Screen screen;

	if (!screen.init()) {
		cout << "Error initialising SDL." << endl;
	}

	Swarm swarm;

	while (true) {
		// Update particles

		int elapsed = SDL_GetTicks();

		screen.clear();

		swarm.update(elapsed);

		unsigned char red = (1 + sin(elapsed*0.0005))*128;
		unsigned char green = (1 + sin(elapsed*0.0003))*128;
		unsigned char blue = (1 + sin(elapsed*0.0002))*128;

		// Draw particles
		const Particle * const particles = swarm.getPartiles();
		for(int i=0; i<Swarm::NPARTICLES; i++) {
			Particle particle = particles[i];

			int x = (particle.m_x + 1) * Screen::SCREEN_WIDTH / 2;
			int y = (particle.m_y * Screen::SCREEN_WIDTH / 2) + Screen::SCREEN_HEIGHT / 2;

			screen.setPixel(x, y, red, green, blue);
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
