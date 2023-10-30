#include<iostream>
using namespace std;

int main()
{
	const int &j=10;	//int const &j=10;
	const int &k=2+3;
	
	cout<<j<<endl;
	cout<<k<<endl;
}