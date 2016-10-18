//============================================================================
// Name        : 57_StaticKeyword.cpp
// Author      : Thomas Williams
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

// .h header file
class Test {
public:
	// Initialisation of const must be done here
	static int const MAX = 99;

private:
	int id;
	static int count;

public:
	Test() {
		id = count++;
	}
	;

	int getId() {
		return id;
	}

	static void showInfo() {
		cout << count << endl;
	}
	;

};

// .cpp source
int Test::count = 0;

int main() {

	cout << Test::MAX << endl;

	// no Test obejcts yet created, so count == 0
	Test::showInfo();

	// initialiser increments count variable
	Test test1;
	cout << "Object 1 id: " << test1.getId() << endl;

	Test::showInfo();

	Test test2;
	cout << "Object 2 id: " <<test2.getId() << endl;
	Test::showInfo();

	Test test3;
	cout << "Object 3 id: " << test3.getId() << endl;
	Test::showInfo();

	return 0;
}
