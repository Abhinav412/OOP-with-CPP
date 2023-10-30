#include<iostream>
using namespace std;

class COMPLEX
{
	private:
		double re;
		double im;
	public:
		COMPLEX(double r=0,double i=0);
		void showComplex();
		~COMPLEX();
};
COMPLEX::COMPLEX(double r,double i)
{
	cout<<"parameterized ctor called:"<<this<<endl;
	re=r;
	im=i;
}
void COMPLEX::showComplex()
{
	cout<<re<<"+"<<im<<"i"<<endl;
}
COMPLEX::~COMPLEX(){cout<<"dtor called:"<<this<<endl;}

int main()
{
	COMPLEX c1;
	COMPLEX c2(4,5);
	COMPLEX c3(7);
	c1.showComplex();
	c2.showComplex();
	c3.showComplex();
}