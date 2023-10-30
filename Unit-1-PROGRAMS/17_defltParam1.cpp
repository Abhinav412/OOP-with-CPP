#include<iostream>
using namespace std;

void screen(int ht=40,int wd=20,char bg='*');

int main()
{
	screen();
	screen(60);
	screen(60,80);
	screen(60,80,'$');
}

void screen(int ht,int wd,char bg)
{
	cout<<ht<<" "<<wd<<" "<<bg<<endl;
}