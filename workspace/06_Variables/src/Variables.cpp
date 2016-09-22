//============================================================================
// Name        : Variables.cpp
// Author      : Thomas Williams
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int numberCats = 5;
	int numberDogs = 7;
	int numberFish = 12;
	int numberAnimals = numberCats + numberDogs + numberFish;

	cout << "Number of cats: " << numberCats << endl;
	cout << "Number of dogs: " << numberDogs << endl;
	cout << "Number of fish: " << numberFish << endl;

	cout << "Total number of animals: " << numberAnimals << endl;

	cout << "New dog acquired!" << endl;

	// Increment the number of dogs by 1. (But ONLY numberDogs, not numberAnimals)
	++numberDogs;

	cout << "New number of dogs: " << numberDogs << endl;

	// Must also "recalculate" numberAnimals
	numberAnimals = numberCats + numberDogs + numberFish;

	cout << "New total number of animals: " << numberAnimals << endl;

	return 0;
}
