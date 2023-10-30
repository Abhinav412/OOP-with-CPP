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
		
		COMPLEX(const COMPLEX &other)
		{
			cout<<"copy ctor cald"<<this<<endl;
			this->re=other.re;
			this->im=other.im;
		}
		
		COMPLEX& operator=(const COMPLEX& other)
		{
			cout<<"copy assignmnt opr cald"<<endl;
			if(this!=&other)
			{
				this->re=other.re;
				this->im=other.im;
			}
			return *this;
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
	COMPLEX c3(c1);
	c1.showComplex();
	c2.showComplex();
	c3.showComplex();
	
	COMPLEX c4;
	c4=c2;			//copy assign
	c4.showComplex();
	c4=c2=c1;		//copy assign is cald 2 times
	c4.showComplex();
	c2.showComplex();
}