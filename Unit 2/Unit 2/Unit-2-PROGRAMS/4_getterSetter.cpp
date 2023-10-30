#include<iostream>
using namespace std;

class COMPLEX
{
	private:
		double re;
		double im;
	public:
	void setRe(double r){re=r;}
	void setIm(double i){im=i;}
	double getRe(){return re;}
	double getIm(){return im;}
};

int main()
{
	COMPLEX c1;
	double r,i;
	cout<<"Complex number 1"<<endl;
	cout<<"Enter real part and imaginary part"<<endl;
	cin>>r>>i;
	c1.setRe(r);
	c1.setIm(i);
	cout<<c1.getRe()<<"+"<<c1.getIm()<<"i"<<endl;
	
	COMPLEX c2;
	cout<<"Complex number 2"<<endl;
	cout<<"Enter real part and imaginary part"<<endl;
	cin>>r>>i;
	c2.setRe(r);
	c2.setIm(i);
	cout<<c2.getRe()<<"+"<<c2.getIm()<<"i"<<endl;
	
	return 0;
}