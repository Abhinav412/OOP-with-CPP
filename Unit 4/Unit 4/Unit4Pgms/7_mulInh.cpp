#include<iostream>
using namespace std;

class Base1
{
	protected:
		int m_x;
		int m_data;
	public:
		Base1(int x,int data):m_x(x),m_data(data){}
		void show(){cout<<m_x<<" "<<m_data<<endl;}
};
class Base2
{
	protected:
		int m_y;
		int m_data;
	public:
		Base2(int y,int data):m_y(y),m_data(data){}
		void show(){cout<<m_y<<" "<<m_data<<endl;}
};
class Derived:public Base1,public Base2
{
	protected:
		int m_z;
	public:
		Derived(int x,int data1,int y,int data2,int z):Base1(x,data1),Base2(y,data2),m_z(z){}
		void show()
		{
			Base1::show();
			Base2::show();
			cout<<m_z<<endl;
		}
		void chk()
		{
			cout<<Base1::m_data<<" "<<Base2::m_data<<endl;
		}
};
//Resolve ambiguity 
	//using scope resolution operator
	//or by providing a new override for the method
	
//For data members: use scope resolution operator

int main()
{
	Derived d(1,2,3,4,5);
	d.show();
	d.Base1::show();
	d.Base2::show();
	cout<<endl;
	d.chk();
}