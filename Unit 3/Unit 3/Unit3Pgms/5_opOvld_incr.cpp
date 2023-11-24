#include<iostream>
using namespace std;

class Vector
{
	int x;
	int y;
	
	public:
	Vector(int x1=0,int y1=0){x=x1;	y=y1;}
	friend ostream& operator<<(ostream &os,const Vector& v);
	Vector& operator++()
	{
		x++;
		y++;
		
		return *this;
	}
	
	Vector operator++(int)
	{
		Vector temp=*this;
		
		x++;
		y++;
		
		return temp;
	}
	
};

ostream& operator<<(ostream &os,const Vector& v)
{
	os<<"("<<v.x<<","<<v.y<<")";
	return os;
}

int main()
{
	Vector v1(2,3);
	Vector v2(2,3);
	
	Vector res1=++v1;
	Vector res2=v2++;
	
	cout<<res1<<" "<<v1<<endl;
	cout<<res2<<" "<<v2<<endl;
}