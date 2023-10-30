#include<iostream>
using namespace std;

namespace first
{
	class demo
	{
		public:
		void display()
		{
			cout<<"I'm in first namespace"<<endl;
		}
	};
}

namespace second
{
	class demo
	{
		public:
		void display();
	};
}

void second::demo::display()
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
	
	first::demo obj1;
	obj1.display();
	
	second::demo obj2;
	obj2.display();
}