#include<iostream>
using namespace std;

int main()
{
	int *ptr1=new int[3];
	
	cout<<"Junk Values"<<endl;
	for(int i=0;i<3;i++)
		cout<<ptr1[i]<<" ";
	cout<<endl;
	
	delete []ptr1;
	
	
	int *ptr2=new int[5]{10,20,30};
	cout<<"Initialized Values"<<endl;
	for(int i=0;i<5;i++)
		cout<<ptr2[i]<<" ";
	cout<<endl;
	
	delete []ptr2;
}