/* #include<iostream>
using namespace std;

template<typename T>
void swapRef(T &ra,T &rb)
{
	T temp=ra;
	ra=rb;
	rb=temp;
}

int main()
{
	int a=10,b=20;	
	cout<<"Before swap: a="<<a<<" b="<<b<<endl;
	swapRef<int>(a,b);
	cout<<"After swap: a="<<a<<" b="<<b<<endl;
	
	double c=10.5,d=20.5;
	cout<<"Before swap: c="<<c<<" d="<<d<<endl;
	swapRef(c,d);
	cout<<"After swap: c="<<c<<" d="<<d<<endl;
	
	char ch1='a',ch2='b';
	cout<<"Before swap:ch1="<<ch1<<" ch2="<<ch2<<endl;
	swapRef(ch1,ch2);
	cout<<"After swap:ch1="<<ch1<<" ch2="<<ch2<<endl;	
} */

#include <iostream>
using namespace std;
template<typename type>
type Max(type var1, type var2)
{
	if(var1 > var2)
		return var1;
	else
		return var2;
}
int main()
{
	int p;
	p = Max(100, 200);
	cout << p << endl;
	
	float q;
	q = Max(10.5,5.2);
	cout << q << endl;
	return 0;
}
