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
void printHeader(const char* header);
void printSeparator(void);
void printFooter(void);

bool conjunction(bool s, bool t);

int main()
{
	bool p;
	bool q;
	
	printProjectInfo();
	printHelpSection();
	printHeader("Conjunction");
	for (int i = 0; i < 4; i++)
	{
		q = ( i >> 0 ) & 0x01;
		p = ( i >> 1 ) & 0x01;
		printSeparator();
		printTruthValue(p);
		printTruthValue(q);
		printSeparator();
		printTruthValue(conjunction(p, q));
		printSeparator();
		std::cout << std::endl;
	}
	printFooter();

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
	std::cout << "How to read the tables: " << std::endl;
	std::cout << "The name of the operation is given first as a table header." << std::endl;
	std::cout << "The given propositions are p, q, and the result is indicated by r." << std::endl;
	std::cout << std::endl;
}

void printHeader(const char* header)
{
	std::cout << header << std::endl;
	std::cout << "+---------+" << std::endl;
	std::cout << "| p q | r |" << std::endl;
	std::cout << "+---------+" << std::endl;
}

void printFooter(void)
{
	std::cout << "+---------+" << std::endl;
	std::cout << std::endl;
}

void printProjectInfo(void)
{
	std::cout << std::endl;
	std::cout << "Discrete Mathematics and Its Applications by Kenneth H. Rosen" << std::endl;
	std::cout << "Chapter 1 - Computer projects - Project 1." << std::endl;
	std::cout << std::endl;
}

void printSeparator(void)
{
	std::cout << "| ";
}