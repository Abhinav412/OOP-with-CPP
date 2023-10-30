#include<iostream>
using namespace std;

class COMPLEX
{
	private:
		double re;
		double im;
	public:
	
		COMPLEX()
		{
			cout<<"default ctor called:"<<this<<endl;
			re=0;im=0;
		}
		COMPLEX(double r,double i)
		{
			cout<<"parameterized ctor called:"<<this<<endl;
			re=r;
			im=i;
		}
		void showComplex()
		{
			cout<<re<<"+"<<im<<"i"<<endl;
		}
		~COMPLEX(){cout<<"dtor called:"<<this<<endl;}
};

int main()
{
	COMPLEX c1;
	COMPLEX c2(4,5);
	c1.showComplex();
	c2.showComplex();
}