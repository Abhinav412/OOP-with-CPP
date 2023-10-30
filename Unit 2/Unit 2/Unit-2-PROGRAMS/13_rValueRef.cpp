#include<iostream>
using namespace std;

int main()
{
	int &&ref=10;
	
	cout<<ref<<endl;
	
	int &&ref1=(2+3);
	cout<<ref1;
}