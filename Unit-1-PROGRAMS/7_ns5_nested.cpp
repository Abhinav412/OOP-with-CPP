#include<iostream>
using namespace std;

namespace outer
{
	int a[]={10,20,30};
	int n=sizeof(a)/sizeof(a[0]);
	
	namespace inner
	{
		void display()
		{
			cout<<"I'm in inner namespace"<<endl;
			for(int i=0;i<n;i++)
				cout<<a[i]<<" ";
			cout<<endl;
		}
	}
	
	void print()
	{
		cout<<"I'm in outer namespace"<<endl;
		inner::display();
	}
	
}

void display()
{
	cout<<"I'm in global namespace"<<endl;
	outer::inner::display();
}
int main()
{
	display();
	cout<<endl;
	outer::inner::display();
	cout<<endl;
	outer::print();
}
