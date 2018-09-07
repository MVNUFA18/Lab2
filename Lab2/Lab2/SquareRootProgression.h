#ifndef SQUARE_ROOT_PROGRESSION  // avoid repeated expansion
#define SQUARE_ROOT_PROGRESSION

#include <iostream>
#include "DoubleProgression.h"

class SquareRootProgression {
protected:              // member data
	double first;				// first value of the progression
	double cur;				// current value of the progression

public:
	SquareRootProgression(double f = 0)		// constructor given first value
	{
		cur = first = f;
	}
	void printProgression(int n);		// print the first n values
	virtual ~DoubleProgression() { }		// virtual destructor
};

void DoubleProgression::printProgression(int n) {
	std::cout << firstValue();		// print the first value
	for (int i = 2; i <= n; i++) {
		std::cout << ' ' << nextValue();	// print values 2 through n
	}
	std::cout << '\n';			// print end of line
}

#endif
