#include<iostream>
using namespace std;

class friendDemo
{
	int m_a=100;
	friend void display1(friendDemo a);
	friend void display2(friendDemo &ra);
	friend void display3(friendDemo *pa);
};

void display1(friendDemo a)
{
	cout<<a.m_a<<endl;
}

void display2(friendDemo &ra)
{
	cout<<ra.m_a<<endl;
}

void display3(friendDemo *pa)
{
	cout<<pa->m_a<<endl;
}
int main()
{
	friendDemo obj;
	display1(obj);
	display2(obj);
	display3(&obj);
}