//order of ctor call
//Base class ctor, member obj ctor, Derived class ctor fn body
#include<iostream>
using namespace std;

class A
{
	public:
	A(){cout<<"A ctor:"<<this<<endl;}
	~A(){cout<<"A dtor:"<<this<<endl;}
};
class B:public A
{
	public:
	B(){cout<<"B ctor:"<<this<<endl;}
	~B(){cout<<"B dtor:"<<this<<endl;}	
};
class C:public B
{
	B b;
	public:
	C(){cout<<"C ctor:"<<this<<endl;}
	~C(){cout<<"C dtor:"<<this<<endl;}	
};

int main()
{
	C c;
}