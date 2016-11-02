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
}

Particle::~Particle() {
	// TODO Auto-generated destructor stub
}

} /* namespace tjw */
