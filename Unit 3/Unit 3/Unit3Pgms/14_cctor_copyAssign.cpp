#include<iostream>
using namespace std;

class Base 
{ 
	int m_a;
   public: 
    Base(int a=0):m_a(a){cout<<"Base ctor"<<endl;} 
    Base(const Base& other){m_a=other.m_a; cout<<"Base cctor"<<endl;} 
	void display(){cout<<m_a<<endl;}
	Base& operator=(const Base& other)
	{
		if(this!=&other)
		{
			m_a=other.m_a;
		}
		return *this;
	}
}; 
class Derived : public Base 
{ 
	int m_b;
   public: 
    Derived(int a,int b):Base(a),m_b(b){cout<<"Derived ctor"<<endl;}
    Derived(const Derived& other) :Base(other)
	{
		m_b=other.m_b;
		cout<<"Derived cctor"<<endl;
	}
	void display(){Base::display(); cout<<m_b<<endl;}
	
	Derived& operator=(const Derived& other)
	{
		if(this!=&other)
		{
			Base::operator=(other);	//Base class copy assignment
			m_b=other.m_b;
		}
		return *this;
	}
}; 

int main()
{
	Derived dobj1(2,3);
	Derived dobj2=dobj1;
	
	dobj1.display();
	cout<<endl;
	dobj2.display();
	
	cout<<endl<<endl;
	Derived dobj3(10,20);
	dobj3=dobj1;
	dobj3.display();
}