//============================================================================
// Name        : truth_values.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void printTruthValue(bool value);

int main()
{
	bool p;
	bool q;
	bool conjunction;
	
	for (int i = 0; i < 4; i++)
	{
		p = ( i >> 0 ) & 0x01;
		q = ( i >> 1 ) & 0x01;
	
		bool conjunction;

		printTruthValue(p);
		printTruthValue(q);
		conjunction = p && q;
		printTruthValue(conjunction);
		cout << endl;
	}

	return 0;
}

void printTruthValue(bool value)
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

