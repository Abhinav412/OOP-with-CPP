#include<iostream>
using namespace std;
void fnParamTest(int b,int &c);
int main() {
	int a=10;
	cout<<"a="<<a<<" &a="<<&a<<endl;
	fnParamTest(a,a);
}
void fnParamTest(int b,int &c) {
	cout<<"b="<<b<<" &b="<<&b<<endl;
	cout<<"c="<<c<<" &c="<<&c<<endl;
}
