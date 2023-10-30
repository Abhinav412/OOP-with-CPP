//Static members can be accessed
//using object or using class name
#include<iostream>
using namespace std;

class staticDemo
{
	int m_a=1000;
	static int m_b;
	public:
	const static int m_c=50;
//A static member function cannot be a const member function
	static displayStatic() //const
	{
		cout<<m_b<<" "<<m_c<<endl;
	}
};
int staticDemo::m_b;

int main()
{
	staticDemo::displayStatic();
	
	staticDemo obj1;
	obj1.displayStatic();
}