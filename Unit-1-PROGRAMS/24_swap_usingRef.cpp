#include<iostream>
using namespace std;

void swapPtr(int *pa,int *pb)
{
	int temp=*pa;
	*pa=*pb;
	*pb=temp;
}

void swapRef(int &ra,int &rb)
{
	int temp=ra;
	ra=rb;
	rb=temp;
}
int main()
{
	int a=10,b=20;
	
	cout<<"Before swap: a="<<a<<" b="<<b<<endl;
	swapPtr(&a,&b);
	cout<<"After swap: a="<<a<<" b="<<b<<endl;
	
	a=10;b=20;
	cout<<"Before swap: a="<<a<<" b="<<b<<endl;
	swapRef(a,b);
	cout<<"After swap: a="<<a<<" b="<<b<<endl;
}