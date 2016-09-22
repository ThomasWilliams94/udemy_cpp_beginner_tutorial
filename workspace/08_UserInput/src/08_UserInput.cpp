//============================================================================
// Name        : 08_UserInput.cpp
// Author      : Thomas Williams
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	// all variables should really be declared at the top of the function,
	// but for learning purposes it is not done here...
	cout << "Enter your name: " << flush;
	string userInput;
	cin >> userInput;
	cout << "You entered: " << userInput << endl;

	cout << "Enter your age: " << flush;
	int age;
	cin >> age;
	cout << "So, you are " << age << " years old!" << endl;

	return 0;
}
