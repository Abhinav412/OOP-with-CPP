//pgm23_matchAny.cpp
#include<iostream>
using namespace std;
int main()
{
	try{
		
		throw 'a';
		cout<<"i'm never executed here :-("<<endl;
	}
	catch(double a)
	{
		cout<<"exception occured, exception is double "<<a<<endl;
	}catch(...)
	{
		cout<<"I match any exception"<<endl;
	}

//Demonstrate by replacing 'a' by 5, 5.5f, "ab", 5.5

	return 0;
}

/*Output:
I match any exception
*/
