#include<iostream>
using namespace std;

namespace first
{
	void display()
	{
		cout<<"I'm in first namespace"<<endl;
	}
}

namespace second
{
	void display();
}

void second::display()
{
	cout<<"I'm in second namespace"<<endl;
}

void display()
{
	cout<<"I'm in global namespace"<<endl;
}

int main()
{
	display();					//::display();
	first::display();
	second::display();
}