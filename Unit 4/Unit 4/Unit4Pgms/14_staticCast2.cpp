//pgm12_staticCast2.cpp
#include <iostream>
using namespace std;
// Class Hierarchy
class A { };
class B: public A { };
int main() 
{
	A a;
	B b;

	// UPCAST
	A *p = &b;						// implicit -- okay
	p = static_cast<A*>(&b); 		// static_cast -- okay
	p = (A*)&b;						// C-style -- okay

	// DOWNCAST
//	B* q = &a;						// implicit -- error
	B* q = static_cast<B*>(&a); 	// static_cast -- okay: RISKY: Should use dynamic_cast
	q = (B*)&a;						// C-style -- okay
	return 0;
}