/*
 * Animals.h
 *
 *  Created on: 17 Oct 2016
 *      Author: Thomas
 */

#ifndef ANIMALS_H_
#define ANIMALS_H_

#include <iostream>
using namespace std;

namespace tjw {

const string CATNAME = "Tiddles";

class Cat {
public:
	Cat();
	virtual ~Cat();
	void speak();
};

} /* namespace tjw */

#endif /* ANIMALS_H_ */
