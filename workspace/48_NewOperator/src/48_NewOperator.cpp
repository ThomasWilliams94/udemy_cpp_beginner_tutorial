//============================================================================
// Name        : 48_NewKeyword.cpp
// Author      : Thomas Williams
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Animal {
private:
	string name;

public:
	Animal() {
		cout << "Animal created." << endl;
	}
	;
	Animal(const Animal& other) :
			name(other.name) {
		cout << "Animal created by copying" << endl;
	}
	;

	~Animal() {
		cout << "Destructor called" << endl;
	}
	;

	void setName(string name) {
		this->name = name;
	}
	;
	void speak() const {
		cout << "My name is: " << name << endl;
	}
	;
};

int main() {

	Animal *pCat1 = new Animal(); // when memory is allocated with "new", you MUST destroy the object manually

	(*pCat1).setName("Freddy"); // possible, but ugly syntax
	pCat1->speak(); // better syntax.

	delete pCat1; // always call delete if you call new!

	return 0;
}
