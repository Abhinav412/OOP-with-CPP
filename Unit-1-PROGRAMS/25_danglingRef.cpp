/*
//This program crashes
#include<iostream>
using namespace std;
int& abc() { 
	int x=10;
	cout<<"x="<<x<<" &x="<<&x<<endl;
	return x;
}
int main() {
	int &res=abc();
	cout<<"res="<<res<<" &res="<<&res<<endl;
}
*/

//Make x static, avoids dangling reference
#include<iostream>
using namespace std;
int& abc() { 
	static int x=10;
	cout<<"x="<<x<<" &x="<<&x<<endl;
	return x;
}
int main() {
	int &res=abc();
	cout<<"res="<<res<<" &res="<<&res<<endl;
}
