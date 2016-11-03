/*
 * Swarm.cpp
 *
 *  Created on: 2 Nov 2016
 *      Author: Thomas
 */

#include "Swarm.h"

namespace tjw {

Swarm::Swarm() {
	m_particles = new Particle[NPARTICLES];
}

Swarm::~Swarm() {
	delete[] m_particles;
}

void Swarm::update() {

	for (int i = 0; i < Swarm::NPARTICLES; i++) {
		m_particles[i].update();
	}
}

} /* namespace tjw */
