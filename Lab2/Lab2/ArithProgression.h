#include "Progression.h"

class ArithProgression : public Progression {
protected:              // member data
  long inc;				// increment amount
  virtual long nextValue() {		// advance by adding increment
    cur += inc;
    return cur;
  }
public:
  ArithProgression(long i = 1)		// constructor (default increment = 1)
    : Progression() { inc = i; }	// initializes base class and inc
};
