#include<iostream>
#include<cstring>
using namespace std;

class String
{
	char *str;
	int len;
	
	public:
	void display()
	{
		cout<<"String is:"<<str<<" Length="<<len<<endl;
	}
	String(char *s)
	{
		cout<<"Parameterized ctor cald"<<endl;
		str=new char[strlen(s)+1];
		strcpy(str,s);
		len=strlen(str);
	}
	
	~String()
	{
		cout<<"dtor cald"<<endl;
		display();
		delete []str;
	}
	
	String(const String &other)
	{
		cout<<"Copy ctor cald"<<endl;
		str=new char[other.len+1];
		strcpy(str,other.str);
		len=other.len;
	}
	
	String& operator=(const String &other)
	{
		cout<<"copy assignment opr cald"<<endl;
		if(this!=&other)
		{
			delete []str;
			str=new char[other.len+1];
			strcpy(str,other.str);
			len=other.len;
		}
		return *this;
	}
};


int main()
{
	char st1[]="hi";
	String obj1(st1);
	String obj2=obj1;
	
	char st2[]="hello";
	String obj3(st2);
	obj3=obj2;
	
	obj3=obj3;
}