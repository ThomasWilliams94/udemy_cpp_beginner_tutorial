//============================================================================
// Name        : 29_FunctionParameters.cpp
// Author      : Thomas Williams
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void showMenu() {

	cout << "1. Search" << endl;
	cout << "2. View Record" << endl;
	cout << "3. Quit" << endl;

}

// Corrected naming of function
int getInput() {
	cout << "Enter selection: " << flush;

	int input;
	cin >> input;

	return input;
}

void processSelection(int selection) {

	switch (selection) {
	case 1:
		cout << "Searching .... " << endl;
		break;
	case 2:
		cout << "Viewing .... " << endl;
		break;
	case 3:
		cout << "Quitting .... " << endl;
		break;
	default:
		cout << "Please select an item from the menu." << endl;
	}

}

int main() {

	showMenu();
	int input = getInput();
	processSelection(input);

	return 0;
}
