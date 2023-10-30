/* #include<iostream>
using namespace std;

typedef struct Complex
{
	double re;
	double im;
	
	void showComplex()
	{
		cout<<re<<"+"<<im<<"i"<<endl;
	}
	
//
//	void showComplex(COMPLEX *const this)
//	{
//		cout<<this->re<<"+"<<this->im<<"i"<<endl;
//	}
//

}COMPLEX;

int main()
{
	COMPLEX c1;
	c1.re=2;
	c1.im=3;
	c1.showComplex();	//showComplex(&c1);
	
	COMPLEX c2;
	c2.re=4;
	c2.im=5;
	c2.showComplex();
} */

#include<iostream>
using namespace std;

typedef struct Complex
{
	private:
		double re;
		double im;
	public:
/*	
		void readComplex(double r,double i)
		{
			re=r;
			im=i;
		}
*/
		void readComplex(double re,double im)
		{
			this->re=re;
			this->im=im;
		}

		void showComplex()
		{
			cout<<re<<"+"<<im<<"i"<<endl;
		}
}COMPLEX;

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