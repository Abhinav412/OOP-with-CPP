#include<iostream>
using namespace std;

class Complex
{
	double re;
	double im;
	
	public:
	Complex(double r=0,double i=0)
	{
		re=r;
		im=i;
	}
	void display()
	{
		cout<<re<<"+"<<im<<"i";
	}
	friend Complex operator+(const Complex &c1,const Complex &c2);
	friend ostream& operator<<(ostream &o,const Complex &c);
	friend istream& operator>>(istream& i,Complex &c);
	friend bool operator==(const Complex &c1,const Complex &c2);
	friend bool operator!=(const Complex &c1,const Complex &c2);
};
Complex operator+(const Complex &c1,const Complex &c2)
{
	Complex c3;
	c3.re=c1.re+c2.re;
	c3.im=c1.im+c2.im;
	
	return c3;
}

ostream& operator<<(ostream &o,const Complex &c)
{
	o<<c.re<<"+"<<c.im<<"i";
	
	return o;
}

istream& operator>>(istream& i,Complex &c)
{
	i>>c.re;
	i>>c.im;
	
	return i;
}

bool operator==(const Complex &c1,const Complex &c2)
{
	return c1.re==c2.re && c1.im==c2.im;
}

bool operator!=(const Complex &c1,const Complex &c2)
{
	return !(c1==c2);
}
int main()
{
	Complex c1(2,3);
	Complex c2(4,5);
	
	Complex c3=c1+c2;
	cout<<c1<<" "<<c2<<endl;
	cout<<c3<<endl;
	
	Complex c4;
	cout<<"Enter one more complex number's real part and imaginary part"<<endl;
	cin>>c4;
	cout<<c4<<endl;
	
	cout<<(c4==c2)<<endl;
	cout<<(c4!=c2)<<endl;
	
	cout<<(2+c4)<<endl;
	cout<<(2==c4)<<endl;
}