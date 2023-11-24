//pgm24_ctorDtorException.cpp
//When exception is thrown, the destructors for all locally-scoped names are called and 
//all code remaining in each function past the current point of execution is skipped before control goes to catch

#include<iostream>
using namespace std;

class Demo
{
	int a;
	public:
	Demo(int a1)
	{
		
		a=a1;
	}

	~Demo(){cout<<"Dtor "<<a<<endl;}
};

void f3()
{
	Demo a(30);
	throw "f3 threw me";
}

void f2()
{
	Demo a(20);
	f3();
}
void f1()
{
	Demo a(10);
	f2();
}

int main()
{

	try
	{
		Demo a(5);
		f1();
	}catch(const char* str)
	{
		cout<<"Caught in main: "<<str<<endl;
	}

	return 0;
}

/*Output:
Dtor 30
Dtor 20
Dtor 10
Dtor 5
Caught in main: f3 threw me
*/
