#include<iostream>
using namespace std;
class A
{
	protected:int m_a;
	public: A(int a):m_a(a){cout<<"A ctor"<<endl;}
	~A(){cout<<"A dtor"<<endl;}
	
};
class B:public A
{
	protected:int m_b;
	public: B(int a,int b):A(a),m_b(b){cout<<"B ctor"<<endl;}	
	~B(){cout<<"B dtor"<<endl;}
};
class C:public A
{
	protected:int m_c;
	public: C(int a,int c):A(a),m_c(c){cout<<"C ctor"<<endl;}	
	~C(){cout<<"C dtor"<<endl;}
};
class D:public B, public C
{
	protected:int m_d;
	public: D(int a,int b,int c,int d):B(a,b),C(a,c),m_d(d){cout<<"D ctor"<<endl;}
	~D(){cout<<"D dtor"<<endl;}	
	void display(){cout<<B::m_a<<" "<<m_b<<" "<<m_c<<" "<<m_d<<endl;}
};

int main()
{
	D d(1,2,3,4);
	d.display();	
}