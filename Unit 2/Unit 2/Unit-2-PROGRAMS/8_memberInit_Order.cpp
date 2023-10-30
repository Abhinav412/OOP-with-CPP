/* #include<iostream>
#include<cstring>
using namespace std;

class String
{
	int len;
	char *str;
	
	public:
	String(char *s):str(s),len(strlen(str)){}
	void display(){cout<<"String is:"<<str<<" Length="<<len;}
};

int main()
{
	char s[]="hi";
	String obj(s);
	obj.display();
} */

#include<iostream>
#include<cstring>
using namespace std;

class String
{
	char *str;
	int len;
	
	public:
	String(char *s):str(s),len(strlen(str)){}
	void display(){cout<<"String is:"<<str<<" Length="<<len;}
};

int main()
{
	char s[]="hi";
	String obj(s);
	obj.display();
}