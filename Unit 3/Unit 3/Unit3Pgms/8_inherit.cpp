#include<iostream>
using namespace std;

class Base
{
	int m_a=1;
public:
	int m_b=2;
	
	void display()
	{
		cout<<"Base display"<<endl;
		cout<<m_a<<" "<<m_b<<" "<<m_x<<endl;
	}
protected:
	int m_x=100;
};

class Derived:public Base
{
	int m_c=3;
public:
	int m_d=4;
	void display()
	{
		Base::display();
		cout<<"Derived display"<<endl;
		cout<<m_c<<" "<<m_d<<endl;
//		cout<<m_a<<endl;		//Error
//		cout<<m_b<<endl;		//Okay
//		cout<<m_x<<endl;		//Okay
	}
};


int main()
{
	Base bobj;
	Derived dobj;
	
//	cout<<bobj.m_a<<endl;		//Error
//	cout<<bobj.m_b<<endl;		//Okay

//	cout<<dobj.m_a<<endl;		//Error
//	cout<<dobj.m_b<<endl;		//Okay
//	cout<<dobj.m_c<<endl;		//Error
//	cout<<dobj.m_d<<endl;		//Okay

//	cout<<bobj.m_x<<endl;		//Error
//	cout<<dobj.m_x<<endl;		//Error

	bobj.display();
	cout<<endl<<endl;
	dobj.display();
}