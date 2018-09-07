/* DoubleProgression.h
 * Description: adapted from Progression base class, Code Fragment 2.1
 * by Goodrich, Tamassia and Mount (2011).
 * modified to use double floating point values instead of integers
 */

#ifndef DOUBLE_PROGRESSION_H  // avoid repeated expansion
#define DOUBLE_PROGRESSION_H

#include <iostream>

class DoubleProgression {
protected:              // member data
  double first;				// first value of the progression
  double cur;				// current value of the progression

  virtual double firstValue() {		// reset and return first value
    cur = first;
    return cur;
  }
  virtual double nextValue()		// advance and return next value
    { return ++cur; }
public:
  DoubleProgression(double f = 0)		// constructor given first value
    { cur = first = f; }
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
