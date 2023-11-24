#include<iostream>
using namespace std;
class Base 
{ 
  public: 
    Base() { } 
   virtual  ~Base() {cout<<"dtor"<<endl;} 
}; 
class Derived : public Base 
{ 
  public: 
    Derived() { mString = new char[30]; } 
    ~Derived() { cout<<"ddtor"<<endl;delete [] mString; } 
  private: 
    char* mString; 
}; 
int main() 
{ 
  Base* ptr = new Derived(); 
  delete ptr;    // ~Derived is called because the destructor is virtual! 
  return 0; 
}
