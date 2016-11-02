/*
 * Particle.h
 *
 *  Created on: 2 Nov 2016
 *      Author: Thomas
 */

#ifndef PARTICLE_H_
#define PARTICLE_H_

namespace tjw {

// for structs, member variables are public by default.
// Making the member variables public is a compromise for efficiency
// when writing games or simulations with lots of particles
struct Particle {
	double m_x;
	double m_y;

public:
	Particle();
	virtual ~Particle();
};

} /* namespace tjw */

#endif /* PARTICLE_H_ */
