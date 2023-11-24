//pgm07_diamond1.cpp
//This program demonstrates virtual inheritance, which makes class Person a virtual base class in the inheritance hierarchy
//During TA object creation, note that neither Teacher ctor nor Student ctor gives call to Person ctor instead TA class itself give call to Person ctor (Virtual Base Class)

//Note the order of ctors execution (in general):
//1)Virtual Base Class ctors in the order of inheritance
//2)Non Virtual Base Class ctors in the order of inheritance
//3)Member object's ctors in the order of declaration
//4)Derived class ctor
#include<iostream>
using namespace std;

class Person
{
	protected: string mname;
	public:
	Person(string name){cout<<"Person ctor"<<endl;mname=name;}
};
class Student:virtual public Person
{
	protected: string msrn;
	public:
	Student(string name,string srn):Person(name){cout<<"Student ctor"<<endl;msrn=srn;}
};
class Teacher:virtual public Person
{
	protected: string mid;
				int msalary;
	public:
	Teacher(string name,string id,int salary):Person(name){cout<<"Teacher ctor"<<endl;mid=id;msalary=salary;}
};
class TA:public Student,public Teacher
{
	protected: string msubject;
	public:
	TA(string name,string srn,string id,int salary,string subject):Person(name),Student(name,srn),Teacher(name,id,salary)
	{
		cout<<"TA ctor"<<endl;
		msubject=subject;
	}
	void display()
	{
		cout<<mname<<" "<<msrn<<" "<<mid<<" "<<msalary<<" "<<msubject<<endl;
	}
};
int main()
{
	TA t1("abc","01PES","01PES",10000,"C++");
	t1.display();
	return 0;
}
/*
Output:
Person ctor
Student ctor
Teacher ctor
TA ctor
abc 01PES 01PES 10000 C++
*/
