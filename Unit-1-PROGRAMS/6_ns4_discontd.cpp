#include<iostream>
using namespace std;

namespace first
{
	int a=2;
}

namespace first
{
	void display()
	{
		cout<<a<<endl;
	}
}

int main()
{
	first::display();
}