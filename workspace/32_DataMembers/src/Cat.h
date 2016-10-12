/*
 * Cat.h
 *
 *  Created on: 6 Oct 2016
 *      Author: Thomas
 */

#ifndef CAT_H_
#define CAT_H_

class Cat {

private:
	bool happy; // in C++ 11 can set default values here.

public:
	void speak();
	void makeHappy();
	void makeSad();
};

#endif /* CAT_H_ */
