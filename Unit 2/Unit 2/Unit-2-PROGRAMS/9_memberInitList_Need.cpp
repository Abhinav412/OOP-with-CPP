#include<iostream>
using namespace std;

class Demo
{
	const int m_a;
	int &m_b;
	
	public:
	Demo(int a,int b):m_a(a),m_b(b){}
//	Demo(int a,int b){m_a=a;m_b=b;}	//Error
	void display(){cout<<m_a<<" "<<m_b<<endl;}
};
int main()
{
	int a=20;
	Demo obj1(2,a);
	obj1.display();
}