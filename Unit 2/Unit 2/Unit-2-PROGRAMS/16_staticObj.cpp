#include<iostream>
using namespace std;

class Demo
{
	int m_a;
	public:
	Demo(){cout<<"ctor cald:"<<this<<endl;}
	~Demo(){cout<<"dtor cald:"<<this<<endl;}
};

Demo obj2;

int main()
{
	cout<<"Main started"<<endl;
	
	{
		static Demo obj1;
		Demo obj3;
	}
	cout<<"Main about to end"<<endl;
}