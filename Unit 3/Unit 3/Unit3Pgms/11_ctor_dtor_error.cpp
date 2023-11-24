//This program is erroneous
#include<iostream>
using namespace std;

class Base
{
	int m_a;
	public:
	Base(int a=0):m_a(a){cout<<"Base ctor:"<<this<<endl;}
	~Base(){cout<<"Base dtor:"<<this<<endl;}
	void display(){cout<<m_a<<" ";}
};


class Derived:public Base
{
	int m_b;
	public:
//Base class ctor has to be called in the init list, not in ctor body
	Derived(int a,int b):m_b(b){Base(a);cout<<"Derived ctor:"<<this<<endl;}
	~Derived(){cout<<"Derived dtor:"<<this<<endl;}
	void display(){Base::display(); cout<<m_b<<endl;}
};

int main()
{
	Derived dobj(1,2);
	dobj.display();
}