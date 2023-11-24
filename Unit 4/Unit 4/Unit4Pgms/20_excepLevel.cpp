//pgm20_excepLevel.cpp
#include<iostream>
using namespace std;


void g()
{
	throw "g threw me";
}
void f()
{
	g();
}

int main()
{
	try
	{
		f();
	}catch(char const* c)
	{
		cout<<"caught in main, f didn't handle me: "<<c<<endl;
	}

	return 0;
}
/*Output:
caught in main, f didn't handle me: g threw me
*/
