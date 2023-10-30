#include<iostream>
using namespace std;

int main()
{
	int a=10;
	int b=20;
	
//ptr is a constant pointer
//	int *const ptr;
	int *const ptr=&a;
	
	cout<<a<<" "<<*ptr<<endl;
//	ptr=&b;

	(*ptr)=100;
	cout<<a<<" "<<*ptr<<endl;
}