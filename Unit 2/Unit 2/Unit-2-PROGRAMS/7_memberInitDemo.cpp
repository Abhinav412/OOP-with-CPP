#include<iostream>
using namespace std;

class Demo
{
	int m_a;
	int m_b;
	
	public:
//	Demo(){m_a=0;m_b=0;}
//	Demo(int a,int b){m_a=a;m_b=b;}
//assignment operator cannot be used in init list
//curly braces or parentheses should be used
//	Demo(int a,int b):m_a=a,m_b{b}{}
	Demo(int a,int b):m_a(a),m_b(b){}
	void display(){cout<<m_a<<" "<<m_b<<endl;}
};

int main()
{
	Demo d1(2,3);
	d1.display();
}