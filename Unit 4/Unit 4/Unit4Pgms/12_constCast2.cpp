//pgm10_constCast2.cpp
#include <iostream>
using namespace std;

class A 
{
 	int i;
public: 
	A(int i1) : i(i1) {}
	int get() const { return i; }
	void set(int i1) { i = i1; }
};

int main() 
{
	const A a(1);
	cout<<a.get()<<endl;
//	a.set(5);   // error: 'void A::set(int)': cannot convert 'this' pointer from 'const A' to 'A &'
	const_cast<A&>(a).set(5);
//	const_cast<A>(a).set(5); 	// error: 'const_cast': cannot convert from 'const A' to 'A' i.e., cannot strip the constness of the object, so as given in the above line create a non const reference to the object and pass it to the function
	cout<<a.get()<<endl;

	return 0;
}
/* Output:
1
5
*/
