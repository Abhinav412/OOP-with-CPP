#include<iostream>
using namespace std;

int main()
{
	int *ptr1=new int;
	cout<<*ptr1<<endl;
	
	int *ptr2=new int(100);
	cout<<*ptr2<<endl;
	
	delete ptr1;
	delete ptr2;
}