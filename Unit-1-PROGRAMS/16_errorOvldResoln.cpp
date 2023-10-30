#include<iostream> 
using namespace std; 
 void f(int,int);      		//F1 
void f(double,double);		//F2 
 
int main() { 
  f(2,3.5);  
} 
 
void f(int a,int b) { 
  cout<<"2 int fn"<<endl; 
} 
 
void f(double a,double b) { 
  cout<<"2 double fn"<<endl; 
} 
