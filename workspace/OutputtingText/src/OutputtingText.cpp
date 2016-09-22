			#include <iostream>
using namespace std;

int main() {

	// flush does not create a new line
cout << "Starting program..." << flush;

	// endl does create a new line
	cout << "This is some text." << endl;

	// This second line outputted on new line
	cout << "This is a second line of text." << endl;

	// Outputting more than one string in one statement
	// Also demonstrates different ways of including a space.
	cout << "Banana." << " " << "Apple. " << "Orange." << endl;
	return 0;
}
