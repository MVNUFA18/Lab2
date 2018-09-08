#ifndef SQUARE_ROOT_PROGRESSION 
#define SQUARE_ROOT_PROGRESSION

#include <iostream>
#include "DoubleProgression.h"

using namespace std;

class SquareRootProgression : public DoubleProgression {
protected:					// member data
	double first;			// first value of the progression
	double cur;				// current value of the progression

	virtual double nextValue() {
		cur = sqrt(cur);
		return cur;
	}

public:
	// Constructor
	SquareRootProgression(double f = 65536)
		: DoubleProgression(f) {
		cur = first = f;
	}
	void printProgression(int n);					// print the first n values
	virtual ~SquareRootProgression() { }		    // destructor
};
	void SquareRootProgression::printProgression(int n) {
		cout << firstValue();						// prints first value
		for (int i = 0; i < n; i++) {
		cout << ' ' << nextValue() << '\n';			// prints as many times as given
		}
		cout << endl;							    // print end of line
	}
#endif