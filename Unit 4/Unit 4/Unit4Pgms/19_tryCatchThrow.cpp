//pgm19_tryCatchThrow.cpp
#include<iostream>
using namespace std;

int main()
{
//if stmts throwing exceptions are not within try catch block, and exception occurs then it leads to abnormal program termination, uncomment the below throw stmt and check
//	throw 5;

	try{
		throw 5;
		cout<<"i'm never executed here :-("<<endl;
	}catch(int a)
	{
		cout<<"exception occured, exception no. is "<<a<<endl;
	}
	return 0;
}
/*Output:
exception occured, exception no. is 5
*/
