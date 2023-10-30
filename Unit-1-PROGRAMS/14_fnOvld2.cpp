//Functiono overload: different types of parameters
#include<iostream>
using namespace std;

int add(int a,int b);
double add(double a,double b);

int main()
{
	int num1=2,num2=3;
	double num3=2,num4=3;
	
	cout<<num1<<"+"<<num2<<"="<<add(num1,num2)<<endl<<endl;
	cout<<num3<<"+"<<num4<<"="<<add(num3,num4)<<endl;
}
int add(int a,int b)
{
	cout<<"2 int fn"<<endl;
	return a+b;
}
double add(double a,double b)
{
	cout<<"2 double fn"<<endl;
	return a+b;	
}