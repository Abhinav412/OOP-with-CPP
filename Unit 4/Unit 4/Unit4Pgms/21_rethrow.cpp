//pgm21_rethrow.cpp
#include<iostream>
using namespace std;

void g()
{
	throw "g threw me";
}
void f()
{
	try{
		g();
	}catch(const char* c)
	{
		cout<<"caught in f:"<<c<<endl;
		throw(c);	//or just throw, without any arguments causes rethrow
	}

}

int main()
{
	try
	{
		f();
	}catch(const char* c)
	{
		cout<<"caught in main, rethrown from f:"<<c<<endl;
	}
	return 0;
}

/*Output:
caught in f:g threw me
caught in main, rethrown from f:g threw me
*/
