//============================================================================
// Name        : 46_ConstKeyword.cpp
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

	const double PI = 3.141592;
	cout << PI << endl;

	Animal animal;
	animal.setName("John");
	animal.speak();

	int value = 8;

	//int * const pValue = &value; // read right to left - "a constant pointer, pointing to an int"
	int * pValue = &value;
	cout << *pValue << endl;

	int number = 11;
	pValue = &number;
	*pValue = 12;

	cout << *pValue << endl;

	return 0;
}
