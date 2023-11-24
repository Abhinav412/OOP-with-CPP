#include<iostream>
using namespace std;

class myList
{
	int mlist[5];
	
	public:
	myList()
	{
		for(int i=0;i<5;i++)
			mlist[i]=0;
	}
	
	int& operator[](int index)
	{
		static int err=-1;
		if(index>=0 && index<5)
			return mlist[index];
		else
			return err;
	}
};

int main()
{
	myList obj;
	obj[2]=10;
	cout<<obj[2]<<" "<<obj[0]<<endl;
}