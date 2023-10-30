#include<iostream> 
using namespace std; 
int Area(int a, int b = 10) 
{ 
	return (a * b);
} 
double Area(double c, double d) 
{
	return (c * d); 
} 
int main() 
{ 
	int x = 10, y = 12, t; 
	double z = 20.5, u = 5.0, f; 
	t = Area(x);           
	cout << "Area = " << t << endl;      
	f = Area(z, u);          
	cout << "Area = " << f << endl;     
	return 0; 
} 
