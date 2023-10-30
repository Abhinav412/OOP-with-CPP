#include<iostream>
using namespace std;

int main()
{
	int a=10;
	int b=20;
	
//ptr is a constant pointer to a constant data
	const int *const ptr=&a;	//int const *const ptr=&a;
	cout<<a<<" "<<*ptr<<endl;
//	ptr=&b;
//	(*ptr)=100;

	a=100;
	cout<<a<<" "<<*ptr<<endl;
}