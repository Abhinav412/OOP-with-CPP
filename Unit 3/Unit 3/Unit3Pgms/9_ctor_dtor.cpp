#include<iostream>
using namespace std;

class Base
{
	public:
	Base(){cout<<"Base ctor:"<<this<<endl;}
	~Base(){cout<<"Base dtor:"<<this<<endl;}
};


class Derived:public Base
{
	public:
	Derived(){cout<<"Derived ctor:"<<this<<endl;}
	~Derived(){cout<<"Derived dtor:"<<this<<endl;}
};

int main()
{
	Derived dobj;
	cout<<endl<<endl;
	Base bobj;
	cout<<endl<<endl;
}