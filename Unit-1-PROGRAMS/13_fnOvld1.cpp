//Functiono overload: different number of parameters
#include<iostream>
using namespace std;

double area(double radius);
double area(double length,double breadth);

int main()
{
	cout<<"Area of circle="<<area(1.0)<<endl;
	cout<<"Area of rectangle="<<area(2.0,3.0)<<endl;
}

double area(double radius)
{
	return 3.14*radius*radius;
}

double area(double length,double breadth)
{
	return length*breadth;
}