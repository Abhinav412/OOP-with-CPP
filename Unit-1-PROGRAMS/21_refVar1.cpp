#include<iostream>
using namespace std;

int main()
{
	int i=15;
	int &j=i;
	
	cout<<i<<" "<<j<<endl;
	i=20;
	cout<<i<<" "<<j<<endl;
	j=25;
	cout<<i<<" "<<j<<endl;
	
	cout<<"Address of i="<<&i<<endl;
	cout<<"Address of j="<<&j<<endl;

/*	
//Once a reference, always a reference to the same variable
	int k=100;
	&j=k;
*/
}