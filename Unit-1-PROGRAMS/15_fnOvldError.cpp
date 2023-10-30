//Functiono overload: error
/*
#include<iostream>
using namespace std;

double area(double radius);
double area(double side);

int main()
{
	cout<<"Area of circle"<<area(1);
	cout<<"Area of square"<<area(1);
}

double area(double radius)
{
	return 3.14*radius*radius;
}
double area(double side)
{
	return side*side;
}
*/

#include<iostream>
using namespace std;

int demo();
double demo();

int main()
{
	int res1=demo();
	double res2=demo();
}

int demo()
{
	cout<<"I return an int"<<endl;
	return 2;
}
double demo()
{
	cout<<"I return a double"<<endl;
	return 2.5;	
}