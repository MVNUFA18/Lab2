/* FibProgression.h
 * Authors: Goodrich, Tamassia and Mount (2004)
 * Description: FibonacciProgression
 * derived from Progression base class
 */

#include "Progression.h"
#include <iostream>

using namespace std;

class FibonacciProgression : public Progression {
protected:                  // member data
  long second;				// second value
  long prev;				// previous value
  long temporary;

  virtual long firstValue() {	// reset and return first value
    cur = first;
    prev = second - first;		// create fictitious previous
    return cur;
  }
  virtual long nextValue() {	// advance by (current + previous)
    long temp = prev;
    prev = cur;
    cur += temp;
    return cur;
  }

public:
  // constructor from first and second
  FibonacciProgression(long f = 0, long s = 1)
    : Progression(f) {			// initialize base with first
    second = s;
    prev = second - first;		// create fictitious previous
  }
  virtual long getNthValue(int numInSequence) {
	  temporary = 0;
	  cur = first;
	  prev = second - first;
	  for (int i = 1; i < numInSequence; i++) {
		  temporary = nextValue();
	  }
	  return temporary;
  }
};
