//pgm16_templateStack.cpp
#include<iostream>
using namespace std;

template<class  T>
class Stack
{
	 T data[100];
	int top;
 public:
	Stack():top(-1){}
	~Stack(){}

	void push(const  T& item){data[++top]=item;}
	void pop(){--top;}
	const  T& ptop() const {return data[top];}
	bool empty() const {return top== -1;}
};

int main()
{
	Stack<char> s1;
	s1.push('a');	cout<<s1.ptop()<<endl;
	s1.push('b');	cout<<s1.ptop()<<endl;
	s1.pop();	cout<<s1.ptop()<<endl;

	Stack<int> s2;
	s2.push(20);	cout<<s2.ptop()<<endl;
	s2.push(10);	cout<<s2.ptop()<<endl;
	s2.pop();	cout<<s2.ptop()<<endl;

	return 0;
}

/*Output:
a
b
a
20
10
20
*/
