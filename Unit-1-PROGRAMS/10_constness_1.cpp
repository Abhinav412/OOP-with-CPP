#include<iostream>
using namespace std;

int main()
{
	const int a=10;			//int const a=10;
//	a=10;

	cout<<a<<endl;
	
//ptr is pointing to constant data
//ptr is not constant pointer
	const int *ptr=&a;		//int const *ptr=&a;
	cout<<a<<" "<<*ptr<<endl;

//	*ptr=10;

	const int b=20;
	ptr=&b;
	cout<<*ptr<<endl;
}