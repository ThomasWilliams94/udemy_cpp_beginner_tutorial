//============================================================================
// Name        : 53_Inheritance.cpp
// Author      : Thomas Williams
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Animal {
public:
	void speak() { cout << "Grrrrr." << endl; } ;
};

class Cat: public Animal {
public:
	void jump() { cout << "Cat jumping." << endl; } ;
};

class Tiger: public Cat {
public:
	void attackAntelope() { cout << "Tiger attacking antelope." << endl; } ;
};

int main() {

	Animal a;
	a.speak();

	Cat c;
	c.speak();
	c.jump();

	Tiger t;
	t.speak();
	t.jump();
	t.attackAntelope();
	return 0;
}
