/*
 * Particle.cpp
 *
 *  Created on: 2 Nov 2016
 *      Author: Thomas
 */

#include "Particle.h"
#include <math.h>
#include <stdlib.h>

namespace tjw {

Particle::Particle() : m_x(0), m_y(0) {
	m_direction = (2.0 * M_PI * rand())/RAND_MAX;
	m_speed = ((2.0 * rand()/RAND_MAX) - 1) * 0.0002;
}

void Particle::update(int interval) {
	double xSpeed = m_speed * cos(m_direction);
	double ySpeed = m_speed * sin(m_direction);

	// Interval is similar (the same as?) to deltaTime in Unity?
	m_x += xSpeed * interval;
	m_y += ySpeed * interval;
}

Particle::~Particle() {
	// TODO Auto-generated destructor stub
}

} /* namespace tjw */
