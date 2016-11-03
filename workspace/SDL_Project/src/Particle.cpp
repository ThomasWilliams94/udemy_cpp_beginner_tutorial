/*
 * Particle.cpp
 *
 *  Created on: 2 Nov 2016
 *      Author: Thomas
 */

#include "Particle.h"
#include <stdlib.h>

namespace tjw {

Particle::Particle() {
	m_x = (2.0 * rand()) / RAND_MAX - 1;
	m_y = (2.0 * rand()) / RAND_MAX - 1;

	m_xSpeed = ((2.0 * rand()) / RAND_MAX - 1) * 0.005;
	m_ySpeed = ((2.0 * rand()) / RAND_MAX - 1) * 0.005;
}

void Particle::update() {
	m_x += m_xSpeed;
	m_y += m_ySpeed;

	if (m_x < -1.0 || m_x >= 1.0) {
		m_xSpeed = -m_xSpeed;
	}

	if (m_y < -1.0 || m_y >= 1.0) {
		m_ySpeed = -m_ySpeed;
	}
}

Particle::~Particle() {
	// TODO Auto-generated destructor stub
}

} /* namespace tjw */
