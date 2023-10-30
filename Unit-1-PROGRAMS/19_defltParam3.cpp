#include<iostream>
using namespace std;

int h=40;
int w=20;
char c='*';
void screen(int ht=h,int wd=w,char bg=c);
void localValue();

int main()
{
	screen();
	localValue();
	screen();
}

void screen(int ht,int wd,char bg)
{
	cout<<ht<<" "<<wd<<" "<<bg<<endl;
}
void localValue()
{
	int h=100;
	w=30;
}