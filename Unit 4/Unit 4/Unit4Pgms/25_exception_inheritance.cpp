//pgm25_exception_inheritance.cpp
/*When more than one catch clause is used, the catch clauses are matched in
syntactic order as they appear in your code; the first one that matches, wins.

If one catch is more inclusive than a later one, it will match first, 
and the more restrictive one, which comes later, will not be executed at all.

Therefore,catch clauses must be placed from most restrictive to least restrictive order.

In this example, as the base class object may be assigned with derived class object
(but slicing happens), the derived class exception is never called
*/

#include<iostream> 
using namespace std; 
  
class Base {}; 
class Derived: public Base {}; 
int main() 
{ 
//Uncomment and see the output
/* 	Derived d; 
	try { 
		throw d; 
	} 
	catch(Base b) {  
		cout<<"Caught Base Exception"<<endl; 
	} 
	catch(Derived d) {  //This catch block is NEVER executed 
        cout<<"Caught Derived Exception"<<endl; 
	}
   
 */
//correct way would be as follows
	Base b;
	try { 
		throw b;		 
	} 
	catch(Derived d) {  
		cout<<"Caught Derived Exception"<<endl; 
	} 
	catch(Base b) {  
		cout<<"Caught Base Exception"<<endl; 
	}  
   return 0; 
}

/*
Output:
Caught Base Exception
*/