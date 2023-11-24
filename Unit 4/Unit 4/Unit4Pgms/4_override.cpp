#include<iostream>
using namespace std;

class Base
{
	public:
	virtual void display();	
};
/* virtual */ void Base::display()
{
	cout<<"Base display"<<endl;
}
class Derived:public Base
{
	public:
	void display()override{Base::display(); cout<<"Derived display"<<endl;}
//	void display(int x)override{Base::display(); cout<<"Derived display"<<endl;}
};
int main()
{
	Derived dobj;
	Base *bptr=&dobj;
	bptr->display();
}