//pgm18_safeDivide.cpp

#include<iostream>
using namespace std;

int safeDivide(int num,int den)
{
	if(den==0)
		throw "div by 0";
	return num/den;
}
int main()
{
	try
	{
	cout<<safeDivide(4,2)<<endl;
	cout<<safeDivide(4,0)<<endl;
	cout<<"I'm nvr executed"<<endl;
	}catch(const char *c)
	{
		cout<<"Exception raised: "<<c<<endl;
	}
	return 0;
}
/*
2
Exception raised: div by 0
*/