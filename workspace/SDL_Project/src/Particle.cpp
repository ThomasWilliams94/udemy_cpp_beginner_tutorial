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

Particle::Particle() :	m_x(0), m_y(0) {
	init();
}

void Particle::init() {
	m_x = 0;
	m_y = 0;
	m_direction = (2.0 * M_PI * rand()) / RAND_MAX;
	m_speed = ((2.0 * rand() / RAND_MAX) - 1) * 0.04;

	m_speed *= m_speed;
}

void Particle::update(int interval) {

	m_direction += interval * 0.0015;

	double xSpeed = m_speed * cos(m_direction);
	double ySpeed = m_speed * sin(m_direction);

	// Interval is similar (the same as?) to deltaTime in Unity?
	m_x += xSpeed * interval;
	m_y += ySpeed * interval;

	if (m_x < -1 || m_x > 1 || m_y < -1 || m_y > 1) {
		init();
	}

	if(rand() < RAND_MAX / 100) {
		init();
	}
}

Particle::~Particle() {
	// TODO Auto-generated destructor stub
}

} /* namespace tjw */
