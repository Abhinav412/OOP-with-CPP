//pgm22_multiCatch.cpp
#include<iostream>
using namespace std;

int main()
{
		try
		{
			throw 5.5f;
//Demonstrate replacing 5.5 by 'a', 5, 5.5f, "ab"
		}catch(int a)
		{
			cout<<"I catch int excep: value="<<a<<endl;
		}catch(double a)
		{
			cout<<"I catch double excep: value="<<a<<endl;
		}catch(char a)
		{
			cout<<"I catch char excep: value="<<a<<endl;
		}catch(float a)
		{
			cout<<"I catch float excep: value="<<a<<endl;
		}catch(...)
		{
			cout<<"I catch any"<<endl;
		}
		cout<<"Bye"<<endl;
		return 0;
}
/*
Output:
I catch double excep: value=5.5
Bye
*/