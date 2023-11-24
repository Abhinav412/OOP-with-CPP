//pgm11_staticCast.cpp
#include <iostream>
using namespace std;
// Built-in Types
int main() {
	int i = 2;
	double d = 3.7;
//	double *pd = &d;
	
	i=d;						// implicit -- 
	i = static_cast<int>(d);	// static_cast -- okay
	i=(int)d;					// C-style -- okay
	cout<<i<<endl;
	
	d = i;						// implicit -- okay
	d = static_cast<double>(i);	// static_cast -- okay
	d = (double)i; 				// C-style -- okay
	cout<<d<<endl;
	return 0;
}
/*Output:
3
3
*/