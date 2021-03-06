/* 
 * Dante Cherubini
 * 7 September 2018
 *
*/

#include "pch.h"
#include <iostream>
#include "FibProgression.h"

int main()
{
	FibonacciProgression Fib = FibonacciProgression(3, 4);
	int val = 0;
	val = Fib.getNthValue(3);
	cout << "Value: " << val << "\n";
	val = Fib.getNthValue(5);
	cout << "Value: " << val << "\n";
	val = Fib.getNthValue(10);
	cout << "Value: " << val << "\n";
	return 0;
}