#include<iostream>
#include<typeinfo>
using namespace std;

int main()
{
	auto i=2;
	auto f=2.5f;
	auto d=2.5;
	auto ch='a';
	
	auto *ptr=&i;
	
//	auto a;
//typeid(x).name()
	cout<<typeid(i).name()<<endl;
	cout<<typeid(f).name()<<endl;
	cout<<typeid(d).name()<<endl;
	cout<<typeid(ch).name()<<endl;
	cout<<typeid(ptr).name()<<endl;
}