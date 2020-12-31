//============================================================================
// Name        : truth_values.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

void printProjectInfo(void);
void printTruthValue(bool value);
void printHelpSection(void);
void printHeader(void);

bool conjunction(bool s, bool t);

int main()
{
	bool p;
	bool q;
	
	printProjectInfo();
	printHelpSection();
	printHeader();

	for (int i = 0; i < 4; i++)
	{
		q = ( i >> 0 ) & 0x01;
		p = ( i >> 1 ) & 0x01;
		printTruthValue(p);
		printTruthValue(q);
		printTruthValue(conjunction(p, q));
		std::cout << std::endl;
	}

	return 0;
}

void printTruthValue(bool value)
{
	if (value)
		{
			std::cout << "T ";
		}
		else
		{
			std::cout << "F ";
		}
}

bool conjunction(bool s, bool t)
{
	return s && t;
}

void printHelpSection(void)
{
	std::cout << "How to read the table: " << std::endl;
	std::cout << "The given propositions are p and q." << std::endl;
	std::cout << "Conjunction is indicated by &." << std::endl;
	std::cout << std::endl;
}

void printHeader(void)
{
	std::cout << "p q &" << std::endl;
}

void printProjectInfo(void)
{
	std::cout << "Discrete Mathematics and Its Applications by Kenneth H. Rosen" << std::endl;
	std::cout << "Chapter 1 - Computer projects - Project 1." << std::endl;
	std::cout << std::endl;
}