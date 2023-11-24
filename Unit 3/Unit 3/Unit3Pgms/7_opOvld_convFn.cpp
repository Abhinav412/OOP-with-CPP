#include<iostream>
using namespace std;

class Fraction
{
	int num;
	int den;
	
	public:
	Fraction(int n=0,int d=0){num=n;den=d;}
	operator float()
	{
		return (float)num/den;
	}
};

int main()
{
	Fraction obj(5,2);
	
	float v=obj;
	cout<<v<<endl;
}