#include<iostream>
using namespace std;

int main()
{
	int a=10,b=20;	
	cout<<"Before swap: a="<<a<<" b="<<b<<endl;
	swap(a,b);
	cout<<"After swap: a="<<a<<" b="<<b<<endl;
	
	double c=10.5,d=20.5;
	cout<<"Before swap: c="<<c<<" d="<<d<<endl;
	swap(c,d);
	cout<<"After swap: c="<<c<<" d="<<d<<endl;
	
	char ch1='a',ch2='b';
	cout<<"Before swap:ch1="<<ch1<<" ch2="<<ch2<<endl;
	swap(ch1,ch2);
	cout<<"After swap:ch1="<<ch1<<" ch2="<<ch2<<endl;
}