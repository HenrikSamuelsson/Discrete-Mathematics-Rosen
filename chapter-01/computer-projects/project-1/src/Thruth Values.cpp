//============================================================================
// Name        : Thruth.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void printThruthValue(bool value);

int main()
{
	bool p = false;
	bool q = false;
	bool conjunction;

	printThruthValue(p);
	printThruthValue(q);
	conjunction = p && q;
	printThruthValue(conjunction);

	return 0;
}

void printThruthValue(bool value)
{
	if (value)
		{
			cout << "T ";
		}
		else
		{
			cout << "F ";
		}
}

