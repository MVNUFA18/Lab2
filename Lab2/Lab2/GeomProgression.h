#include "Progression.h"

class GeomProgression : public Progression {
protected:                  // member data
  long base;				// base amount
  virtual long nextValue() {	// advance by multiplying
    cur *= base;
    return cur;
  }
public:
  GeomProgression(long b = 2)	// constructor (default base = 2)
    : Progression(1)			// progression starts at 1
    { base = b; }
};
