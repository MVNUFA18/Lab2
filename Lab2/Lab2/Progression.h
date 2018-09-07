/* Progression.h
 * Authors: Goodrich, Tamassia and Mount (2004)
 * Description: Progression base class, from Code Fragment 2.1
 */

#ifndef PROGRESSION_H  // avoid repeated expansion
#define PROGRESSION_H

#include <iostream>

class Progression {
protected:              // member data
  long first;			// first value of the progression
  long cur;				// current value of the progression

  virtual long firstValue() {		// reset and return first value
    cur = first;
    return cur;
  }
  virtual long nextValue()		// advance and return next value
    { return ++cur; }
public:
  Progression(long f = 0)		// constructor given first value
    { cur = first = f; }
  void printProgression(int n);		// print the first n values
  virtual ~Progression() { }		// virtual destructor
};

void Progression::printProgression(int n) {
  std::cout << firstValue();		// print the first value
  for (int i = 2; i <= n; i++) { 
    std::cout << ' ' << nextValue();	// print values 2 through n
  }
  std::cout << '\n';			// print end of line
}

#endif
