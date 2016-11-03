/*
 * Swarm.h
 *
 *  Created on: 2 Nov 2016
 *      Author: Thomas
 */

#ifndef SWARM_H_
#define SWARM_H_

#include "Particle.h"

namespace tjw {

class Swarm {
public:
	const static int NPARTICLES = 10000;

private:
	Particle *m_particles;
	int lastTime;

public:
	Swarm();
	virtual ~Swarm();
	const Particle * const getPartiles() {
		return m_particles;
	}
	;
	void update(int elapsed);
};

} /* namespace tjw */

#endif /* SWARM_H_ */
