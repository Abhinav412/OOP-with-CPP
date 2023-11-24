#include<iostream>
using namespace std;

class Base
{
	int m_a;
	public:
//remove the default value and 
//see the error if there is no base class ctor cald in derived class
	Base(int a=0):m_a(a){cout<<"Base ctor:"<<this<<endl;}
	~Base(){cout<<"Base dtor:"<<this<<endl;}
	void display(){cout<<m_a<<" ";}
};


class Derived:public Base
{
	int m_b;
	public:
//Comment the base class ctor call and see the difference in output
	Derived(int a,int b):Base(a),m_b(b){cout<<"Derived ctor:"<<this<<endl;}
	~Derived(){cout<<"Derived dtor:"<<this<<endl;}
	void display(){Base::display(); cout<<m_b<<endl;}
};

int main()
{
	Derived dobj(1,2);
	dobj.display();
}