//pgm14_dynamicCast.cpp
#include<iostream>
using namespace std;
class Base
{
	protected:
		int mb=10;
	public:
		Base() {}
		virtual ~Base() {}
		void display()
		{
			cout<<"Base::display(): "<<mb<<" ";
		}
};
class Derived : public Base
{
	protected:
		int md=20;
	public:
		Derived() {}
		virtual ~Derived() {}
		void display()
		{
			Base::display();
			cout<<"Derived::display(): "<<md<<endl;
		}
};
int main()
{
	Base* pb=new Base();
	Derived* pd = new Derived();
	cout<<"Display before typecast"<<endl;
	pb->display();
	cout<<endl;
	pd->display();
	
	delete pb;
	delete pd;
	
	Base b; Derived d;	
	pb = dynamic_cast<Base*>(&d); 	 //However, don't need a cast to go up the inheritance hierarchy
	pd = dynamic_cast<Derived*>(&b); // Need a cast to go down the hierarchy, RISKY
	
	cout<<endl<<"Base pointer pointing to derived object"<<endl;
	if(pb)
	{
		pb->display();
		cout<<endl;
	}
	else
		cout<<"dynamic_cast returned NULL"<<endl;
	
	cout<<endl<<"Derived pointer pointing to base object"<<endl;
	if(pd)
	{
		pd->display();
		cout<<endl;
	}
	else
		cout<<"dynamic_cast returned NULL"<<endl;

 	cout<<endl<<"Using reference for dynamic_cast"<<endl;
	Base base;
	Derived derived;
	try
	{
		cout<<"Base reference referring to derived object"<<endl;
		Base& br = dynamic_cast<Base&>(derived);
		br.display();
		cout<<endl;
	}catch(const bad_cast)
	{
		cout<<"Bad cast!!"<<endl;
	}
	
	try{
		cout<<"Derived reference referring to base object"<<endl;
		Derived& dr = dynamic_cast<Derived&>(base); 
		dr.display();
	}catch(...)
	{
		cout<<"Bad cast!!"<<endl;
	}
	return 0;
}
/*
Output:
Display before typecast
Base::display(): 10
Base::display(): 10 Derived::display(): 20

Base pointer pointing to derived object
Base::display(): 10

Derived pointer pointing to base object
dynamic_cast returned NULL

Using reference for dynamic_cast
Base reference referring to derived object
Base::display(): 10
Derived reference referring to base object
Bad cast!!
*/