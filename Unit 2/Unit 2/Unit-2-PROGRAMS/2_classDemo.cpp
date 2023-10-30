#include<iostream>
using namespace std;

class COMPLEX
{
	private:
		double re;
		double im;
	public:
	
		void readComplex(double r,double i)
		{
			re=r;
			im=i;
		}

		void showComplex()
		{
			cout<<re<<"+"<<im<<"i"<<endl;
		}
};

int main()
{
	COMPLEX c1;
	double r,i;
	cout<<"Complex number 1"<<endl;
	cout<<"Enter real part and imaginary part"<<endl;
	cin>>r>>i;
	c1.readComplex(r,i);
	c1.showComplex();
	
	COMPLEX c2;
	cout<<"Complex number 2"<<endl;
	cout<<"Enter real part and imaginary part"<<endl;
	cin>>r>>i;
	c2.readComplex(r,i);
	c2.showComplex();
}