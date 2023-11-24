//pgm15_composition.cpp
#include<iostream>
using namespace std;
class Date  
{  
	int day;  
	int month;  
	int year; 
public:
     	Date(int dd, int mm ,int yy)  
     	{  
  // 	  cout<<"Constructor of Date Class";
     	  day=dd;  
     	  month=mm;  
     	  year=yy;  
     	}  
//Default Constructor of Date Class	
	Date(){}
	void display(){cout<<day<<"-"<<month<<"-"<<year<<endl;}
};

class Employee {
	int id;
	string name;
	Date hireDate; 	//object of Date class  
public:
	Employee(int num, string n, Date hire) 
	{
//	        cout<<"Constructor of Employee Class is Called"<<endl;
	        id = num;
	        name = n;
	        hireDate = hire;
	}

	void display()
	{
	    cout<<"id=" <<id<<" Name="<<name<<" Hiredate=";
		hireDate.display();
	}
};

int main()
{
	Date d(12, 11, 2020);
	Employee emp(1, "abc", d);
	emp.display();

	return 0;
}

/*Output:
id=1 Name=abc Hiredate=12-11-2020
*/